class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        int i=0;
        int j=0;
        int cnt=0;
        int minlength=INT_MAX;
        int startindex=-1;
        while(j<s.size()){
            if(mp[s[j]]>0){
                cnt++;
            }
            mp[s[j]]--;
            
            while(i<s.size()&&cnt==t.size()){
                //valid window 
                if(j-i+1<minlength){
                    minlength=j-i+1;
                    startindex=i;
                    
                }
                mp[s[i]]++;
                if(i<s.size()&&mp[s[i]]>0){
                    //left an element 
                    cnt--;
                    
                }
                
                i++;

            }j++;

        }if(startindex==-1){
            return "";
        }
        return s.substr(startindex,minlength);
    }
};