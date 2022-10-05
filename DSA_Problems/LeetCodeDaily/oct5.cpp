//Add One Row to Tree
void addRow(TreeNode* root,int& val,int depth){
        if(!root)
            return;
        if(depth==1){
            TreeNode* treeL = new TreeNode(val);
            TreeNode* treeR = new TreeNode(val);
            treeL->left = root->left;
            root->left=treeL;
            treeR->right = root->right;
            root->right=treeR;
            return;
        }else{
            addRow(root->left,val,depth-1);
            addRow(root->right,val,depth-1);
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* tree = new TreeNode(val);
            tree->left=root;
            return tree;
        }
        addRow(root,val,depth-1);
        return root;
        
    }
