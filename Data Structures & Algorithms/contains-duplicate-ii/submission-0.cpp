class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       int ans=false;
       int l=0;
       int r=1;
       int n=nums.size();
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(j-i<=k){
                if(nums[i]==nums[j]) ans=true;
            }
        }
       }
       return ans;
    }
};