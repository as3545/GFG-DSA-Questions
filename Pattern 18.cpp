/*

  
  Ram is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Ram an integer n and asked him to build a pattern.

Help Ram build a pattern.

 

Example 1:

Input: 5

Output:
E
E D
E D C
E D C B
E D C B A
 

Example 2:

Input: 3

Output:
C
C B
C B A
Your Task:

You don't need to input anything. Complete the function printTriangle() which takes an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20

  */

//Code
public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<char('A'+n-j)<<" ";
                
            } cout<<endl;
        }
    }
