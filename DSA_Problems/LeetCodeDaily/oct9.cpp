//Two Sum IV - Input is a BST
class Solution {
    void solve(TreeNode* root, vector<int> &in){
        if(root == NULL){
            return;
        }
        solve(root ->left, in);
        in.push_back(root ->val);
        solve(root ->right, in);
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        //Storing the inorder of BST
        solve(root, ans);
        //Using two pointer approach
        int i = 0;
        int j = ans.size()-1;
        while(i<j){
            int sum = ans[i]+ans[j];
            if(k == sum){
                return true;
            }
            else if(k<sum){
                j--;
            }else{
                i++;
            }
        }
        return false; 
    }
};