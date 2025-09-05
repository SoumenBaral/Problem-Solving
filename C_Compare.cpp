#include <iostream>
using namespace std;


int main() {
   
    string str1,str2;
    cin>>str1>>str2;

    int len = min(str1.length(), str2.length());
    bool flag =false;
    for(int i=0;i<len;i++){
        if(str1[i]<str2[i]){
            flag=true;
            break;
        }
        else if (str1[i] > str2[i]) {
            flag = false;
            break;
        }
    }
    if (!flag && str1.substr(0, len) == str2.substr(0, len)) {
        flag = str1.length() < str2.length();
    }

    if(flag){
        cout<<str1;
    }
    else cout<<str2;
    
    return 0;
}