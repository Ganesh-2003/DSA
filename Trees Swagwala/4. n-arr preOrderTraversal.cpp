https://leetcode.com/problems/n-ary-tree-preorder-traversal/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public:
        void preOrderTraversal(Node *root, vector<int> &ans) {
    
            if(root == NULL) {
                return ;
            }
    
            ans.push_back(root->val);
            vector<Node*> Children = root->children;
    
            for (Node *child: Children) {
                preOrderTraversal(child,ans);
            }
    
            return ;
    
        }
    
        vector<int> preorder(Node* root) {
            vector<int> ans;
            preOrderTraversal(root ,ans);
            return ans;
        }
    };