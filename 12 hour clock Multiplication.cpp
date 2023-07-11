/*
Given two positive integers num1 and num2, the task is to find the product of the two numbers on a 12 hour clock rather than a number line.
Note: Assume the Clock starts from 0 hour to 11 hours.

 

Example 1:

Input:
num1 = 2, num2 = 3
Output:
6
Explanation:
2*3 = 6. The time in a 12 hour clock is 6.
Example 2:

Input:
num1 = 3, num2 = 5
Output:
3
Explanation:
3*5 = 15. The time in a 12 hour clock is 3.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function mulClock() which takes 2 Integers num1, and num2 as input and returns the required time in a 12 hour clock format.

 

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= num1,num2 <= 103


*/
//Code
int mul=num1*num2;
return mul%12;
