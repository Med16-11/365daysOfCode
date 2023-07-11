int getMinDiff(int arr[], int n, int k) {
        // code here
        if (n==1) return 0;
        sort(n, n+1);
        int mini, maxi;
        int diff=arr[n-1]-arr[0];
        for(int i = 1; i <n; i++){
            if((arr[i]-k)< 0){
                continue;
            }
            maxi= max((arr[n-1]-k),(arr[i]+k));
            mini= min((arr[0]+k),(arr[i]-k));
            diff=min(maxi-mini,diff);
            
        }
        return diff;
        
    }
