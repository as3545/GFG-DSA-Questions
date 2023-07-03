/*
Given a number N, find the cube root of N.

Note: We need to print the floor value of the result.

 

Example 1:

Input:
N = 3
Output:
1
Explanation:
Cube root of 3 is 1.442 = 1
Example 2:

Input:
N = 8
Output:
2
Explanation:
Cube root of 8 is 2
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function cubeRoot() which takes a Integer N as input and returns the answer.

 

Expected Time Complexity: O(cube root of N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 105


  */


//Code:
public:
    int cubeRoot(int N) {
        // code here
       int t=cbrt(N);
        return t;
    }
};
