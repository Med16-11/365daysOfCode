int count = 0;
    
    void dfs(TreeNode* root, vector<int> mp)
    {
        // base case
        
        if(root == NULL)
        {
            return;
        }
        
        // increment the count of the curr node's val
        
        mp[root -> val]++;
        
        // if we reached the leaf node then count the no. of odd frequency, if odd frequency is more than 1 then palindrome is not possible
        
        if(root -> left == NULL && root -> right == NULL)
        {
            int odd_count = 0;
            
            for(auto x : mp)
            {
                if(x % 2)
                {
                    odd_count++;
                }
            }
            
            if(odd_count <= 1)
            {
                count++;
            }
            
            return;
        }
        
        // call for left subtree
       
        dfs(root -> left, mp);
        
        // call for right subtree
        
        dfs(root -> right, mp);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        
       vector<int> mp(10, 0);
        
        dfs(root, mp);
        
        return count;
    }
