class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       if(nums.size()==1) {
           return;
       }
        int idx1;
        for(int i=nums.size()-2; i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1 = i;
                break;
            }
        }
        if(idx1<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            
            int idx2;
            for(int i=nums.size()-1; i>=0;i--){
                if(nums[idx1]<nums[i]){
                    idx2= i;
                    break;
                }
            }
            swap(nums[idx1], nums[idx2]);
            
            reverse(nums.begin()+idx1+1, nums.end());
        }
        
    }
};