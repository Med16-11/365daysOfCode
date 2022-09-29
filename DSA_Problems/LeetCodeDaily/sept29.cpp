int n = arr.size();
        vector<int> ans(k,0);
        
        vector<int> difference(n,0);
        for(int i=0;i<arr.size();i++){
            difference[i] = abs(arr[i] - x);
        }
        
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push({difference[i],arr[i]});
            if(pq.size() > k)
                pq.pop();
        }
        
       
        int i=0;
        while(!pq.empty()){
            ans[i++] = pq.top().second;
            
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
