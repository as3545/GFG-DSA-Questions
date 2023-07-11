/*
A Toeplitz (or diagonal-constant) matrix is a matrix in which each descending diagonal from left to right is constant, i.e., all elements in a diagonal are same.
Given a matrix A of order N X M your task is to complete the function isToeplitz which returns true if the matrix is Toeplitz otherwise returns false.

Example 1:

Input: 3 3 6 7 8 4 6 7 1 4 6 
Output: 1
Explanation:
The test case represents a 3x3 matrix which looks like 
 6 7 8 
 4 6 7 
 1 4 6
Output: 1(True) as values in all diagonals are same.
Example 2:

Input:
2 3
1 2 3 4 5 6
Output: 0
Explanation: 
Matrix of order 2x3 will be 
     1 2 3
     4 5 6
Output: 0(False) as values in all diagonals 
are not same.
Your task: You don't need to read input or print anything. Your task is to complete the function isToepliz() which takes the matrix and size of matrix as input parameters and returns 1 if the matrix is a Toepliz matrix , otherwise return 0. 

Constraints:

1<=N,M<=40

1<=A[i][j]<=100

1<=i<=N,1<=j<=M

Expected time complexity:O(nxn)

Expected space complexity:O(1)
*/
//Code


/*You are required to complete this method*/
bool isToepliz(int a[MAX][MAX],int m,int n)
{    
   
    for(int i=0;i<m-1;i++){
    for(int j=0;j<n-1;j++){
        if(a[i][j]!=a[i+1][j+1]){
            return false;
        }
    }
}
return true;
 
}
