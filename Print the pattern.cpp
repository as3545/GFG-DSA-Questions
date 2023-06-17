/* 
Problem Statement 
-----------------

Write a program that receives a number n as input and prints it in the following format as shown below.
Like for n = 2 the pattern will be:
1*2*5*6
--3*4

Example 1:

Input: n = 3
Output: 
1*2*3*10*11*12
--4*5*8*9
----6*7
Explaination: If the pattern shown in question 
is followed, this will be the output.
Your Task:
You do not need to read input or print anything. Your task is to complete the function pattern() which takes n as input parameter and returns a list of string where each string denotes a new line of the pattern.

Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(n2)

Constraints:
1 ≤ n ≤ 70  
Company - CGI

*/

// Code:

class Solution{
public:
    vector<string> pattern(int n){
        // code here
        vector<string> ans(n);
        int val=1;
        string temp;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                temp=to_string(val);
                ans[i]+=temp;
                ans[i]+='*';
                val++;
            }
        }
        
        
        
        
        int cnt=2;
        for(int i=1;i<n;i++){
            for(int j=0;j<cnt;j++){
                ans[i]='-'+ans[i];
            }
            cnt+=2;
        }
        
        
        
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n-i;j++){
                temp=to_string(val);
                ans[i]+=temp;
                if(j!=n-i-1){
                    ans[i]+='*';
                }
                val++;
            }
        }
        return ans;
        
        
    }
};
