class Solution {
public:
bool isValid(char ch){
    if((ch >='a' && ch <= 'z') || (ch >= 'A' && ch <='Z') || (ch >= '0' && ch <= '9')){
        return true;
    }
    return false;
}

char tolowercase(char ch){
    if((ch>='a' && ch <='z') || (ch >= '0' && ch <='9')){
        return ch;
    }else{
        char temp = ch -'A'+'a';
        return temp;
    }
}

bool palindrome(string s){
    int a = 0;
    int n = s.length() - 1;

    while(a < n){
        if (s[a] != s[n]){
            return false;
        }else{
            a++;
            n--;
        }
    }
    return 1;
}

    bool isPalindrome(string s) {
        string temp="";
        for(int j = 0; j <s.length(); j++){
            if(isValid(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j = 0; j < temp.length(); j++){
            temp[j] =tolowercase(temp[j]);
        }
        return palindrome(temp);
    }
};
