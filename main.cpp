#include <iostream>
using namespace std;
#include "lib.h"


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
