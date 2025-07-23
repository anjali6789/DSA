class Solution {
public:
    bool isPalindrome(string s) {
        int p1=0;
        int p2=s.length()-1;
        
        while(p1<p2){
            int a= (int)s[p1];
            int b= (int)s[p2]; //converting both to ascii
            // Convert uppercase to lowercase
            if (a >= 'A' && a <= 'Z') a = (char)(a + 32);
            if (b >= 'A' && b <= 'Z') b = (char)(b + 32);

            if((a>=97&&a<=122)||(a>=48&&a<=57)){
                if((b>=97&&b<=122)||(b>=48&&b<=57)){
                    //it means both a and b are valid
                    if(a==b){
                        p1++;
                        p2--;
                    }else{
                        return false;
                    }
                }else{
                    //b is not valid
                    p2--;
                }
            }else{
                //a is not valid
                p1++;
            }
        }return true;
    }
};