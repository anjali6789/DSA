class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            
            if(nums[j]==val){
                count++;
                j--;
                
            }else if(nums[i]==val){
                count++;
                nums[i]=nums[j];
                i++;
                j--;
            }
            else{
                i++;
            }
        }return nums.size()-count;
    }
};