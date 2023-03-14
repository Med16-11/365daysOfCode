int sumNumbers(TreeNode* root) {
        int currentSum = 0;
        return sumNodes(root, currentSum);
    }

    int sumNodes(TreeNode* root, int currentSum){
        if(root == NULL) return 0;
        currentSum = currentSum * 10 + root->val;
        if(root->left==NULL && root->right==NULL) return currentSum;

        int leftSum = sumNodes(root->left, currentSum);
        int rightSum = sumNodes(root->right, currentSum);
        return leftSum + rightSum; 
    }
