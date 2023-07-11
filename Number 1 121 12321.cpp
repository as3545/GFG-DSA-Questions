/*
For a given number N. Print the pattern in the following form: 1 121 12321 1234321 for N = 4.

Example 1:

Input:
N = 3
Output:
1 121 12321
Explanation:
For N = 3 we will print the 3 strings 
according to the pattern.
Example 2:

Input:
N = 6
Output:
1 121 12321 1234321 123454321 12345654321
Explanation:
For N = 6 we will print the 6 strings 
according to the pattern.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function numberPattern() which takes an integer N as input parameter and returns the list of strings to be printed.

Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 200
*/
//Code
public:
     vector<string> numberPattern(int N)
    {
        vector<string> ans;
        string s;
        for(int i = 1; i <= N; i++){
            
            for(int j = 1; j <= i; j++){
                s = s + (to_string(j));
            }
            for(int k = i-1; k >= 1; k--){
                s = s + (to_string(k));
            }
            ans.push_back(s);
            s = "";
        }
        return ans;
    }
};
