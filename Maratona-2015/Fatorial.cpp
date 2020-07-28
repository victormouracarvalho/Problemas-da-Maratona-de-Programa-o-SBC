
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main (){
    int n;
    vector<int> valores_fatorial;
    int acc=0;
    cin >> n;    
    int fat=1;
    int i;
    valores_fatorial.push_back(1);
    valores_fatorial.push_back(1);

    for(i=2;i<=9;i++){
        fat*=i;
        valores_fatorial.push_back(fat);        
    }
  //  for(i=0;i<=valores_fatorial.size()-1;i++) cout << valores_fatorial[i] << " ";
    
    for(i=valores_fatorial.size()-1;i>=0;i--) {
        if(valores_fatorial[i]<=n) break;
    }
 

   // cout << endl << i << endl;
    
    
    while(n>0){
        if(i<1) break;
        else if(n>=valores_fatorial[i]){
            n-=valores_fatorial[i];
          //  cout << valores_fatorial[i] << " ";
           // cout << i << " ";
           // cout << n << ' ' << " "<< endl;
            acc++;
            
        } else {
            i--;
        }
    }


    cout << acc << endl;
    return 0;
}