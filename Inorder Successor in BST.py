//Codr

/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    vector<Node*> arr;
    void inorder(Node* root)
    {
        if(!root) return;
        inorder(root->left);
        arr.push_back(root);
        inorder(root->right);
    }
    Node * inOrderSuccessor(Node *root, Node *p)
    {
        inorder(root);
        int dt = p->data;
        int ind = -1;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]->data == dt && i!=n-1)
            {
                ind = i;
                break;
            }
        }
        if(ind != -1) return arr[ind+1];
        return NULL;
        //return -1;
    }
};
