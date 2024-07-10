/*
Given a sorted array arr. Return the size of the modified array which contains only distinct elements.
Note:
1. Don't use set or HashMap to solve the problem.
2. You must return the modified array size only where distinct elements are present and modify the original array such that all the distinct elements come at the beginning of the original array.

Examples :

Input: arr = [2, 2, 2, 2, 2]
Output: [2]
Explanation: After removing all the duplicates only one instance of 2 will remain i.e. [2] so modified array will contains 2 at first position and you should return 1 after modifying the array, the driver code will print the modified array elements.
Input: arr = [1, 2, 4]
Output: [1, 2, 4]
Explation:  As the array does not contain any duplicates so you should return 3.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ ai ≤ 106

*/
class Solution {
  public:
    int remove_duplicate(vector<int> &arr) {
        // code herez
        if(arr.empty()){
            return 0;
        }
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=arr[j]){
                j++;
                arr[j]=arr[i];
            }
        } return j+1;
    }
};
