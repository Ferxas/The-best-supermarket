//testing business
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(){
int k = 2;
while (true){
string productos[50];
int x;

cout<<"Bienvenido al mejor supermercado del universo, donde puedes obtener literalmente cualquier cosa porque lo tenemos todo. Para iniciar, por favor ingrese primero el NUMERO de productos: ";
cin>>x;
for (int i=0; i<x; i++)
{
cout<<"Ingrese el NOMBRE del producto #" <<i+1<<" de la lista: ";
cin>>productos[i];
}

cout<<"Los productos que usted ingreso son los siguientes: "<<endl;
for (int i=0; i<x; i++)
{
cout <<productos[i]<<endl;
}

cout<< "¿Le ha sido util el resultado? Ingrese 1 para finalizar y 2 para crear una lista nueva " ;
cin>>k;
if (k == 1)
{ cout <<"¡Gracias por ser parte de nuestros servicios!"<<endl;
break;
}
else{
k == 2;
}


}
}
