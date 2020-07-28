#include <bits/stdc++.h>  
using namespace std;


int main (){
    int n; int aux;
    
    while(true){
        cin >> n;
        int lista[n+3];
        if(n==0) break;
        for(int i=1;i<=n;i++) cin >> lista[i];
        lista[0]=lista[n];
        lista[n+1]=lista[1];
        int acc=0;
        for(int i=1;i<=n;i++) {
            if(lista[i]>lista[i+1] && lista[i] > lista[i-1]){
                acc++;
            }
            else if(lista[i]<lista[i+1] && lista[i] < lista[i-1]){
                acc++;
            }
        }
        
        cout << acc << endl;
    }



    return 0;
}