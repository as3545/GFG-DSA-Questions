/*
Given a square matrix of size n×n. Your task is to calculate the sum of its diagonals.
 

Example 1:

Input: matrix = {{1, 1, 1}, 
{1, 1, 1}, {1, 1, 1}}
Output: 6
Example 2:

Input: matrix = {{1, 2}, {3, 4}}
Output: 10
 

Your Task:
You don't need to read or print anyhting. Your task is to complete the function DiagonalSum() which takes the matrix as input parameter and returns the sum of its diagonals.
 

Expected Time Complexity: O(n)
Expected Space Complexity: O(1)

Constraints:
1 <= n <= 100
1 <= matrix elements <= 10000
*/
//Code
//User function Template for C++

class Solution {
public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int sum = 0;
        int i=0;int j=0;
        for(int i=0;i<n;i++){
            sum+=matrix[i][j];
            j++;
        }
        j= m-1;
        for(int i=0;i<n;i++){
            sum+=matrix[i][j];
            j--;
        }
        return sum;
        
    }
};
