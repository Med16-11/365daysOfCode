void postorder(vector<int>&ans, TreeNode* root){
        if(root == NULL)
            return;
        postorder(ans, root->left);
        postorder(ans, root->right);
        ans.push_back(root->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(ans, root);
        return ans;
    }
};
