/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int nodeCount(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }
    return (nodeCount(root->left)+ nodeCount(root->right))+1; //recursive solution 
}

void postorder(struct TreeNode* root, int *ret, int *size){
    if(root == NULL){return;}
    
    postorder(root->left, ret, size);
    postorder(root->right, ret, size);
    ret[(*size)++] = root->val;

}


int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int nodes = nodeCount(root); //count the amount of nodes in the search tree so we can allocate memory for them
    *returnSize = 0;
    int *ret =(int*)malloc(sizeof(int)*nodes+1);
    postorder(root, ret, returnSize);
    
    return ret;
}
