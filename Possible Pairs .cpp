/*
Given X and Y as the GCD and LCM of two numbers A and B. Find all possible pairs of (A,B).
Note: (a, b) and (b, a) are considered as two different pairs.

Example 1:

Input: x = 2, y = 12
Output: 4
Explaination: The pairs are (2, 12), 
(4, 6), (6, 4) and (12, 2).

Example 2:

Input: x = 3, y = 6
Output: 2
Explaination: The pairs are (3, 6) and 
(6, 3).

Example 3:

Input: x = 6, y = 4
Output: 0
Explaination: There is no such pair such 
that gcd is 6 and lcm is 4.

Your Task:
You do not need to read input or print anything. Your task is to complete the function pairCount() which takes x and y as input parameters and returns the number of possibe pairs.


Expected Time Complexity: O(sqrt(N)*LogN)    [N is maximum of x and y]
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ x, y ≤ 104
*/

//Code
 int gcd(int a, int b)
    {
        if(a==1||b==1) 
            return 1;
        if(a==b) 
            return a;
        else if(a>b) 
            return gcd(a-b,b);
        else
            return gcd(a,b-a);
    }
    
    int lcm(int a, int b)
    {
        return (a*b)/gcd(a,b);
    }
    
    int pairCount(int x, int y)
    {
        // code here
        if(x>y) // if gcd > lcm
            return 0;
        else if(x==y)  
            return 1;
            
        int prod=x*y, count=0;
        int i=x;
        
        while(i<=sqrt(prod))
        {
            int k=prod/i;
            if(gcd(i,k)==x && lcm(i,k)==y)
                count++;
            i++;    
        }
        return 2*count;
    }
