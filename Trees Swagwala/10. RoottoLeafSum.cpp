class Solution {
    public:
    
        int binaryToInt(string val) {
            int res = 0;
            for (char ch : val) {
                res = res * 2 + (ch - '0');
                return res;
            }
            return res;
        }
    
        void RecursiveSumRootToLeaf(TreeNode* root, int &ans, string val) {
            
            if(!root) {
                return ;
            }
    
            val = val + to_string(root->val);
    
            if(root->left == NULL && root->right == NULL) {
                ans = ans + binaryToInt(val);
            }
    
            RecursiveSumRootToLeaf(root->left, ans, val);
            RecursiveSumRootToLeaf(root->right, ans, val);
        }
    
        int sumRootToLeaf(TreeNode* root) {
    
            int ans = 0;
            string val = "";
            RecursiveSumRootToLeaf(root, ans, val);
            return ans;
        }
    
    };