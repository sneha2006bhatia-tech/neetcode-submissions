class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int ans=-1;
        int high=nums.size()-1;
        int n=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
