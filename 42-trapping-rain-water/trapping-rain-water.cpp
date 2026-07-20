class Solution {
public:
    int trap(vector<int>& height) {
       int n = height.size();
       if(n <= 2){
        return 0;
       } 
       int leftMax[n], rightMax[n];
       leftMax[0] = height[0];
       rightMax[n - 1] = height[n - 1];

       // Left Max Array;
       for(int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i - 1], height[i]);
       } 

       // Right Maz Array;
       for(int i = n - 2; i >= 0; i--){
        rightMax[i] = max(rightMax[i + 1], height[i]);
       }

       // Calculate Trapped Rain Water;
       int trappedWater = 0;
       for(int i = 0; i < n; i++){
        trappedWater += min(leftMax[i] , rightMax[i]) - height[i];
       }

       return trappedWater;
    }
};