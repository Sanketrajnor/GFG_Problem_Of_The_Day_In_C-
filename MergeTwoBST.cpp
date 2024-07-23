class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        vector<int>v;
        fun(root1,v);
        fun(root2,v);
        sort(v.begin(),v.end());
        return v;
    }
    void fun(Node* root,vector<int>&v)
    {
        if(root==NULL)return;
        fun(root->left,v);
        v.push_back(root->data);
        fun(root->right,v);
    }
};
