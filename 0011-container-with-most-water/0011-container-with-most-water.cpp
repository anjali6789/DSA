class Solution {
public:
    int maxArea(vector<int>& height) {
        //basic brute force using n*n 
        
        // int maxarea=INT_MIN;
        // for(int i=0;i<height.size();i++){
        //     for(int j=0;j<height.size();j++){
        //         if(i==j) continue;
        //         int h=min(height[i],height[j]);
        //         int w;
        //         if(i<j){
        //             w=j-i;
        //         }else{
        //             w=i-j;
        //         }maxarea=max(maxarea,w*h);
        //     }
        // }return maxarea;
        //optimising it further using 2 pointer if height of i is min then we do i++ if j is min then we do j-- this way we find the max
        int maxarea=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int h=min(height[i],height[j]);
            int w=j-i;
            maxarea=max(maxarea,h*w);
            if(height[i]<=height[j]){
                i++;
            }else{
                j--;
            }
        }return maxarea;

    }
};