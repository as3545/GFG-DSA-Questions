/*
Given an array of N positive integers, find GCD of all the array elements.


Example 1:

Input: N = 3, arr[] = {2, 4, 6}
Output: 2
Explanation: GCD of 2,4,6 is 2.

Example 2:

Input: N = 1, arr[] = {1}
Output: 1
Explanation: Greatest common divisor of
all the numbers is 1.

Your Task:  
You don't need to read input or print anything. Complete the function gcd()which takes N and array as input parameters and returns the gcd.


Expected Time Complexity: O(N logN)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N, arr[i] ≤ 105
*/
//Code
int common(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        return common(b,a%b);
    }
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	 int sum=arr[0];
         for(int i=1;i<N;i++){
             sum=common(sum,arr[i]);
         }
         return sum;
    }
