/*
Write a program to display the floating number a with a given precision value b.

Example 1:

Input: a = 4.567, b = 2
Output: 
4.57
Explanation: Rounding a to two decimal
places.
Example 2:

Input: a = 8.92, b = 3
Output: 
8.920
Explanation: Rounding a to three decimal
places.
Your Task:  
You dont need to read input. Complete the function speedBreaker() which takes a and b as input parameters and print the floating number a with a given precision value b.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ b ≤ 15
  */

//Code
        cout<<fixed<<setprecision(b)<<a<<endl;
