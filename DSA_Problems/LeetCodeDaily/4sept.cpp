//Path Sum
void sum(TreeNode* root, int targetSum, int s, bool &ans){
        if(root->left == NULL && root ->right == NULL){
            if(s + root->val == targetSum){
                ans = true;    
            }
            
            return;
            
        }
        if(root->left != NULL){
            sum(root ->left, targetSum, s+ root->val, ans);    
        }
        if(root -> right != NULL){
            sum(root->right, targetSum, s+root->val, ans);
        }
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = false;
        int s = 0;
        if(root == NULL){
            return false;
        }
        sum(root, targetSum, s, ans);
        return ans;
        
    }
