//Minimum Time to Make Rope Colorful
int minCost(string colors, vector<int>& nt) {
        
        int cnt = 1,ans=0,time=nt[0],maxi=nt[0];
        for(int i=1;i<colors.size();i++){
            if(colors[i]!=colors[i-1]){
                if(cnt>1){
                    ans+=time-maxi;  
                }
                time=nt[i];
                maxi=nt[i];
                cnt=1;
            }else{
                maxi = max(maxi,nt[i]);
                time+=nt[i];
                cnt++;
            }
        }
        if(cnt>1){
            ans+=time-maxi;
            cnt=1;
        }
        return ans;
    }
