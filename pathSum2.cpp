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
    void solve(TreeNode* root,int &sum,int &targetSum,bool &ans){
        if(root==nullptr)
        return;


        if(root->left==nullptr && root->right==nullptr){
            sum+=root->val;
            if(sum==targetSum)
            ans=true;

            sum-=root->val;
            return;
        }

        sum+=root->val;
        solve(root->left,sum,targetSum,ans);
        solve(root->right,sum,targetSum,ans);
        sum-=root->val;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool ans=false;

        solve(root,sum,targetSum,ans);

        return ans;

        
    }
};