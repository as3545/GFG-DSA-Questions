/*
You are given a cubic dice with 6 faces. All the individual faces have a number printed on them. The numbers are in the range of 1 to 6, like any ordinary dice. You will be provided with a face of this cube, your task is to guess the number on the opposite face of the cube.

Example 1:

Input:
N = 6
Output:
1
Explanation:
For dice facing number 6 opposite face
will have the number 1.
Example 2:

Input:
N = 2
Output:
5
Explanation:
For dice facing number 5 opposite face
will have the number 2.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function oppositeFaceOfDice() which takes an integer N as an input parameter and return the number on the opposite face of the dice.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 6
*/

//Code
public:
    int oppositeFaceOfDice(int N)
    {
        // Write Your Code here
        if(N==1)
        return 6;
        if(N==2)
        return 5;
        if(N==3)
        return 4;
        if(N==4)
        return 3;
        if(N==5)
        return 2;
        if(N==6)
        return 1;
    }
};
