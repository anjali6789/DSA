class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        
        vector <int>ans(nums.size());
        int i=0;
        int j=nums.size()-1;
        int index=n-1;
        while(i<=j){
            if(i==j){
                ans[index]=(nums[i]*nums[i]);
                break;
            } 
            if((nums[j]*nums[j])>=(nums[i]*nums[i])){
                ans[index]=(nums[j]*nums[j]);
                j--;
                index--;
                
            }else if((nums[i]*nums[i])>(nums[j]*nums[j])){
                
                ans[index]=(nums[i]*nums[i]);
                index--;
                i++;
            }
            
        }
        
        
        return ans;
    }
};