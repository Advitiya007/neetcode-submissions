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
    int ki(TreeNode* root, int& cnt) {
        if (!root) return -1;
       int left= ki(root->left, cnt);
       if(left!=-1) return left;
        cnt--;
        if (cnt == 0) return root->val;
        return ki(root->right, cnt);
    }
    int kthSmallest(TreeNode* root, int k) {
        return ki(root, k);
        // return -1;
    }
};
