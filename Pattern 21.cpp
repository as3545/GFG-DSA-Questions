/*
Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build the pattern.

 

Example 1:

Input: 4

Output:
****
*  *
*  *
****
 

Your Task:

You don't need to input anything. Complete the function printSquare() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20

*/

//Code

 for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 ||j==0|| i==n-1||j==n-1){
                    cout<<"*";
                    
                }
                else{
                    cout<<" ";
                }
                
            }
            cout<<endl;
        }
    }
