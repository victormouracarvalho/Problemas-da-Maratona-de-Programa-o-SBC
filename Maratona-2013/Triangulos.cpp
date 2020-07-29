#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, i, cont, soma, num;
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cin >> n;
    while(!cin.eof()){
        int circulo[n];
        cont = 0;
        cin >> num;
        circulo[0] = num;
        i = 1;
        while(i < n){
            cin >> num;
            circulo[i] = num + circulo[i-1];
            i++;
        }
        num = circulo[n-1];
        i = 0;
        int k = 0, x = 0;
        i = 0;
        if(num%3 != 0) cout << cont << endl;
        else{
            num = num/3;
            while(circulo[i] + 2*num <= circulo[n-1]){
                //até completar o circulo(3/3)
                while(num > circulo[x] - circulo[i]){
                    //enquanto nao encontra um intervalor igual a 1/3 ou mais do circulo
                    x++;
                }
                while(2*num > circulo[k] - circulo[i]){
                    //enquanto não encontra um intervalo que corresponda a 2/3 ou mais
                    k++;
                }
                int a = circulo[i] + num;
                int b = circulo[i] + 2*num;
               // cout << a << " " << b << " " << num << endl;
                if(a == circulo[x] && b == circulo[k]){
                    cont++;
                }

                i++;
            }
            cout << cont << endl;
        }
        cin >> n;
    }
    return 0;
}
