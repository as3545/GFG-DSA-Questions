/*

Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build the pattern.

 

Example 1:

Input: 5

Output:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20
*/

//Code

public:
    void printTriangle(int n) {
       for (int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "*";
        }
        for (int j=1; j<=2*i-2; j++){
            cout <<" ";
        }
        for (int j=1; j<=n-i+1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for (int i=n+1; i<=n*2; i++){
        for(int j=1; j<=i-n; j++){
            cout << "*";
        }
        for (int j=1; j<=2*n-2*(i-n); j++){
            cout <<" ";
        }
        for (int j=1; j<=i-n; j++){
            cout << "*";
        }
        cout << "\n";
    }
    }
