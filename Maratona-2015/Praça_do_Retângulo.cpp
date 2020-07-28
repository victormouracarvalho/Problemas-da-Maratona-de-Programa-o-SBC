#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;


int compara(pair<int, int>a, pair<int,int> b){ return a.first < b.first ;}

int main(){
    int n;
    cin >> n;
    vector<pair<long int, long int>> lista;
    for(int i = 0; i < n;i++){
        pair<long int, long int>  Pontos;   
        cin >> Pontos.first >> Pontos.second;
        lista.push_back(Pontos);
    }
   // for(int i = 0; i < n;i++) cout << lista[i].first << ' ' << lista[i].second << endl;
    sort(lista.begin(), lista.end(), compara);
   // for(int i = 0; i < n;i++) cout << lista[i].first << ' ' << lista[i].second << endl;

    long int acc=0;
    long int y1,y2;
    //FAZER A PARTE DAS COMPARAÇÔES;
    for(int i = 0; i < n-1;i++) {
        y1=100000000;
        y2=-100000000;
         for(int j = i+1; j < n; j++){
            if(lista[j].second>lista[i].second){
                if(lista[j].second<y1){
                    acc++;
                    y1=lista[j].second;
                } 
            }
            else {
                if(lista[j].second >y2){
                    acc++;
                    y2=lista[j].second;
                }
            }
        }
    }    
    cout << acc << endl;


}


