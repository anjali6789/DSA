class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>lastapperance(26);
        for(int i=0;i<s.size();i++){
            lastapperance[s[i]-'a']=i;
        }
        int i=0;
        int start=0;
        int end=0;
        vector<int>ans;
        while(i<s.size()){
            end=max(end,lastapperance[s[i]-'a']);
            if(i==end){
                //got one partition
                ans.push_back(end-start+1);
                start=i+1;
            }i++;
        }return ans;
    }
};