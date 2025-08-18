class Solution {
public:
    bool isPalindrome(long long x) {
        if(x==0) return true;
        if(x<0||x%10==0) return false; // negatives cant be palindrome and numbers like 10 1000 cant be either
        int reversed=0;
        while(x>reversed){
            reversed=reversed*10+(x%10);
            x=x/10;
        }return (reversed==x|| x == reversed / 10 );
    }
};