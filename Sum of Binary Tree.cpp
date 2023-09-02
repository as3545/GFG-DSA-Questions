//Code

void preorder(Node* root, long int& sum){

if(root==NULL){
return;
}

sum +=root->key;
preorder(root->left,sum);
preorder(root->right,sum);
}

long int sumBT(Node* root)
{
long int sum=0;
preorder(root,sum);
return sum;

}
