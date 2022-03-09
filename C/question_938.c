/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int rangeSumBST(struct TreeNode* root, int low, int high){

    if(root == NULL){return 0;}
    
    if(low <= root->val && root->val <= high){
       return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
                
    }else{
    return rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);}
}