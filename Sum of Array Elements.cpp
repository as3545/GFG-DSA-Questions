/*
Problem Statement:
-----------------
Given an integer array arr of size n, you need to sum the elements of arr.

Example 1:

Input:
n = 3
arr[] = {3 2 1}
Output: 6
Example 2:

Input:
n = 4
arr[] = {1 2 3 4}
Output: 10
Your Task:
You need to complete the function sumElement() that takes arr and n and returns the sum. The printing is done by the driver code.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 <= n <= 103
1 <= arri <= 104
*/
// Link --> https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/0

// Code

//Complete this function

int sumElement(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    sum +=arr[i];
    return sum;
}
