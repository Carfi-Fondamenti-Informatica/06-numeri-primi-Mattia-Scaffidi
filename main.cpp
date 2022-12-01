#include <iostream>
using namespace std;
bool funzione (int n) {
    int i=1,x;

    if(n>1)
        do{
            i++;
            x=n%i;
        }while(x);
    if(i==n){

        return true;


    }
    else{
        return false;
    }

}

int main() {
int n ;
cin>> n;
bool risultato= funzione(n);
if (risultato == true){
    cout<<"il numero e' primo"<<endl;
}
else
{
    cout<<"il numero non e' primo"<<endl;
}


return 0;
}
