int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> g(n);
        for (auto x : edges) {
            g[x[0]].push_back(x[1]);
            g[x[1]].push_back(x[0]);
        }
        function<int(int, int)> dfs = [&] (int u, int p) {
            int res = 0, t = 0;
            for (auto v : g[u]) {
                if (p ^ v) {
                    t = dfs(v, u);
                    if (t > 0 || hasApple[v]) {
                        res += t + 2;
                    }
                }
            }
            return res;
        };
        return dfs(0, -1);
    }
