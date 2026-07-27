class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int max_water = INT_MIN;

        int start = 0, end = n - 1;

        while(start < end){
            max_water = max(max_water, ((end - start) * min(nums[start], nums[end])));
            if(nums[start] < nums[end]){
                start++;
            } else {
                end--;
            }
        }

        return max_water;
    }
};