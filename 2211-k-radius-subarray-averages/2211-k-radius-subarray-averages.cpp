class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>avg(nums.size(),-1);
        if(nums.size()<(2*k+1)){
            return avg;
        }
        int i=0;
        int j=0;
        long long sum=0;
        for(j;j<=(2*k);j++){
            sum+=nums[j];
        }avg[k]=sum/((2*k)+1);
        int pointer=k+1;
        j--;
        while(j<nums.size()){
            sum-=nums[i];
            i++;
            if(j+1<nums.size()){
                sum+=nums[j+1];
                avg[pointer]=sum/((2*k)+1);
            }j++;
            pointer++;
            
        }return avg;
    }
};