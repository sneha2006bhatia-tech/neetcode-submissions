class Solution {
public:
    bool bs(vector<int>&mat,int target){
        int low=0;
        int high=mat.size()-1;
        int ans=false;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mat[mid]==target){
                ans=true;
                break;
            }
            else if(mat[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        
        }
        return ans;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        bool ans=false;
        for(int i=0;i<row;i++){
            if(matrix[i][0]<=target && matrix[i][col-1]>=target ){
                ans=bs(matrix[i],target);
            }
        }
        return ans;
    }
};
