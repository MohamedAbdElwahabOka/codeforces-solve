/*
A. Keyboard
https://codeforces.com/contest/474/problem/A
*/

#include <iostream>
#include<string>
using namespace std;

int main()
{
    char c;
    string s;
    string r;
    string s1="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    std::cin >> c;
    std::cin >> s;
    for(int i=0;i<s.size();i++){
        int t=s1.find(s[i]);
        if(c=='R'){
            r=r+s1[t-1];
        }else if(c=='L'){
             r=r+s1[t+1];
        }
    }

    cout<<r;

    return 0;
}
