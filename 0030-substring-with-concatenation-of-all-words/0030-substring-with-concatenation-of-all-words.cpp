class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int>mp;
        unordered_map<string,int>mpunchanged;
        for(auto &it:words){
            mp[it]++;
            mpunchanged[it]++;
        }
        int count=0;
        int i=0;
        int j=0;
        int wordlen=words[0].size();
        int windowlen=words[0].size()*words.size();
        vector<int>ans;
        for(int i=1;i<wordlen;i++){
            int j=i;
            int k=i;
            count=0;
            for (auto &it:mpunchanged){
                mp[it.first]=it.second;
            }
            while(j+windowlen<=s.size()){
                
                while(k-j<=windowlen){
                    if(mp[s.substr(k,wordlen)]>0){
                        mp[s.substr(k,wordlen)]--;
                        k+=wordlen;
                        count++;
                    }else{
                        //not found
                        break;
                    }
                }if(count!=words.size()){
                    //not found slide the window
                    if(mpunchanged[s.substr(j,wordlen)]>0){
                        mp[s.substr(j,wordlen)]++;
                        count--;
                    }
                    j+=wordlen;
                    if(k<j) k=j;
                }else{
                    //found
                    ans.push_back(j);
                    if(mpunchanged[s.substr(j,wordlen)]>0){
                        mp[s.substr(j,wordlen)]++;
                        count--;
                    }
                    j+=wordlen;
                    
                    
                }
            }
        }
        count=0;
        for (auto &it:mpunchanged){
                mp[it.first]=it.second;
            }
        while(i+windowlen<=s.size()){
            
            while(j-i<windowlen){
                if(mp[s.substr(j,wordlen)]>0){
                    mp[s.substr(j,wordlen)]--;
                    j+=wordlen;
                    count++;
                }else{
                    //not found
                    break;
                }
            }if(count!=words.size()){
                //not found slide the window
                if(mpunchanged[s.substr(i,wordlen)]>0){
                    mp[s.substr(i,wordlen)]++;
                    count--;
                }
                i+=wordlen;
                if(j<i){
                    j=i;
                }
                
            }else{
                //found
                ans.push_back(i);
                if(mpunchanged[s.substr(i,wordlen)]>0){
                    mp[s.substr(i,wordlen)]++;
                    count--;
                }
                i+=wordlen;
                
                
            }
                
        }return ans;
    }
};