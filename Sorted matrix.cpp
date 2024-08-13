/*
  Sorted matrix
*/
vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    // Step 1: Flatten the matrix into a 1D vector
    vector<int> flat;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            flat.push_back(Mat[i][j]);
        }
    }
    
    // Step 2: Sort the flattened vector
    sort(flat.begin(), flat.end());
    
    // Step 3: Rebuild the sorted matrix
    vector<vector<int>> sortedMat(N, vector<int>(N));
    int index = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sortedMat[i][j] = flat[index++];
        }
    }
    
    return sortedMat;
}

void printMatrix(const vector<vector<int>>& Mat) {
    for (const auto& row : Mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}
