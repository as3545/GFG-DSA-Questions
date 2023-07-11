/*
Given two force vectors, find out whether they are parallel, perpendicular or neither. Let the first vector be A = a1 i +a2 j + a3 k and the second vector be B = b1 i + b2 j + b3 k.

A.B = a1 * b1 + a2 * b2 + a3 * b3

A x B = (a2 * b3 - a3 * b2) i - (a1 * b3 - b1* a3) j + (a1 * b2 - a2 * b1) k

|A|2 = a12 + a22 + a32

If A.B = 0, then A and B are perpendicular.

If |A X B|2 = 0, then A and B are parallel.

Example 1:

Input: A = 3i + 2j + k, B = 6i + 4j + 2k
Output: 1
Explanation: |A X B|2 = 0
Example 2:

Input: A = 4i + 6j + k, B = i - 1j + 2k
Output: 2
Explanation: A.B = 0
 

Your Task:
You don't need to read or print anything. Your task is to complete the function find() which takes A and B vector as parameter and returns 1 if they are parallel to each other, 2 if they are perpendicular to each other or 0 otherwise. A and B vectors will contain (a1,a2,a3) and (b1,b2,b3) respectively.
 

Expected Time Complexity: O(1)
Expected Space Complexity: O(1)
 

Constraints:
-100 <= Component <= 100s
*/
//Code
	public:
	int find(vector<int>A, vector<int>B){
	    //  Code here
	     int AB=A[0]*B[0] + A[1]*B[1] + A[2]*B[2] ;
	    int ab=(A[1]*B[2]-A[2]*B[1])*(A[1]*B[2]-A[2]*B[1]) + 
	    (A[0]*B[2]-B[0]*A[2])*(A[0]*B[2]-B[0]*A[2])+
	    (A[0]*B[1]-A[1]*B[0])*(A[0]*B[1]-A[1]*B[0]);
	    if(AB==0)
	       return 2;
	    if(ab==0)
	       return 1;
	    else 
	      return 0;
	}
};
