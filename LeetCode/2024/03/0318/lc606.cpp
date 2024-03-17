// https://leetcode.cn/problems/construct-string-from-binary-tree/
class Solution {
    string str;
public:
    void _tree2str(TreeNode* root){
        str += to_string(root->val);
        if(root->left == root->right){
            str += ')';
            return;
        }
        if(root->left != nullptr){
            str += '(';
            _tree2str(root->left);
        }else{
            str += "()";
        }

        if(root->right != nullptr){
            str += '(';
            _tree2str(root->right);
        }

        str += ')';
    }
    string tree2str(TreeNode* root) {
        _tree2str(root);
        str.pop_back();
        return str;
    }
};