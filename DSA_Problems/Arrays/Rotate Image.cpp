void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

TC: O(N*N) + O(N*N) //for transposing and reversing
SC: O(1)
