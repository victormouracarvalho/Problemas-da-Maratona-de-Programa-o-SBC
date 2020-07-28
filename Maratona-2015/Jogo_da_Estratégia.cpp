
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main (){
    int n,m;
    scanf("%d%d",&n,&m);
    vector <long long int > jogadores(n+3);
    for(int i=0;i<=n;i++){
            jogadores[i] =0;
        }
        int aux;long int maior=0;
    for(int j=0;j<m;j++){
        for(int i=1;i<=n;i++){
            scanf("%d",&aux);
            jogadores[i]+=aux;
            if(jogadores[i]>maior) maior=jogadores[i];
        }
    }
    //cout << endl << endl;
   // for(int i=1;i<=n;i++) cout << jogadores[i] << ' ';
   // cout << endl;
  //  cout << "Maior: " << maior << endl;
    for(int i=n;i>=1;i--) {
        if(jogadores[i]==maior) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}