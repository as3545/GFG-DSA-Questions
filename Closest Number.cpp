/*
Given non-zero two integers N and M. The problem is to find the number closest to N and divisible by M. If there are more than one such number, then output the one having maximum absolute value.

 

Example 1:

Input:
N = 13 , M = 4
Output:
12
Explanation:
12 is the Closest Number to
13 which is divisible by 4.
Example 2:

Input:
N = -15 , M = 6
Output:
-18
Explanation:
-12 and -18 are both similarly close to
-15 and divisible by 6. but -18 has
the maximum absolute value.
So, the Output is -18
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function closestNumber() which takes an Integer n as input and returns the answer.

 

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Company: Microsoft 

Constraints:
-105 <= N <= 105



*/

//Code:

public:
    int closestNumber(int N , int M) {
        // code here
        return round(N/float(M))*M;
    }
};
