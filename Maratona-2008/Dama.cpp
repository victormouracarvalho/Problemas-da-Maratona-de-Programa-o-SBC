#include <bits/stdc++.h>  
using namespace std;


int main (){
    int a,b,c,d;
    vector <pair<int,int>> lista;
    while(true){
        cin >> a >> b >> c >> d;
        int x=a;int y=b;
        if(a==0 && b==0 && c==0 && d==0 ) break;
        x--;y++;
        while(x>0 && y<=8){
            
            lista.push_back({x--,y++});
        }   x=a;y=b;x++;y++;
        while(x<=8 && y<=8){
           
            lista.push_back({x++,y++});
        } x=a;y=b;x--;y--;
        while(x>0 && y>0){
            
            lista.push_back({x--,y--});
        } x=a;y=b;x++;y--;
        while(x<=8 && y>0){
            
            lista.push_back({x++,y--});
        } x=a;y=b;
        

        bool aux=false;
        //if(a==c && b==d) cout << 0 << endl;
       
            for(int i=0;i<lista.size();i++){
                if(lista[i].first==c && lista[i].second == d) {aux=true;}
                //if(a==c && b==d) {cout << 0 << endl;break;}
               // cout << lista[i].first << ' ' << lista[i].second << endl;
            }
    
        if(a==c && b==d) cout << 0 << endl;
        else if(aux) cout << 1 << endl;
        else if(a==c || b==d) cout << 1 << endl;
        else cout << 2 << endl;
        lista.clear();
    }



    return 0;
}