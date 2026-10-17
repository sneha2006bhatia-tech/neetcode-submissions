/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    vector<int>arr1;
    vector<int>arr2;
public:
    void preorder(TreeNode* a ,vector<int>&arr){
        if(a==nullptr){
            arr.push_back(-20001);
            return;
        }
        arr.push_back(a->val);
        preorder(a->left,arr);
        preorder(a->right,arr);

    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        preorder(p,arr1);
        preorder(q,arr2);
        bool ans=false;
        if(arr1.size()!=arr2.size()){
            return false;
        }
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]==arr2[i]){
                ans=true;
            }
            else{
                ans=false;
                break;
            }
        }
        return ans;
    }
};
