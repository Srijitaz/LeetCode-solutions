class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int f = 0;
        for(int s = 0; s< nums.size();s++){
            if(nums[s]==val){
                continue;
            }
            nums[f] = nums[s];
            f++;
        }
        return f;
    }
};