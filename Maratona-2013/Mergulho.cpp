
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main (){
    int n,m,aux;
    
    while(true){
        cin >> n;
        if(!cin) break;
        set <int> numeros;
        cin >> m;
        for(int i=0;i<m;i++){
             scanf("%d", &aux);
             numeros.insert(aux);
        }
        bool x=false;
        for(int i=1;i<=n;i++){
            if(numeros.count(i)==0){
                printf("%d ", i);
                x=true;
            }
                
        }
        if(!x) cout << "* ";
        printf("\n");

    }



    return 0;
}