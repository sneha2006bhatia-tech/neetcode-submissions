class Solution {
public:
    int rd(vector<int>& weights, int capacity,int n){
        int days=1;
        int load=0;
        for(int i=0;i<n;i++){
            if(load+weights[i]>capacity){
                days++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int high=accumulate(weights.begin(),weights.end(),0);
        int low=*max_element(weights.begin(),weights.end());
        int n=weights.size();
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            int required_days=rd(weights,mid,n);
            if(required_days<=days){
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