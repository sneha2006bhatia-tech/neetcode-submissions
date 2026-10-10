class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        bool ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        if(n==st.size()){
            ans=false;
        }
        else{
            ans=true;
        }
        return ans;
    }
};