class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        if(root!=nullptr){
            if(root->val<val){
                return searchBST(root->right,val);
            }else if(root->val>val){
                return searchBST(root->left,val);
            }else{
                return root;
            }
        }
        return nullptr;
    }
};