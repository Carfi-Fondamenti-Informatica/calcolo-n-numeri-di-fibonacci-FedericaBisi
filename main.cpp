#include <iostream>
using namespace std;

int main() {
   int n=0; int primo=1; int secondo=1; int terzo=0;
   cin>>n;
   if(n>=2){
      cout<<primo<<endl;
      cout<<secondo<<endl;
      for(int i=2; i<n; i++){
         terzo=primo+secondo;
         primo=secondo;
         secondo=terzo;
         cout<<terzo<<endl;
      }
   }else{
      cout<<"errore"<<endl;
   }
   return 0;
}
