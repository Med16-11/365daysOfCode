vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        if (matrix.empty() || matrix[0].empty()) {
            return res;
        }
        int rows = matrix.size(), cols = matrix[0].size();
        int left = 0, right = cols-1, top = 0, bottom = rows-1;
        
        while(left <= right && top <= bottom){
            for(int i = left ; i<= right; i++){
                res.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top; i<= bottom; i++){
                res.push_back(matrix[i][right]);
            }
            right--;

            if(top <= bottom){
                for(int i = right; i>=left; i--){
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left <= right){
                for(int i = bottom; i>= top; i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
