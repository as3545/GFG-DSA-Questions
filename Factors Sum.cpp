/*
Problem Statement
Given a number N, find the sum of all its factors.


Example 1:

Input: N = 30
Output: 72
Explanation: Factors sum 1 + 2 + 3 + 5 
+ 6 + 10 + 15 + 30 = 72

Example 2:

Input: N = 15
Output: 24
Explanation: Factors sum 1 + 3 + 5 
+ 15 = 24

Your Task:  
You don't need to read input or print anything. Your task is to complete the function factorSum() which takes N as input and returns the sum.

Expected Time Complexity: O(sqrt N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 109

*/
//Code:
class Solution
{
	public:
    long long factorSum(int N)
    {
        // Your code goes here
        //Largest unique factor pair will be <sqrtN, sqrtN>
        long long sum{ 0 };
        
        for (long long i = 1; i * i < N; ++i) {
            if (N % i == 0) {
                sum += i;
                sum += N / i;
            }
        }
        
        if ((int)sqrt(N) * sqrt(N) == N)
            sum += sqrt(N);
        
        return sum;
    }
};
