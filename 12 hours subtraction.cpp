/*
Given two positive integers num1 and num2, subtract num2 from num1 on a 12 hour clock rather than a number line.
Note: Assume the Clock starts from 0 hour to 11 hours.

 

Example 1:

Input:
num1 = 7, num2 = 5
Output:
2
Explanation:
7-5 = 2. The time in a 12 hour clock is 2.
Example 2:

Input:
num1 = 5, num2 = 7
Output:
10
Explanation:
5-7 = -2. The time in a 12 hour clock is 10.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function subClock() which takes 2 Integers num1, and num2 as input and returns the required time in a 12 hour clock format.

 

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= num1,num2 <= 103


*/

//Code
 int sub=num1-num2;
        return (sub%12+12)%12;
