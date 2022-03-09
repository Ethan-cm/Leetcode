/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


void flatten(struct TreeNode* root){
    
    struct LinkNode {
        int val;
        struct ListNode *next;
    }
    
    if(root == NULL){return NULL;}
    
    
}