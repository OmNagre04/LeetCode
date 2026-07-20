class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int MaxSum = INT_MIN;
        int CurSum = 0;
        for(int i = 0; i < n; i++){
            CurSum += nums[i];
            MaxSum = max(MaxSum, CurSum);

            if(CurSum < 0){
                CurSum = 0;
            }
        }

        return MaxSum;
    }
};