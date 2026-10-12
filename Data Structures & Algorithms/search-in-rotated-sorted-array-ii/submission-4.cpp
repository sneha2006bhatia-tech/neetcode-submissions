class Solution {
public:
    bool search(vector<int>& nums, int target) {
       int low=0;
       int high=nums.size()-1;
       bool ans=false;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            ans=true;
            break;
        }
        if (nums[mid]==nums[high] && nums[mid]==nums[low]){
            low=low+1;
            high=high-1;
            continue;
        }
        else if(nums[mid]>=nums[low]){
            if(nums[mid]>target && target>=nums[low]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[mid]<target && nums[high]>=target){
                low=mid+1;
            }
            else{
                high=mid-1;
        }
            }
        } 
        return ans;
    }
};