/*
Given a decimal number N and the base B to which it should be converted. Convert the given number to the given base.

Example 1:

Input:
B = 2
N = 12 

Output:
1100

Explanation:
If the number 12 is converted to a 
number with base 2 we get the binary 
representation of 12 = 1100.
Example 2:

Input:
B = 16
N = 282

Output:
11A

Explanation:
If the number 282 is converted to a 
number with base 16 we get the hexadecimal 
representation of 282 = 11A.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function getNumber() which takes two integer B and N representing the base and the decimal number and returns the number in the given base.

Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)

Constraints:
2 <= B <= 16
1 <= N <= 999999999


*/
//Code
string ans;
    while(N){
        int r=N%B;
        if(r==10)ans+='A';
        else if(r==11)ans+='B';
        else if(r==12)ans+='C';
        else if(r==13)ans+='D';
        else if(r==14)ans+='E';
        else if(r==15)ans+='F';
        else ans+=to_string(r);
        N/=B;
        
    }
    reverse(ans.begin(),ans.end());
      
    return ans;
    }
