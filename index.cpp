vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int l=0, cs=0;
        for(int i=0;i<n;i++){
            cs+=arr[i];
            while(cs>s and l<=i){
                cs-=arr[l];
                l++;
            }
            if(cs==s){
                return {l+1, i+1};
            }
        } return {-1};
    }


int start = 0, last = 0;
        long long cursum = 0;
        vector<int> res;
        bool flag = false;
       for (int i = 0; i < n; i++) {
            cursum += arr[i];
            
            if (cursum >= s) {
                last = i;
                
                while (s < cursum && start < last) {
                    cursum -= arr[start];
                    ++start;
                }
                
                if (cursum == s) {
                    res.push_back(start + 1);
                    res.push_back(last + 1);
                    flag = true;
                    break;
                }
            }
        }
        
        if (flag == false) {
            res.push_back(-1);
        }
        
        return res;
