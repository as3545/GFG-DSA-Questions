/*
Given two circles C1 of radius R1 and C2 of radius R2,centered at (X1,Y1) and (X2,Y2) respectively.Find out whether they touch(at one or more than one points).

Example 1:

Input:
X1=3
Y1=4
R1=5
X2=14
Y2=18
R2=8
Output:
0
Explanation:
The circles centred at (3,4) and (14,18)
and having radii 5 and 8 respectively
do not touch each other.
Example 2:

Input:
X1=3
Y1=4
R1=5
X2=14
Y2=18
R2=18
Output:
1
Explanation:
The circles centred at (3,4) and (14,18)
and having radii 5 and 18 respectively
touch each other at two points.

Your Task:
You don't need to read input or print anything.Your Task is to complete the function circleTouch() which takes 6 integers X1,Y1,R1,X2,Y2 and R2 as input parameters and returns 0 if the circle does not touch each other at all.Otherwise it returns 1.


Expected Time Complexity:O(1)
Expected Auxillary Space:O(1)


Constraints:
-104<=X1,Y1,X2,Y2<=104
1<=R1,R2<=104
*/
//Code
 double  n =sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
         if(n<=(R1+R2)){
            return 1;
        }
         return 0;
