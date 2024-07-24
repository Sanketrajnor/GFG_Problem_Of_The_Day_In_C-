bool helper(Node* root,int mini=INT_MIN,int maxi=INT_MAX){
        
        if(root==NULL){
            return true;
        }
        
        if(root->data>=maxi || root->data<=mini){
            return false;
        }
        return helper(root->left,mini,root->data) and helper(root->right,root->data,maxi);
    }
    
    bool isBST(Node* root) {
        // Your code here
    
        return helper(root);
        
    }

