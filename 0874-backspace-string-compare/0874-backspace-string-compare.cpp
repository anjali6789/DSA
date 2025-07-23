class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //brute force
        // int i=0;
        // string sresult="";
        // string tresult="";
        // while(i<s.size()){
        //     if(s[i]>='a'&&s[i]<='z'){
        //         //valid char add to string
        //         sresult+=s[i];
        //     }else{
        //         if(!sresult.empty()){
        //             sresult.pop_back();
        //         }
                
        //     }i++;
        // }i=0;
        // while(i<t.size()){
        //     if(t[i]>='a'&&t[i]<='z'){
        //         //valid char add to string
        //         tresult+=t[i];
        //     }else{
        //         if(!tresult.empty()){
        //             tresult.pop_back();
        //         }
                
        //     }i++;
        // }
        // if(sresult==tresult){
        //     return true;
        // }return false;


        //optimal solution
        int i=s.size()-1;
        int j=s.size()-1;
        int k=t.size()-1;
        int l=t.size()-1;
        int hashcount=0;
        int count1=0;
        int count2=0;
        while(i>=0){
            if(hashcount==0&&s[i]>='a'&&s[i]<='z'){
                s[j]=s[i];
                j--;
                count1++;
            }else if(hashcount!=0&&s[i]>='a'&&s[i]<='z'){
                hashcount--;
            }else{
                hashcount++;
            }i--;
        }hashcount=0;
        while(k>=0){
            if(hashcount==0&&t[k]>='a'&&t[k]<='z'){
                t[l]=t[k];
                l--;
                count2++;
            }else if(hashcount!=0&&t[k]>='a'&&t[k]<='z'){
                hashcount--;
            }else{
                hashcount++;
            }k--;
        }if(count1==count2){
            if(count1==0){
                return true;
            }j++;
            l++;
            while(j<s.size()&&l<t.size()){
                if(s[j]!=t[l]){
                    return false;
                }j++;
                l++;
            }if(j!=s.size()||l!=t.size()){
                return false;
            }return true;
        }return false; 
        
    }
};