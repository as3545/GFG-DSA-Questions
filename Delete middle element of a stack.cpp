//Code
void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        vector<int>util;
        while(!s.empty())
        {
            util.push_back(s.top());
            s.pop();
        }
        int n=util.size();
        int k=ceil(n/2);
        // util.erase(util.begin()+k);
        for(int i=n-1;i>k;i--)
        {
            s.push(util[i]);
        }
        for(int i=k-1;i>=0;i--)
        {
            s.push(util[i]);
        }
    }
};
