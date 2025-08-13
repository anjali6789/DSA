class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        unordered_map<int,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        vector <int>ans;
        for(auto &it:nums){
            if(mp[target-it]>0){
                if(it==target-it){
                    //same eg target =8 and it=4
                    if(mp[target-it]>=2){
                        for(int i=0;i<nums.size();i++){
                            if(nums[i]==it||nums[i]==target-it){
                                ans.push_back(i);
                            }
                        }
                        return ans;
                    }
                }else{
                    for(int i=0;i<nums.size();i++){
                        if(nums[i]==it||nums[i]==target-it){
                            ans.push_back(i);
                        }
                    }
                    
                    return ans;
                }
            }
        }return ans;
    }
};