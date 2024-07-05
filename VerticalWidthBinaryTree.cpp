int verticalWidth(Node* root) {
        if(root == NULL) return 0; 
        
        queue<pair<Node*, int>> q; 
        q.push({root, 0}); 
        
        int left = 0, right = 0; 
        while(!q.empty()) {
            Node* node = q.front().first;  
            int v_no = q.front().second; 
            q.pop(); 
            
            left = min(left, v_no); 
            right = max(right, v_no); 
            
            if(node->left) q.push({node->left, v_no - 1});
            if(node->right) q.push({node->right, v_no + 1}); 
        }
            
            
        return right - left + 1; 
    }
