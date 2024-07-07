class Solution {
    public:
    vector<int> ans;
    bool solve(struct Node *curr, int target){
        
        if(curr == NULL)return false;
        
        if(curr->data == target){
            return true;
        }
        
        ans.push_back(curr->data);
        
        if(solve(curr->left,target) || solve(curr->right,target)) return true;
        
        ans.pop_back();
        return false;
        
    }
    vector<int> Ancestors(struct Node *root, int target) {
         solve(root,target);
         reverse(ans.begin(),ans.end());
         return ans;
    }

};
