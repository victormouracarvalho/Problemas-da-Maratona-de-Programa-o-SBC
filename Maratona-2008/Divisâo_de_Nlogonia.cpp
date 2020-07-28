#include <bits/stdc++.h>  
using namespace std;


int main (){
    int a,b,c,d;
    vector <pair<int,int>> lista;
    while(true){
        int n;
        cin >> n;
        if(n==0) break;
        cin >> c >> d;
        while(n--){
            cin >> a >> b;
            if(a==c || b==d) cout << "divisa\n";
            else if(a>c && b > d)cout << "NE\n";
            else if(a>c && b < d)cout << "SE\n";
            else if(a<c && b > d)cout << "NO\n";
            else if(a<c && b < d)cout << "SO\n";
        }
    }



    return 0;
}