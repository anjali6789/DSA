class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;//iterator for s
        int j=0;//iterator for t
        while(i<s.size()&&j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }if(i>=s.size()){
            //found the subsequence as s is exhausted
            return true;
        }return false;
    }
};