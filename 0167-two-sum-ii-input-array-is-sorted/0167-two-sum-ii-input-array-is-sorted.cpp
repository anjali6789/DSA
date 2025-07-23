class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int pointer1=0;
        int pointer2=numbers.size()-1;
        vector<int>ans;
        while(pointer1<pointer2){
            if(numbers[pointer1]+numbers[pointer2]==target){//got the values
                ans.push_back(pointer1+1);
                ans.push_back(pointer2+1);
                return ans;
            }else if(numbers[pointer1]+numbers[pointer2]<target){
                pointer1++;
            }else{
                pointer2--;
            }

        }return ans;
    }
};