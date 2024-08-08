/*
  Given a number, reverse it and add it to itself unless it becomes a palindrome or return -1 if the number of iterations becomes more than 5. Return that palindrome number if it becomes a palindrome else returns -1.

Examples :

Input: n = 23
Output: 55 
Explanation: reverse(23) = 32,then 32+23 = 55 which is a palindrome. 
Input: n = 73
Output: 121
Explanation: reverse(73) = 37,then 37+73 = 110 which is not a palindrome, again reverse(110)= 011, then 110+11 = 121 which is a palindrome.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 104
*/

long long reverse(long long n) {
        long long reverse=0;
        while(n!=0){
            reverse=reverse*10+n%10;
            n/=10;
        }return reverse;
    }
    long long isSumPalindrome(long long n) {
       long long c=5;
        while(c--){
           long long rN=reverse(n);
           long long sum=n+rN;
           if(sum==reverse(sum)){
               return sum;
           }n=sum;
       }return -1;
    }
