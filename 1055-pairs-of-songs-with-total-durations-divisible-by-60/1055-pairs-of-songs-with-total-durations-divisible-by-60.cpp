class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>remainder(time.size());
        unordered_map<int,int>mp;
        for(int i=0;i<time.size();i++){
            remainder[i]=time[i]%60;
            mp[remainder[i]]++;
        }
        
        
        long long ans=0;
        for(int i=0;i<remainder.size();i++){
            if(remainder[i]==0||remainder[i]==30){
                ans+=mp[remainder[i]]-1;
            }else{
                ans+=mp[60-remainder[i]];
            }
        }return ans/2;
        
    }
};