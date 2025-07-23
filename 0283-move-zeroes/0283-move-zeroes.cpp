class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=0;
        int p2=0;
        int n=nums.size();
        while(p1<n&&p2<n){
            if(nums[p1]==0){
                while(p2<n&&nums[p2]==0){
                    p2++;
                }
                if(p2==n){
                    break; //this means all the 0's are in end
                }
                nums[p1]=nums[p2];
                nums[p2]=0;
                p1++;
                p2++;
            }else{
                p1++;
                p2++;
            }
        }
    }
};