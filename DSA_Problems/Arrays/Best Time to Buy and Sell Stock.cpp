int maxProfit(vector<int>& prices) {
        
        int maxPro = 0;
        int n = prices.size();
        int minPrice = INT_MAX;
        for(int i = 0; i < n; i++){
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i]-minPrice);
        }
        return maxPro;
    }

TC: O(n)
SC: O(1)
