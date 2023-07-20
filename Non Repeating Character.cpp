/*
Given a string S consisting of lowercase Latin Letters. Return the first non-repeating character in S. If there is no non-repeating character, return '$'.

Example 1:

Input:
S = hello
Output: h
Explanation: In the given string, the
first character which is non-repeating
is h, as it appears first and there is
no other 'h' in the string.
Example 2:

Input:
S = zxvczbtxyzvy
Output: c
Explanation: In the given string, 'c' is
the character which is non-repeating. 
Your Task:
You only need to complete the function nonrepeatingCharacter() that takes string S as a parameter and returns the character. If there is no non-repeating character then return '$' .

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |S|

Constraints:
1 <= N <= 105

 
  */


//Code

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {    //push the char of string into the ump
        unordered_map<char,int>mp;
        for(int i=0;i<S.length();i++){
            mp[S[i]]++;
        }
        //find if there is only one occurence of the char then return the char(it)
        for(auto it: S){
            if(mp[it]==1)return it;
        }
        //else return "$"
        return '$';
       //Your code here
       
    }

};
