class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pointer1;
        int pointer2;
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i!=0&&nums[i-1]==nums[i])continue;
            int target=-nums[i];
            pointer1=i+1;
            pointer2=nums.size()-1;
            while(pointer1<pointer2){
                if(nums[pointer1]+nums[pointer2]==target){
                    ans.push_back({nums[i],nums[pointer1],nums[pointer2]});
                    //skipping left and right duplicates
                    while (pointer1 < pointer2 && nums[pointer1] == nums[pointer1 + 1]) pointer1++;
                    while (pointer1 < pointer2 && nums[pointer2] == nums[pointer2 - 1]) pointer2--;
                    pointer1++;
                    pointer2--;
                }else if(nums[pointer1]+nums[pointer2]<target){
                    pointer1++;
                }else{
                    pointer2--;
                }
            }
        }return ans;
    }
};