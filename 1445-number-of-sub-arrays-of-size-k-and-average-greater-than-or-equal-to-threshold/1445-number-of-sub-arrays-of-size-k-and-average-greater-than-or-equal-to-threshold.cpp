class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        // window of size k is to be created
        int i=0;
        int j=k-1;
        int sum=0;
        int ans=0;
        int average=0;
        for(int l=0;l<k;l++){
            sum+=arr[l];
        }
        if(sum/k>=threshold){
            ans++;
        }
        while(j+1<arr.size()){
            sum = sum - arr[i]+arr[j+1];
            i++;
            j++;
            
            if(sum/k>=threshold){
                ans++;
            }
            
        }return ans;
    }
};