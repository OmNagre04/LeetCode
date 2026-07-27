class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n + 1, 0);
        int duplicate = 0, missing = 0;
        for(int i = 0; i < n; i++){
            ans[nums[i]]++;
        }
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == 2){
                duplicate = i;
            }
            if(ans[i] == 0){
                missing = i;
            }
        }
        return {duplicate, missing};
    }
};