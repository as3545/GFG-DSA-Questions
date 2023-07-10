/*
Given a string str, convert the first letter of each word in the string to uppercase. 

Example 1:

Input:
str = "i love programming"
Output: "I Love Programming"
Explanation:
'I', 'L', 'P' are the first letters of 
the three words.

Your Task:  
You dont need to read input or print anything. Complete the function transform() which takes s as input parameter and returns the transformed string.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N) to store resultant string  


Constraints:
1 <= N <= 104
The original string str only consists of lowercase alphabets and spaces to separate words.

 
*/

// Code
function(){
s[0]=toupper(s[0]);

for(int i=0;i<s.length();i++){
if(s[i]==' '){
  s[i+1]=touppercase(s[i+1]);
} return s;
}
