//Code
vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
      vector<vector<int>> t;
    for (int i = 0; i < n; i++) {
        vector<int> r;
        for (int j = 0; j < n; j++) {
            r.push_back(a[j][i]);
        }
        t.push_back(r);
    }
    return t;
}
