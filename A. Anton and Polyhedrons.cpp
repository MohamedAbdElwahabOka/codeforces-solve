#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,total=0;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s == "Tetrahedron")
            total +=4;
        if(s == "Cube")
            total +=6;
         if(s == "Octahedron")
            total +=8;
             if(s == "Dodecahedron")
            total +=12;
            if(s == "Icosahedron")
            total +=20;
    }

    cout << total;

    return 0;
}
