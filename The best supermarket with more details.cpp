#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <strings.h>

using namespace std;

int main()
{
char res = 'S';
while(true){
int cantidad;
int result;
string data[3][2];
cout<<"Bienvenido a la version mejorada del modulo de clientes >u< aqui puede poner informacion adicional de nuestros productos!" <<endl;
cout<<"Ahora simplemente ingrese el NUMERO de productos que va a detallar nwn" <<endl;
cin>>cantidad;
cout << "Ahora solo inserte el valor unitario y el porcentaje: \n \n";
string ValorUnitario;
string porcentaje;

for(int i = 0; i < 3; i++)
{
cout << "\n||======== valor unitario y porcentaje del producto #" << i + 1 << "=========||:\n";
cout << "Valor unitario: ";
getline(cin,ValorUnitario);
cout << "Porcentaje: ";
getline(cin,porcentaje);
data[i][0] = ValorUnitario;
data[i][1] = porcentaje;
}


cout<<"\n";


for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 2; j++)
{
cout<<"El valor unitario y el porcentaje del producto #"<< i + 1 <<" es: "<<data[i][j]<<endl;
}

}


;
cout<<"El total es: " ;
result= atoi(ValorUnitario.c_str()) * cantidad - (atoi(porcentaje.c_str()));
cout<<result;

cout<<"\n";
cout<<"Desea realizar el proceso una vez mas? S/N "<<endl;
cin>>res;
if (res=='n')
{ cout<<"Hasta pronto!<3"<<endl;
break;
}

}

return 0;

}
