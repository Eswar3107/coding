//pre order
 vector<int> preOrder(Node* root)
    {
        //code here
        vector<int>res;
        if(root==NULL){
            return res;
        }
        stack<Node*>stack;
        stack.push(root);
        while(!stack.empty()){
            Node *cur=stack.top();
            stack.pop();
            res.push_back(cur->data);
            if(cur->right!=NULL){
                stack.push(cur->right);
            }
            if(cur->left!=NULL){
                stack.push(cur->left);
            }
        }
        return res;
        
    }
    
    //inorder
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int>res;
        stack<Node*>stack;
        Node *cur=root;
        stack.push(root);
        while(!stack.empty()){
            if(cur!=NULL){
                stack.push(cur);
                cur=cur->left;
            }
            else{
                cur=stack.top();
                stack.pop();
                res.push_back(cur->data);
                cur=cur->right;
            }
        }
        res.pop_back();
        return res;
    }
    
    
    //post order
     vector<int> postOrder(Node* node) {
        // code here
        vector<int>res;
        stack<Node*>stack;
        stack.push(node);
        while(!stack.empty()){
             Node *cur=stack.top();
             res.push_back(cur->data);
             stack.pop();
             if(cur->left) stack.push(cur->left);
             if(cur->right) stack.push(cur->right);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
