/*
Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build the pattern.

Example 1:

Input: 4
Output:
   A
  ABA
 ABCBA
ABCDCBA
Your Task:

You don't need to input anything. Complete the function printTriangle() which takes an integer n  as the input parameter and prints the pattern.

Constraints:

1<= N <= 20

*/

//Code

class Solution {
 public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<char('A'+j-1);
            }
            for(int j=i-1;j>=1;j--){
                cout<<char('A'+j-1);
            }
           cout<<endl;
        }
    }
};
