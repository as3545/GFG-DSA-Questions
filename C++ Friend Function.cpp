/*
Ankush challenges Ankit to complete his code which implements the functionality of checking if the first and last name of a student is an anagram of each other or not.

An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other. Invest your time to study the locked code and complete it accordingly.

Input:
The first line contains the number of test cases, each test case consists of one line input containing 2 space separated strings representing the first and last name of the student.

Output:
For each test case T, the output should consist of a single line - ANAGRAM or NOT ANAGRAM depending upon if the 2 given strings are anagram of each other or not.

Constraints:
1 <= T <= 100

Example:
Input:
2
rahul garg 
ankit kitan

Output:
NOT ANAGRAM
ANAGRAM
*/

//Code


void check_name(student k)
{
    //Add your code here.

    sort(k.first_name.begin(),k.first_name.end());
    sort(k.last_name.begin(),k.last_name.end());
    if(k.first_name==k.last_name){
        cout<<"ANAGRAM"<<endl;
    } else {
        cout<<"NOT ANAGRAM"<<endl;
    }
}
