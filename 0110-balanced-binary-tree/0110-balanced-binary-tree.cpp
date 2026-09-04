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
public:
    pair<int,bool>heightBalanced(TreeNode *root){
        if(root==NULL){
            return{0,true};
        }

        pair<int,bool>left=heightBalanced(root->left);
        pair<int,bool>right=heightBalanced(root->right);

        pair<int,bool>ans;
        if((abs(left.first-right.first)<=1)&&left.second&&right.second){
            ans.second=true;
        }
        else{
            ans.second=false;
        }

        ans.first=max(left.first,right.first)+1;
        return ans;
    }    
    bool isBalanced(TreeNode* root) {
        return heightBalanced(root).second;
    }
};