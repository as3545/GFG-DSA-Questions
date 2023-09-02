/*
Given a Binary Tree of size N, your task is to complete the function countNonLeafNodes(), that should return the count of all the non-leaf nodes of the given binary tree.

Example:

Input: 
Image
Output:
2
Explanation:
Nodes 1 and 2 are the only non leaf nodes.
Your Task:
You don't need to take input or print anything. Your task is to complete the function countNonLeafNodes() that takes root as input and returns the number of non leaf nodes in the tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 ≤ Number of nodes ≤ 105
*/

//Code

class Solution {
  public:
  
  void solve(Node* root, int &ctr)
{
    if(root==NULL)
    return;
    
    if(root->left==NULL && root->right==NULL)
    return;
    
    ctr++;
    solve(root->left, ctr);
    solve(root->right, ctr);
}
  
int countNonLeafNodes(Node* root) {
        int ctr=0;
  solve(root, ctr);
  return ctr;
    }
};
