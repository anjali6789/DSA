class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //window size = minutes
        int i=0;
        int j=minutes-1;
        int happycustomers=0;
        int maxhappy=0;
        //adding all customers which arrive when non grumpy
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0){
                happycustomers+=customers[i];
            }
        }
        //calculating for first m minutes
        for(int k=0;k<minutes;k++){
            if(grumpy[k]==1){
                happycustomers+=customers[k];
            }
        }
        maxhappy=max(maxhappy,happycustomers);
        while(j<customers.size()){
            //sliding
            if(grumpy[i]==1){
                happycustomers-=customers[i];
            }i++;
            if(j+1<customers.size()&&grumpy[j+1]==1){
                happycustomers+=customers[j+1];
            }j++;
            maxhappy=max(maxhappy,happycustomers);
        }return maxhappy;
    }
};