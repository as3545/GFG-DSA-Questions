/*
Given an integer array Arr[] of size N. The task is to find sum of it.

Example 1:

Input:
N = 4
Arr[] = {1, 2, 3, 4}
Output: 10
Explanation: 1 + 2 + 3 + 4 = 10.
Example 2:

Input:
N = 3
Arr[] = {1, 3, 3}
Output: 7
Explanation: 1 + 3 + 3 = 7.
Your Task:
Complete the function sum() which takes array arr and single integer n, as input parameters and returns an integer denoting the answer. You don't to print answer or take inputs.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= Arr[i] <= 104
  */


//Code
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum +=arr[i];
	    } return sum;
	}
};
