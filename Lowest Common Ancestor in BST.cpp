//Code
lass Solution{
    Node* ans = NULL;
    public:
    
        void solv(Node* root, int n, int m) {
            if(ans != NULL) return;
            if(root == NULL) return;
            if(root->data < n && root->data < m) {
                solv(root->right, n, m);
                return;
            }
            else if(root->data > n && root->data > m) { 
                solv(root->left, n, m);
            }
            else {
                ans = root;
                return;
            }
        }
        
        Node* LCA(Node *root, int n1, int n2)
        {
            // Node *lca = NULL;
            
            // while(root != NULL){
            //     if(root->data < n1 && root->data < n2){
            //         root = root->right;
            //     }
            //     else if(root->data > n1 && root->data >n2){
            //         root = root->left;
            //     }
            //     else{
            //         lca = root;
            //         return lca;
            //     }
            // }
            
            solv(root, min(n1, n2), max(n1, n2));
            return ans;
        }

};
