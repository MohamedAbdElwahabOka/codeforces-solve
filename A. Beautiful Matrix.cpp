/*
A. Beautiful Matrix
https://codeforces.com/contest/263/problem/A
*/


#include <iostream>

using namespace std;

void solve(int arr[5][5]){
    
    if(arr[2][2] == 1){
        cout << 0;
    }else{
        
    
    int I,J;
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            
            if(arr[i][j] == 1){
                I =i;
                J=j;
                break;
            }
            
        }
    }
    cout<<abs((I-2))+abs((J-2));
    }
}
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            std::cin >> arr[i][j];
            
        }
        
    }
    
    solve(arr);
    
 
    return 0;
}
