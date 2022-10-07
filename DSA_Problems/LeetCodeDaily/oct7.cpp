//My Calendar III
class MyCalendarThree {
public:
    MyCalendarThree() {
       return;
    }
        
    map <int,int> mp;
    int book(int start, int end) {
         mp[start]++;
         mp[end]--;
         int val=0,mmax=0;
         for (auto p:mp) val+=p.second,mmax=max(mmax,val);
         return mmax;
    }
};