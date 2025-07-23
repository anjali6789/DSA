class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1=0;
        int p2=0;
        int ans=0;
        int n=nums.size();
        while(p1<n&&p2<n){
            while(p2!=n&&nums[p1]==nums[p2]){
                
                p2++;
            }
            if(p2!=n){ //skip for p==n becoz our traversal ended at that
                p1++;
                nums[p1]=nums[p2];
            }
            
            ans++;
        }return ans;
    }
};