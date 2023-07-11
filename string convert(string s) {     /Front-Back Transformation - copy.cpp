/*
Given a string S, consisting only of english alphabets, replace all the alphabets with the alphabets occuring at the same position when counted in reverse order of alphabets. For example, 'a' would be replaced by 'z', 'b' by 'y', 'c' by 'x' and so on. Any capital letters would be replaced by capital letters only.

 

Example 1:

Input: S = "Hello"
Output: Svool
Explanation: 'H' is the 8th letter from the
beginning of alphabets, which is replaced by
'S' which comes at 8th position in reverse order
of alphabets. Similarly, all other letters are 
replaced by their respective upper or lower case 
letters accordingly.

Example 2:

Input: S = "GfG"
Output: TuT
Explanation: 'G' is replaced with 'T'
and 'f' is replaced with 'u'
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function convert() which accepts a string as input parameter and returns the modified string according to given conditions. 

 

Expected Time Complexity: O(Length of string)
Expected Auxiliary Space: O(Length of string)

Constraints:

1 <= Length of string S <= 105
*/

//Code


string convert(string s)
{
    // code here.
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]='z'-s[i]+'a';
        }else{
            s[i]='Z'-s[i]+'A';
        }
    }
    return s;
}
