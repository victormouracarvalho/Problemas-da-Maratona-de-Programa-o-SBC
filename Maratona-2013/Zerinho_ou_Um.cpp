#include <bits/stdc++.h>  
using namespace std;


int main (){
    int a,c,b;

    while(true){
        cin>>a>>b>>c;
        if(!cin) break;
        if(a!=b && a!=c) cout << "A\n";
        else if(b!=a && b!=c) cout << "B\n";
        else if(c!=b && c!=a) cout << "C\n";
        else cout << "*\n";
      }



    return 0;
}