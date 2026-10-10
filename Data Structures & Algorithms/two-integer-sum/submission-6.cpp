class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int comp;
        int ans1;
        int ans2;
        vector<int>TS;
        int n=nums.size();
        for(int i=0;i<n;i++){
            comp=target-nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==comp){
                    ans1=i;
                    ans2=j;
                    break;
                }
            }
            
        }
        TS.push_back(ans1);
        TS.push_back(ans2);
        return TS;
    }
};
