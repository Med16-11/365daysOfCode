void rightview(TreeNode* root, int level, vector<int>&ans){
        if(root == NULL) return;
        if(ans.size() == level) ans.push_back(root->val);
        rightview(root->right, level+1, ans);
        rightview(root->left, level+1, ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rightview(root, 0, ans);
        return ans;
    }
