class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0){
                // if the stack already has -ve then they are not going to collide 
                s.push(asteroids[i]);
            }else{
                //destroy
                while(!s.empty()&&s.top()>0&&s.top()<abs(asteroids[i])){
                    s.pop();
                }
                if(!s.empty()&&s.top()==abs(asteroids[i])){
                    s.pop();
                }else if(s.empty()||s.top()<0){
                    s.push(asteroids[i]);
                }
            }
                   
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};