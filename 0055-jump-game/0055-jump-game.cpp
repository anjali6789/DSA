class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }
        int maxreach=nums[0];
        for(int i=1;i<nums.size();i++){
            //this means we couldnt reach to current index by prev
            if(maxreach<i){
                return false;
            }
            maxreach=max(maxreach,i+nums[i]);
        }
        return true;
    }
};