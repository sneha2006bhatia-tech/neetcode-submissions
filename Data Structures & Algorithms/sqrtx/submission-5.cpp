class Solution {
public:
    int mySqrt(int x) {
       int low=0;
       int high=x;
       int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long square=1LL*mid*mid;
            if(square==x){
                ans=mid;
                break;
            }
            else if(square>x){
                high=mid-1;
            }
            else {
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
    }
};