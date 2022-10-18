//Count and Say
string countAndSay(int n) {
        string s="1",ns;
        for(int i=2;i<=n;++i){
            for(int j=0;j<s.size();++j){
                int freq=1;
                while(j+1<s.size() && s[j+1]==s[j]){
                    ++freq;
                    ++j;
                }
                ns+=to_string(freq)+s[j];
            }
            s=ns;
            ns.clear();
        }
        return s;
    }
