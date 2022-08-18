int n = s.size();
        string ans = "";
        int max_l = 0;
        for(int i = 0; i < n; i++){
            int l = i-1;
            int r = i+1;
            while(l >= 0 && s[i] == s[l])
                l--;     
            while(r < n && s[i] == s[r])
                r++;  
            while(l >= 0 && r < n && s[l] == s[r]){
                l--;
                r++;
            }
            if(r-l-1 > max_l){
                max_l = r-l-1;
                ans = s.substr(l+1, r-l-1);
            }
        }
        return ans;
    }
