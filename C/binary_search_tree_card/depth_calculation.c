/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int leftd = 0;
int rightd = 0;

int maxDepth(struct TreeNode* root){
 if(root == NULL){return 0;}

    
    leftd = maxDepth(root->left);
    rightd = maxDepth(root->right);
    if(leftd>=rightd){return leftd+1;}
    else{return rightd+1;}
}