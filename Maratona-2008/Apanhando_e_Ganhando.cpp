#include <iostream>
#include <stack>

using namespace std;

int main () 
{
  int n,d,i,x,m,j, tamanho, comeco;
  while(true)
    {
      cin >> n >> d;
      if(n==0 and d==0) break;
      tamanho = n - d ;
      string frase;
      char resp[n];
      stack <char> pilha;
      cin >> frase;
      for(i=0;i<(frase.size()); i++)
	{
	  if( d > 0 )
	    {
	      if(pilha.empty())
		{
		  pilha.push(frase[i]);
		}
	      else if(frase[i]<=pilha.top())
		{
		  pilha.push(frase[i]);
		}
	      else if(frase[i]>pilha.top())
		{
		  while((!pilha.empty()) && frase[i]>pilha.top() && d>0)
		    {
		      pilha.pop();
		      d--;
		    }
		  pilha.push ( frase [ i ] ) ;
		}
	    }
	  else pilha.push(frase[i]);
	}
      comeco = pilha.size() ;
      i=0;
      while(!pilha.empty())
	{
	  char c = pilha.top();
	  pilha.pop();
	  resp[i] = c;
	  i++;
	}
      for(i=comeco-1, j = 0 ; j < tamanho  ;i--, j++) cout << resp[i];
      cout << endl;
    }
  return 0;
}
