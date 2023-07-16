

//Code
//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    void reverse(queue<int> &q)
{

    // Explicitly create a stack.
    stack<int> st;

    // Push all elements of the queue into the stack.
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    // Push back all elements from the stack into the queue.
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}
    queue<int> rev(queue<int> q)
    {
        reverse(q);
        return q;
    }
};
