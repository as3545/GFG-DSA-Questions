/*
Problem Statement:
-----------------
Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek build a star pattern.

 

Example 1:

Input: 5

Output:
* * * * *
* * * * 
* * * 
* *  
* 

 

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.

Constraints:

1<= N <= 20

*/

// Link --> https://practice.geeksforgeeks.org/problems/triangle-pattern/1

// Code:

public:
	
	void printTriangle(int n) {
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            cout<<"*"<<" ";
	        } cout<<endl;
	    }
	}
