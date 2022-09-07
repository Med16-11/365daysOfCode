string tree2str(TreeNode* root) {
        
        if (!root) return "";
        
        string ans = to_string(root->val);

        if (root->left) {
            ans += '(';
            ans += tree2str(root->left);
            ans += ')';
        }

        if (root->right) {
            if (!root->left) ans += "()";
            ans += '(';
            ans += tree2str(root->right);
            ans += ')';
        }
        
        return ans;
        
    }
