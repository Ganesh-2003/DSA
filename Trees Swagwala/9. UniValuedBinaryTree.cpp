class Solution {
    public:
    
        void checkUnival(TreeNode* root, int &val,bool &flag) {
    
            if(root == NULL) {
                return ;
            }
    
            checkUnival(root->left, val, flag);
            if(root->val != val){
                flag = false;
                return ;
            }
            checkUnival(root->right, val, flag);
        }
    
    
        bool isUnivalTree(TreeNode* root) {
            bool flag = true;
            int val = root->val;
            checkUnival(root, val, flag);
            return flag;
        }
    };