class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int ans=0;
        // mp to store freq of elements
        unordered_map<int,int>mp;
        while(j<nums.size()){
            sum+=nums[j];
            mp[nums[j]]++;
            while(mp[nums[j]]>1){
                //slide
                mp[nums[i]]--;
                sum-=nums[i];
                i++;
            }ans=max(ans,sum);
            j++;
        }return ans;
    }
};