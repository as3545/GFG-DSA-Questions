/*

Sometimes, the normal if-else isn't enough. In such cases, we have what we call ladder if and else conditions. So here we'll learn to use them.

Given a positive integer n. Your task is to check if it is divisible as given below:
1. If it is divisible by 11, print "Eleven".
2. If it is divisible by 3, print "Three".
3. If it is divisible by 2, print "Two".
4. If not following the above three rules, print "-1".
Note: If n is divisible by more than one of the above-given numbers, print the one which is the largest.

Example 1:

Input:n = 3
Output:Three
Example 2:

Input:n = 11
Output:Eleven
Your Task:
Your task is to complete the function to check divisibility as required. Also, print a new line after every output.

Constraints:
1 <= n <= 10^6

*/


//Code
if(n%11==0){
        cout<<"Eleven"<<endl;
        
    }
    else if(n%3==0){
        cout<<"Three"<<endl;
        
    }
    else if(n%2==0){
        cout<<"Two"<<endl;
        
    } 
    else {
        cout<<-1<<endl;
    }
