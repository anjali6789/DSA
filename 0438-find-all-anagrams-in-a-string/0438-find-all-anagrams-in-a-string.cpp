class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (p.size()>s.size()){
            return {};
        }
        int i=0;
        int j=p.size()-1;
        int hash1[26]={0}; //for p
        int hash2[26]={0}; //for s
        vector<int>ans;
        for(int l=0;l<p.size();l++){
            hash1[p[l]-'a']++;
        }
        for(int k=0;k<p.size();k++){
            hash2[s[k]-'a']++;
        }
        
        while(j<s.size()){
            bool broken=false;
            for(int m=0;m<26;m++){
                if(hash1[m]!=hash2[m]){
                    broken=true;
                    break;
                }
            }if(!broken){
                ans.push_back(i);
            }                
            //slide window
            hash2[s[i]-'a']--;
            i++;
            j++;
            if(j<s.size()) hash2[s[j]-'a']++;
        }return ans;
    }
};