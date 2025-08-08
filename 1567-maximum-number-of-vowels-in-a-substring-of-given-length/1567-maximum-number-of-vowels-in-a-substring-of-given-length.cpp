class Solution {
public:
    int maxVowels(string s, int k) {
        //k is window size
        int vowfreq=0;
        int i=0;
        int j=k-1;
        int ans=0;
        for(int l=0;l<k;l++){
            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'){
                vowfreq++;
            }
        }
        while(j<s.size()){
            ans=max(ans,vowfreq);
            //sliding
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowfreq--;
                
            }i++;
            j++;
            if (j<s.size()){
                
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                    vowfreq++;
                }
            }
        }return ans;
    }
};