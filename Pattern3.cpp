/*
Problem statement
---------
--------
Geek is very fond of patterns. Once, his teacher gave him a  pattern to solve. He gave Geek an integer n and asked him to build a pattern.
Help Geek to build a pattern.

 

Example 1:

Input: 5

Output:
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

 

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20
*/

// Code: 

void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
    }
