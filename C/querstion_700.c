/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//this is the first algo question I solved almost instantly. Pretty proud of myself (despite it being pretty easy lol)!
struct TreeNode* searchBST(struct TreeNode* root, int val){

    if(root == NULL){return NULL;}
    
    if(root->val == val){
        return root;
    }
    else if( root->left != NULL && root->val >= val){
        return searchBST(root->left, val);
    }
    else if( root->right != NULL && root->val <= val){
        return searchBST(root->right, val);
    }
        
    return NULL;
}