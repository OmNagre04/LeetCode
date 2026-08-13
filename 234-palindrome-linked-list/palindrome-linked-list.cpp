/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseLinkedList(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newHead = reverseLinkedList(slow->next);

        ListNode* first = head;
        ListNode* second = newHead;

        bool isPal = true;

        while(newHead != NULL){
            if(head->val != newHead->val){
                // reverseLinkedList(newHead);
                isPal = false;
                break;
            } 
            head = head->next;
            newHead = newHead->next;
            
        }
        
        // slow->next = reverseLinkedList(newHead);
        return isPal;
    }
};