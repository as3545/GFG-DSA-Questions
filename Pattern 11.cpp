/*
Problem Statement
-----------------

Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a star pattern.

 

Example 1:

Input: 5

Output:
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1
 

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20
*/
// Code:
public:
    void printTriangle(int n) {
        int flag = 1;
        
        for(int i=0;i<n;i++)
        {
            if(i%2) flag = 0;
            else flag = 1;
            for(int j=0;j<=i;j++)
            {
                cout<<flag<<" ";
                flag = abs(flag-1);
            }cout<<endl;
        }
    }
