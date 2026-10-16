class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        list<int>l;
        int n=asteroids.size();
        for(int i=0;i<n;i++)
        {
            if(asteroids[i]>0){
                l.push_back(asteroids[i]);
            }
            else{
                while(!l.empty() && l.back()>0 && l.back()<abs(asteroids[i])){
                    l.pop_back();
                }
                if(!l.empty() && l.back()==abs(asteroids[i])){
                    l.pop_back();
                }
                else if(l.empty() || l.back()<0){
                    l.push_back(asteroids[i]);
                }
            }
        }
        return vector<int>(l.begin(),l.end());
    }
};