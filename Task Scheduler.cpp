/* 
Task Scheduler
Given a character array of tasks of size N, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle.
CPU has a cooldown period for each task. CPU can repeat a task only after at least K units of time have passed after it did the same task last time. It can perform other tasks in that time, can stay idle to wait for repeating that task.

Return the least number of units of time that the CPU will take to finish all the given tasks.

Example 1:

Input:
N = 6
K = 2
task[ ] = {'A', 'A', 'A', 'B', 'B', 'B'}
Output: 8
Explanation: 
A -> B -> idle -> A -> B -> idle -> A -> B
There is at least 2 units of time between any two same tasks.
 
Example 2:

Input:
N = 12
K = 2
task[ ] = {'A', 'A', 'A', 'A', 'A', 'A', 'B', 'C', 'D', 'E', 'F', 'G'}
Output: 16
Explanation:  
One possible solution is 
A -> B -> C -> A -> D -> E -> A -> F -> G -> A -> idle -> idle -> A -> idle -> idle -> A.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function leastInterval() which takes the interger N, integer K and an character array tasks as parameters and returns the minimum unit of time required to complete all tasks.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 104
0 ≤ K ≤ 100
taski is upper-case English letter.

*/

// Code


class Solution {
  public:
     int leastInterval(int N, int k, vector<char> &tasks) {
        // code here
        unordered_map<char,int> counttask;
        for(char t : tasks)
        {
            counttask[t]++;
        }
        vector<int> feq;
        for (const auto& entry : counttask) 
        {
            feq.push_back(entry.second);
        }
        sort(feq.begin(), feq.end(), greater<int>());
       int max = feq[0];
       int n = 0;
       for(auto i: feq)
       {
           if(i==max)
           {
               n++;
           }
       }
         int r = (max-1)*(k+1)+n;
        
        return (N>r)?N:r;
    }
};
