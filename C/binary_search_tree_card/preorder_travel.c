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

void preorder(struct TreeNode* root, int *res, int *size){
    if(root == NULL){return;}

    res[(*size)++] = root->val;
    preorder(root->left, res, size);
    preorder(root->right, res, size);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int level = nodeCount(root);//determine the amount of nodes
    
    int *result = (int*)malloc(sizeof(int)*level+1);
    *returnSize=0;

    preorder(root, result, returnSize);

    return result;  
}