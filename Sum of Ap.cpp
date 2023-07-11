/*
Given n, a and d as the number of terms, first term and common difference respectively of an Arthimetic Series. Find the sum of the series upto nth term.
 

Example 1:

Input: 5 1 3
Output: 35
Explanation: Series upto 5th term is
1 4 7 10 13, so sum will be 35.
Example 2:

Input: 3 1 2
Output: 9
Example: Series upto 3rd term is 
1 3 5, so sum will be 9.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function sum_of_ap() which takes n, a and d as input parameter and returns the sum of the series.
 

Expected Time Complexity: O(1)
Expected Space Complexity: O(1)
 

Constranits:
1 <= n, a, d <= 100
*/  

//Code
int p=(n-1);
int med=(2*a+p*d);
int sum=((n)*(med))/2;
return sum;
