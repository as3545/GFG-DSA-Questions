/*
Given a String S. Find out which of the following basic C++ data types it represents and return it's size (in bytes).
The possible data types are:
1. Integer
2. Float
3. Double
4. Character

Example 1:

Input:
S=a
output:
1
Explanation:
The string clearly represents char 
and thus the size of char is displayed.
Example 2:

Input
S=98.45685456
Output: 
8
Explanation:
The string represents Double.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function BasicDataType() which takes String S as input parameter and displays the size (in bytes) of the datatype it represents. 

Expected Time Complexity:O(N)
Expected Auxillary Space:O(1)

Constraints:
1<=|S|<=10
*/
//Code
int BasicDataType(string s) {
     int size=s.length();
        
        if(size==1)
        
        {
            if(s[0]>='0'&&s[0]<='9')
            return sizeof(int);
            else
            return sizeof(char);
        }
        
        for(int i=0;i<size;i++)
        {
            if(s[i]=='.')
            {
                if((size-1-i)>=6)
                {
                    return sizeof(double);
                    
                }
                else
                return sizeof(float);
            }
            
        }
        return sizeof(int);   
        }
