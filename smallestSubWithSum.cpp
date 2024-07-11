 int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here int n = arr.size();
    int ml = INT_MAX;
    int n=arr.size();
    int cs = 0;
    int s = 0;

    for (int end = 0; end < n; ++end) {
        cs += arr[end];

        while (cs > x) {
            ml = min(ml, end - s + 1);
            cs -= arr[s];
            
            ++s;
        }
    }

    return (ml == INT_MAX) ? 0 : ml;
}
