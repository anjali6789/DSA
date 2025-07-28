class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int maxFreq[26]={0};
        int maxfrq=0;
        int ans=0;
        while(j<s.size()){
            //incrementing the freq of current character
            maxFreq[s[j]-'A']++;
            //calculating the max freq up till now
            maxfrq=max(maxfrq,maxFreq[s[j]-'A']);
            //if it is not under k make it under k 
            while(j-i+1-maxfrq>k){
                maxFreq[s[i]-'A']--;
                i++;
                maxfrq=0;
                for(int i=0;i<26;i++){
                    maxfrq=max(maxfrq,maxFreq[i]);
                }
            }// if it is under k then this is the ans now increment j
                ans=max(ans,j-i+1);
                j++;
            
        }return ans;
    }
};