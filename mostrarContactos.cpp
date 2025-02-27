#include <iostream>
using namespace std;


void mostrarContactos(string contactos[2][3]){
cout<<"Si tiene alguna queja o duda puede llamar a los siguientes numeros"<<endl;
cout<<endl;
cout<<"Contactos"<<endl;
cout<<"-------------------------------"<<endl;
for(int i=0;i<3;i++) {

for(int x=0;x<2;x++) {


    cout<<contactos[x][i]<<" "<<endl;

}
cout<<"-------------------------------"<<endl;
}
}
