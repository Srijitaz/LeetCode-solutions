class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxSum = INT_MIN;
        
        int currentSum = 0;
        
        for(int i=0;i<nums.size();i++){
            currentSum = max(currentSum+ nums[i], nums[i]);
            maxSum = max(currentSum, maxSum);
        }
        return maxSum;
    }
};