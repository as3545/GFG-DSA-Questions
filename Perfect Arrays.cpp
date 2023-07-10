/*
Perfect Arrays
Given an array of size N and you have to tell whether the array is perfect or not. An array is said to be perfect if its reverse array matches the original array. If the array is perfect then return True else return False.

Example 1:

Input : Arr[] = {1, 2, 3, 2, 1}
Output : PERFECT
Explanation:
Here we can see we have [1, 2, 3, 2, 1] 
if we reverse it we can find [1, 2, 3, 2, 1]
which is the same as before.
So, the answer is PERFECT.

Example 2:

Input : Arr[] = {1, 2, 3, 4, 5}
Output : NOT PERFECT

User Task:
The task is to complete the function IsPerfect(), which takes an array (a), size of the array (n), and returns the boolean value true if it is Perfect else false. The driver will print itself "PERFECT" or "NOT PERFECT" accordingly.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 2 * 105
1 ≤ ai ≤ 103

*/
//Code

public:
    bool IsPerfect(int a[],int n)
    {
        // Complete the function
        int i=0,j=n-1;
        while(i<j){
            
                if(a[i]!=a[j]){
                    return false;
                } else {
                    i++;
                    j--;
                    
                }
            } return true;
        }
    
};
