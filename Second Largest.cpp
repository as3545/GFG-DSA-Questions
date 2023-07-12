/*

Given an array Arr of size N, print second largest distinct element from an array.

Example 1:

Input: 
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the 
array is 35 and the second largest element
is 34.
Example 2:

Input: 
N = 3
Arr[] = {10, 5, 10}
Output: 5
Explanation: The largest element of 
the array is 10 and the second 
largest element is 5.
Your Task:
You don't need to read input or print anything. Your task is to complete the function print2largest() which takes the array of integers arr and n as parameters and returns an integer denoting the answer. If 2nd largest element doesn't exist then return -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ N ≤ 105
1 ≤ Arri ≤ 105


*/
//Code

public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest_number=arr[0];
	    int second_largest=-1;
	    for(int i=0;i<n;i++){
	   
	        if(arr[i]>largest_number){
	            second_largest=largest_number;
	            largest_number=arr[i];
	            
	        }
	             else  if(largest_number>arr[i] and arr[i]>second_largest){
	            second_largest=arr[i];
	        
	        }

	    } return second_largest;
	}    
};
