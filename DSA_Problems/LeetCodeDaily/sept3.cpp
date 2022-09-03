//Numbers With Same Consecutive Differences
void dfs(int num, int N, int k, vector<int>&res){
        if(N == 0){
            res.push_back(num);
            return;
        }
        int last_digit = num % 10;
        if(last_digit >= k ) dfs(num * 10 + last_digit - k, N-1, k, res);
        if(k>0 && last_digit + k < 10) dfs(num * 10 + last_digit + k, N-1, k, res);
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int>res;
        if(n == 1) res.push_back(0);
        for(int d = 1; d < 10; ++d){
            
            dfs(d, n-1, k, res);
            
        }
        return res;
        
    }
