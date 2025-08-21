class Solution {
public:
    int jump(vector<int>& nums) {
        //range based bfs traversal pattern
        int left=0;
        int right=0;
        if(nums.size()==1){
            return 0;
        }
        int jump=0;
        int maximum=0;
        for(int i=0;i<nums.size();i++){
            if(i==right||i==nums.size()-1){
                maximum=max(maximum,i+nums[i]);
                left=right+1;
                right=maximum;
                jump++;
            }else if(i<right&&i+nums[i]>maximum){
                maximum=max(maximum,i+nums[i]);
            }
        }//reducing 1 because one extra jump is added for last element
        return jump-1;
    }
};