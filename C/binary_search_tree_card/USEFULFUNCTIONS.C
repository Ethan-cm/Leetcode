//Recursive function to determine the amount of nodes in the tree. Returns the value to a pointed int value. Useful in all binary search tree functions.

int nodeCount(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }
    return (nodeCount(root->left)+ nodeCount(root->right))+1; //recursive solution 
}

////Preorder traversal, returns array

void preorder(struct TreeNode* root, int *res, int *size){
    if(root == NULL){return;}

    res[(*size)++] = root->val;
    preorder(root->left, res, size);
    preorder(root->right, res, size);

}

///inorder traversal, returns array

void inorder(struct TreeNode* root, int *ret, int *size){
    if(root == NULL){return 0;}

        inorder(root->left,ret,size);
        ret[(*size)++]=root->val; //array ret[index size of int ++ to move to next integer]
        inorder(root->right, ret, size);

}

///Postorder traversal
void postorder(struct TreeNode* root, int *ret, int *size){
    if(root == NULL){return;}
    
    postorder(root->left, ret, size);
    postorder(root->right, ret, size);
    ret[(*size)++] = root->val;

}

