https://leetcode.com/problems/binary-tree-postorder-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
    
        void postOrderRecursion(TreeNode *root,vector<int> &ans) {
    
            if(root == NULL) {
                return ;
            }
    
            postOrderRecursion(root->left,ans);
            postOrderRecursion(root->right,ans);
            ans.push_back(root->val);
    
            return ;
        }
    
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int> ans;
            postOrderRecursion(root,ans);
            return ans;
        }
    };