
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;


int main (){
    int l,c;
    
    while(true){
        cin >> l>>c;
        if(!cin) break;
        int matriz[l+3][c+3];
        int matriz_original[l+3][c+3];
        vector<int> copia1;
        vector<int> copia2;
        int k=1;
        for(int i=1;i<=l;i++){
            for(int j=1;j<=c;j++){
                matriz[i][j]=k;
                matriz_original[i][j]=k;
                k++;
            }
        }        
        for(int i=1;i<=l;i++){
            for(int j=1;j<=c;j++){
                cin >>matriz[i][j];
            }
        }
        //AGORA TEMOS QUE ACHAR O NUMERO UM
        //ANTES, IREMOS IMPRIMIR
  //      for(int i=1;i<=l;i++){
//            for(int j=1;j<=c;j++){
 //               cout << matriz[i][j] << ' ';
 //           } cout << endl;
        
//        cout << endl;
 //           for(int j=1;j<=c;j++){
   //             cout << matriz_original[i][j] << ' ';
     //       } cout << endl;
     //   }
        int aux, aux2;
        //VAMOS ACHAR O NUMERO UM
        for(int i=1;i<=l;i++){
            for(int j=1;j<=c;j++){
                if(matriz[i][j]==1) {
                    aux=i;aux2=j;
                    break;
                }
            } 
        }
        int acc=0;
        if(aux!=1) acc++;
        if(aux2!=1) acc++;
        //for para mudar a coluna
        int troca;
        for(int i=1;i<=l;i++){
            troca= matriz[i][1];
            matriz[i][1] = matriz[i][aux2];
            matriz[i][aux2]=troca;
        }//For para mudar a linha(row);


 //       cout << "Remanejo das colunas:\n";
//        for(int i=1;i<=l;i++){
//            for(int j=1;j<=c;j++){
 //               cout << matriz[i][j] << ' ';
 //           } cout << endl;
//        }

        for(int i=1;i<=c;i++){
            troca= matriz[1][i];
            matriz[1][i] = matriz[aux][i];
            matriz[aux][i]=troca;
        }

 //       cout << "Remanejo das linhas:\n";
 //       for(int i=1;i<=l;i++){
 //           for(int j=1;j<=c;j++){
 //               cout << matriz[i][j] << ' ';
 //           } cout << endl;
 //       }

        set <int> linha;
        set <int> coluna;
        for(int i=1;i<=c;i++)linha.insert(i);
        for(int i=c;i<=l*c;i+=c)coluna.insert(i);
       // cout << endl;
       // for(auto e:linha) cout << e << ' ';
       // cout << endl;
      //  for(auto e:coluna) cout << e << ' ';
       // cout << endl;
       bool vero=false;
        // verificação
        // ordenar as linhas (na hora de orgarnizar, organiza as colunas)
        for(int i=1;i<=c;i++){
            if(matriz[1][i]!=i){
                //cout << "troca: " << troca <<endl;
                acc++;
                 troca = matriz[1][i];
                 if(linha.count(troca)==0) {break;}
                 matriz[1][i]= matriz[1][troca];
                 matriz[1][troca]=troca;
                 // TROCA --> POSIÇÃO QUE SERÁ TROCADA !!! (4)
                for(int h=2;h<=l;h++){
                     int x = matriz[h][i];
                     matriz[h][i]= matriz[h][troca];
                     matriz[h][troca]=x;
                }
               i--;
            }
        }

    /*     cout << endl << "Matriz teste:\n";
        for(int i=1;i<=l;i++){
            for(int j=1;j<=c;j++){
                cout << matriz[i][j] << ' ';
            } cout << endl;
        }*/
        //ordenar as linhas de colunas
        // Falta Isso aqui!!!!
        for(int i=1;i<=l;i++){
            if(matriz[i][c]/c!=(i)){
                acc++;
                 troca = matriz[i][c];  
                 if(coluna.count(troca)==0) {break;}
                troca = troca/c;
                 matriz[i][c]= matriz[troca][c];
                 matriz[troca][c]=troca*c;
            // IREI MEXER NO RESTO DAS COLUNAS 16/c(4) --> troca=4
            for(int h=1;h<c;h++){
                    int x = matriz[i][h];
                    matriz[i][h]= matriz[troca][h];
                    matriz[troca][h]=x;
                }
                i--;
            }

        }   
        /*cout << endl << "Matriz Final:\n";
        for(int i=1;i<=l;i++){
            for(int j=1;j<=c;j++){
                cout << matriz[i][j] << ' ';
            } cout << endl;
        }
        cout << endl << "Matriz Original:\n";
        for(int i=1;i<=l;i++){
            for(int j=1;j<=c;j++){
                cout << matriz_original[i][j] << ' ';
            } cout << endl;
        }*/
         
        for(int i=1;i<=l;i++){
            for(int j=1;j<=c;j++){
                if(matriz[i][j]!=matriz_original[i][j]){
                    cout << "*\n";
                    vero=true;
                    break;
                }
            }   if(vero) break;
        }

        if(!vero){cout << acc << endl;}
    }


    return 0;
}