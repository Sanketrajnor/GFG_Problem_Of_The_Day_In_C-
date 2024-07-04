class Solution {
  public:
    
    map<string,int>mp;
    string getans(Node*root,vector<Node*>&dublicates){
        if(root==NULL){
            return "$";
        }
        string str=to_string(root->data)+"/";
        str+=getans(root->left,dublicates)+"/";
        str+=getans(root->right,dublicates);
        mp[str]++;
        if(mp[str]==2){
            dublicates.push_back(root);
        }
        return str;
    }
    
    vector<Node*> printAllDups(Node* root) {
        vector<Node*>ans;
        getans(root,ans);
        mp.clear();
        return ans;
    }
};
