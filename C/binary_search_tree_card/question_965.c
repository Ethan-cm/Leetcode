/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool check = true;

bool postordertravel(struct TreeNode* root, int data){
    if (root != NULL){
    
        postordertravel(root->left, data);
        postordertravel(root->right, data);
        if(root->val != data){check = false;}        
    }
    return check;
}
    

bool isUnivalTree(struct TreeNode* root){
    if(root ==  NULL){return false;}
    if(root->left == NULL && root->right == NULL){return true;}
    
    postordertravel(root, root->val);
       
    return check;
}// my solution doesent work because C global variables make leetcode shit itself. looked up a solution