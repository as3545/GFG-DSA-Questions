/*

Given a number S in the form of string, the task is to find if it's divisible by 36 or not. 

 

Example 1:

Input:
S = "72"
Output:
1
 

Example 2:

Input:
7
Output:
0
 

 

Your Task:

You don't need to read input or print anything. Your task is to complete the function checkDivisible36() which takes the string S and returns 1 is divisible by 36, else 0.

 

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(1)
 

Constraints:
1 <= |S| <= 105

*/

//Code:

public:
    int checkDivisible36(string S){
        // code here
        int long a=0;
        int N=S.size();
        for(int i=0;i<N;i++){
            a=a*10+S[i]-'0';     
            a=a%36;
        }
        if(a%36==0)
            return 1;
         else 
            return 0;
        
    }
};
