
//Decode Ways
int n = s.length();
        if(s[0] == '0'){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        int c1=1,c2=1;
        for(int i=1;i<n;i++){
            int d = s[i] - '0';
            int dd = 10 * (s[i-1] - '0') + d;
            int count =0;
            if(d >= 1){
                count += c2;
            }
            if(dd >= 10 && dd<= 26){
                count += c1;
            } 
            c1 = c2;
            c2 = count;
        }
        return c2;
