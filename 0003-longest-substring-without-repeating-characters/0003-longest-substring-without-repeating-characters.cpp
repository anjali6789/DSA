class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ansmain=0;
        unordered_map<char,int>st;
        int i=0,j=0;
        while(j<s.size()){
            if(st.find(s[j]) != st.end()){ //element is in the map
                i=max(st[s[j]]+1,i);
                
                
            }
            st[s[j]]=j;
            ansmain=max(ansmain,j-i+1);
            j++;
        }return ansmain;
        
    }
};