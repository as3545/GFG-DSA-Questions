/* 
Problem statement
-----------------

Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build the pattern.

 

Example 1:

Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
 

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20

*/
// Code: 

class Solution {
  public:
    void printTriangle(int n) {
        for(int i =1 ; i<n+1 ;i++){
            for(int j = 1 ; j<i+1 ;j++){
                cout<<j<<" ";
                
            }
            for(int j = 0 ; j<2*n - 2*i ; j++){
                cout<<" ";
            }
            for(int j = 0 ; j<2*n - 2*i ; j++){
                cout<<" ";
            }
            for(int j = i ; j>0  ; j-- ){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        
    }
};
