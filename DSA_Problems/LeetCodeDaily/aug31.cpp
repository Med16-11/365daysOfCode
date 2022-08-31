//Pacific Atlantic Water Flow
void dfs(vector<vector<int>>& M, vector<vector<int>>& vis, int i, int j) {
        int m = M.size(), n = M[0].size();
        vis[i][j] = 1;
        if (i - 1 >= 0 && !vis[i - 1][j] && M[i - 1][j] >= M[i][j]) dfs(M, vis, i - 1, j);
        if (i + 1 < m && !vis[i + 1][j] && M[i + 1][j] >= M[i][j]) dfs(M, vis, i + 1, j);
        if (j - 1 >= 0 && !vis[i][j - 1] && M[i][j - 1] >= M[i][j]) dfs(M, vis, i, j - 1);
        if (j + 1 < n && !vis[i][j + 1] && M[i][j + 1] >= M[i][j]) dfs(M, vis, i, j + 1);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& M) {
        vector<vector<int>> ans;
        int m = M.size(), n = M[0].size();
        vector<vector<int>> P(m, vector<int>(n));
        vector<vector<int>> A(m, vector<int>(n));
        for(int i = 0; i < m; i++) {
            dfs(M, P, i, 0);
            dfs(M, A, i, n - 1);
        }
        for(int i = 0; i < n; i++) {
            dfs(M, P, 0, i);
            dfs(M, A, m - 1, i);
        }
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(P[i][j] && A[i][j]) {
                    ans.push_back(vector<int>{i, j});
                }
            }
        }
        return ans;
    }
