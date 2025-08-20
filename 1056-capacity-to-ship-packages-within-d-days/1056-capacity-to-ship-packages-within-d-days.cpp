class Solution {
public:
    int daysForCapacity(vector<int>& weights, int capacity){
        //finding the no of days for a given capacity
        int load=0;
        int days=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>capacity){
                days++;
                // this new day will have only this load
                load=weights[i]; 
            }else{
                load+=weights[i];
            }
            
        }return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        //finding the range
        int maxwt=0;
        int totalwt=0;
        for(auto &it:weights){
            totalwt+=it;
            maxwt=max(maxwt,it);
        }
        //applying the binary search in the range of maxwt to totalwt
        int mid;
        int ans;
        cout<<maxwt<<" "<<totalwt<<" "<<mid;
        while(maxwt<=totalwt){
            mid=(maxwt+totalwt)/2;
            int daysforcapacity=daysForCapacity(weights,mid);
            if(daysforcapacity<=days){
                //found ans but we need to go more left as we want ans to be least
                ans=mid;
                totalwt=mid-1;
                
                
            }else{
                maxwt=mid+1;
                
            }
        }
        return ans;

    }
};