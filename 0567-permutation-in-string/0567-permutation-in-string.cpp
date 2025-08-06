class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        int hash1[26]={0};
        int hash2[26]={0};
        for(int i=0;i<s1.size();i++){
            hash1[s1[i]-'a']++;
        }
        int i=0;
        int j=s1.size()-1;
        for(int k=0;k<s1.size();k++){
            hash2[s2[k]-'a']++;
        }
        while(j<s2.size()){
            bool broken=false;
            for(int k=0;k<26;k++){
                if(hash1[k]!=hash2[k]){
                    broken=true;
                    break;
                }
            }
            if(!broken){
                return true;
            }else if(broken&&j<s2.size()){
                //slide window
                hash2[s2[i]-'a']--;
                i++;
                j++;
                if(j<s2.size()) hash2[s2[j]-'a']++;
            }
        }return false;
    }
};