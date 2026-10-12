class Solution {
public:
    int rq(vector<int>& piles,int mid, int n){
        int total_hrs=0;
        for(int i=0;i<n;i++){
            total_hrs+=ceil((double) piles[i]/ mid);
        }
        return total_hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans;
        int n=piles.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            int required_time=rq(piles,mid,n);
            if(required_time<=h){
                ans=mid;
                high=mid-1;
                
            }
            else{
                
                low=mid+1;
            }
        }
        return ans;
    }
};
