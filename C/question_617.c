/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2){
    if(root1 == NULL){return root2;} //starting conditionals, just to make sure that the one or both of the trees arent null
    if(root2 == NULL){return root1;}
    //we've decided that root 1 is our returning tree.
    //also, by process of elimination, if we're here 
    

    root1->val = root1->val += root2->val; //merge the nodes that we now know exist.

    root1->left = mergeTrees(root1->left, root2->left);
    root1->right = mergeTrees(root1->right, root2->right); 

    
    return root1;
}