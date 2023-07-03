/*
Being a Programmer you have to learn how to make your output looks better. According to the company, its company programmers have to present its output in a different manner as: If your output is 10.000000 you can save the decimal places and thus your output becomes 10. Now u have the learn the way to output.  You are given elements of an array A[N] and you have to divide N by total no. of +ve integers, N by total no. of -ve integers, and N by total no. of zero value integers.

 

Example 1:

Input : 
N = 10
A[] = {7, 7, 7, 7, 7, 7, -9, -9, -9, 0}

Output : 
1.66667
3.33333
10

Explanation :
Positive count = 6, therefore 10/6 = 1.66667
Negative count = 3, therefore 10/3 = 3.33333
Zero's count = 1, therefore 10/1 = 10
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function Learning() which takes the array A[], its size N, pos, neg and zero as inputs and stores the answers in the reference variables pos, neg and zero the following:-
N by Total no. of +ve integers
N by Total no. of -ve integers
N by Total no. of zero value integers


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/


//Code:

class Solution{
    public:
    void Learning(int A[], int n, float &pos, float &neg, float &zero )
    {
        int negCount  = 0;
        int zeroCount = 0;
        int posCount  = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(A[i] < 0)
            {
                negCount++;
            }
            else if(A[i] == 0)
            {
                zeroCount++;
            }
            else
            {
                posCount++;
            }
        }
        
        pos  = n / (float) posCount;
        neg  = n / (float) negCount;
        zero = n / (float) zeroCount;
    }
};
