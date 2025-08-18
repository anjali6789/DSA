class Solution {
public:
    bool isPalindrome(long long x) {
        if(x==0) return true;
        if(x<0||x%10==0) return false; // negatives cant be palindrome and numbers like 10 1000 cant be either
        long long temp=x;
        long long temp2=0;
        while(temp!=0){
            temp2=temp2+(temp%10);
            cout<<temp2<<endl;
            temp2=temp2*10;
            temp=temp/10;
        }if(temp2/10==x) {
            return true;
        } return false;
    }
};