class Solution {
public:
    // int minMoves(vector<int>& nums) {
    //     int minimum=INT_MAX;
    //     for(auto &it:nums){
    //         minimum=min(minimum,it);
    //     }
    //     int sum=0;
    //     for(auto &it:nums){
    //         sum+=it-minimum;
    //     }return sum;
    // }
    //making it one pass
    int minMoves(vector<int>& nums) {
        int minimum=INT_MAX;
        int sum=0;
        for(auto &it:nums){
            sum+=it;
            minimum=min(minimum,it);
        }
        return sum-(long long)minimum*nums.size();
    }
};