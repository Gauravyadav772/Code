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
    int postindex;
    unordered_map<int, int> mp;
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int start, int end){
        if( start > end){
            return NULL;
        }

        int rootval = postorder[postindex--];
        TreeNode* root = new TreeNode(rootval);
        int index = mp[rootval];
        root->right = build(inorder, postorder, index+1, end);
        root->left = build(inorder, postorder, start, index-1);

        return root;
    } 

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        postindex =  n- 1;
        for(int i = 0; i < n; i++){
            mp[inorder[i]] = i;
        }

        return build(inorder, postorder, 0, n-1);

    }
};