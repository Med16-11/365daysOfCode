//Binary Tree Inorder Traversal
 void treeData(vector<int> &ans, TreeNode *root){
        if (root == NULL){
            return;
        }

        treeData(ans, root->left);
        ans.push_back(root->val);
        treeData(ans, root->right);
        }
    
         vector<int> inorderTraversal(TreeNode *root) {
            vector<int> ans;
            treeData(ans, root);
            return ans;
    }
