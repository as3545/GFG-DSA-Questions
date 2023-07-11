/*
Calculate the amount for given principal amount P , time T(in years), compounded N times in a year at rate R. Calculate floor of future value of given principal amount.

 

Example 1:

Input:
P = 1000 , T = 2 , N = 2 , R = 10
Output:
1215
Explanation:
The given Principal, Time, Rate and
number of compounds in a year results
in a amount of 1215.51.
The floor value being 1215, Output is 1215.
Example 2:

Input:
P = 100 , T = 1 , N = 1 , R = 10
Output:
110
Explanation:
The given Principal, Time, Rate and
number of compounds in a year results
in a amount of 110.
So, the Output is 110.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function getCompundInterest() which takes Integers P,T,N and R as input respectively and returns the answer.

 

Expected Time Complexity: O(log(N*T))
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= P <= 1000
  */
//Code
 
        float CI= P*pow(1+0.01*R/N,T*N);;
        return CI;
    }
