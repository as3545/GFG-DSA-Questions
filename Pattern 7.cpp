/* 
Problem stattement
-----------------

Geek is very fond of patterns. Once, his teacher gave him a  pattern to solve. He gave Ram an integer n and asked him to build a pattern.

Help Ram build a pattern.

 

Example 1:

Input: 5

Output:
    *
   ***  
  *****
 *******
*********
Your Task:
You don't need to input anything. Complete the function printTriangle() which takes  an integerfor(int i n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20

*/

// Code: 

for(int i=0;i<n;i++){
  for(int j=0;j<n-i-1;j++){
    cout<<" "; }
  for(int j=0;j<2*i+1;j++){
    cout<<"*"; }
  for(int j=0;j<n-i-1;j++){
    cout<<" ";}
  cout<<endl; 
}
  
