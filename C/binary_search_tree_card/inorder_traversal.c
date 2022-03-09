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
int travel(struct TreeNode* root, int *ret, int *size){
    if(root == NULL){return 0;}

        travel(root->left,ret,size);
        ret[(*size)++]=root->val; //array ret[index size of int ++ to move to next integer]
        travel(root->right, ret, size);
    return ret;

}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    *returnSize = 0;
    int *ret=malloc(sizeof(int)*100); //create variable integer ret with memory size int *100
    travel(root,ret,returnSize);
    return ret;
}