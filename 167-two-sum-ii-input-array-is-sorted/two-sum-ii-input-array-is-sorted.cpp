class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, end = numbers.size() - 1;
        vector<int>ans;
        int sum = 0;
        while(st < end){
            sum = numbers[st] + numbers[end];
            if(sum == target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            } else if(sum > target){
                end--;
            } else {
                st++;
            }
        }
        return ans;
    }
};