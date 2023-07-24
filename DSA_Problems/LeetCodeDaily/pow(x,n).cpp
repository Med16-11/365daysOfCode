double solve(double x,int n){
        if(n == 0){
            return 1;
        }
        if(n == 1){
            return x;
        }
        if(n == -1){
            return (1/x);
        }
        double ans = solve(x,n/2);
        if(abs(n) % 2 == 0){
            return ans*ans;
        }
        else{
            if(n>=0)
                return ans*ans*x;
            else
                return ans*ans*(1/x);    
        }
    }
    double myPow(double x, int n) {
        if(x == 0){
            return 0;
        }
        return solve(x,n);
    }
