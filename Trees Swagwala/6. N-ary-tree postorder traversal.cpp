https://leetcode.com/problems/n-ary-tree-postorder-traversal/

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
    
        void postOrderRecursion(Node* root,vector<int> &ans) {
    
            if(root == NULL) {
                return ;
            }
    
            vector<Node *> children = root->children;
            for(Node * child:children) {
                postOrderRecursion(child,ans);
            }
            ans.push_back(root->val);
        }
    
        vector<int> postorder(Node* root) {
            vector<int> ans;
            postOrderRecursion(root,ans);
            return ans;
        }
    };