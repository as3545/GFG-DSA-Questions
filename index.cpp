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
