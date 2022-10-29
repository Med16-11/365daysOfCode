//Earliest Possible Day of Full Bloom
static bool compare(pair<int,int> &a,pair<int,int> &b){
    return a.second > b.second;
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> arr;
        int ans=INT_MIN; 
    
        for(int i=0;i<plantTime.size();i++){
            arr.push_back({plantTime[i],growTime[i]}); 
        }
   
        sort(arr.begin(),arr.end(),compare);
    
        int t=0;
        for(int i=0;i<plantTime.size();i++){
            t += arr[i].first;
            ans=max(ans , t+arr[i].second);
        }
        return ans; 
    }
