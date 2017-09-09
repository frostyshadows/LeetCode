/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return findTreeSum(root, 0);
    }
    
    int findTreeSum(TreeNode* node, int currentSum) {
        if (node->left == NULL && node->right == NULL) {
            return currentSum * 10 + node->val;
        }
        if (node->left == NULL) {
            return findTreeSum(node->right, currentSum * 10 + node->val);
        } else if (node->right == NULL) {
            return findTreeSum(node->left, currentSum * 10 + node->val);
        } else {
            return findTreeSum(node->left, currentSum * 10 + node->val) + findTreeSum(node->right, currentSum * 10 + node->val);
        }
    }
};