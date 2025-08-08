class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zerocount=0;
        int i=0;
        int j=0;
        int ans=INT_MIN;
        while(j<nums.size()){
            if(zerocount<k&&nums[j]==0){
                zerocount++;
                j++;
                ans=max(ans,j-i);
            }else if(zerocount>=k&&nums[j]==0){
                //sliding the window
                if(nums[i]==0){
                    zerocount--;
                }i++;
            }else{
                j++;
                ans=max(ans,j-i);
            }
            
        }return ans;
    }
};