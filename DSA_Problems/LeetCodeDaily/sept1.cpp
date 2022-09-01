//Count Good Nodes in Binary Tree
void countgoodnodes(TreeNode * root, int& count, int maxforthissum){
        if(root == NULL)return;
        if(root->val >= maxforthissum){
            count++;
            maxforthissum=root->val;
        }
        countgoodnodes(root->left, count, maxforthissum);
        countgoodnodes(root->right, count, maxforthissum);
        
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        if(!root) return count;
        countgoodnodes(root, count, root-> val);
        return count;
    }
