/*
Problem Statement
----------------
Given an array nums of positive integers of size N. Find all distinct digits present in nums.
 

Example 1:

Input: nums = [131, 11, 48]
Output: 1 3 4 8
Explanation: 1, 3, 4, and 8 are only distinct
digits that can be extracted from the numbers
of the array.
Example 2:

Input: nums = [111, 222, 333, 4444, 666]
Output: 1 2 3 4 6
Explanation: 1, 2, 3, 4, and 6 are only distinct
digits that can be extracted from the numbers
of the array.
 

Your Task: 
You don't need to read or print anything. Your task is to complete the function common_digits() which takes nums as input parameter and returns a list of digits which can be extracted from the given array in ascending order.
 

Expected Time Complexity: O(N)
Expected Space Complexity: O(1)
 

Constraints:
1 <= N <= 105
1 <= numsi <= 109
COmpany Tag: Zoho Amazon MakeMyTrip

*/

//Code


class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){
   	    // Code here
   	    bool digits[10]{ false };
   	    
   	    for (int i : nums) {
   	        if (i == 0)
   	            digits[i] = true;
   	            
   	        while (i > 0) {
   	            digits[i % 10] = true;
   	            i /= 10;
   	        }
   	    }
   	    
   	    vector<int> results;
   	    
   	    for (int i = 0; i < 10; ++i)
   	        if (digits[i])
   	            results.push_back(i);
   	    
   	    return results;
   	}    
};
