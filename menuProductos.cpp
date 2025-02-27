#include <iostream>
using namespace std;



 int menuGaseosa(){

     int bebidas=0;

     do {                   cout << "==============================================" << endl;
                            cout << "               MENU DE BEBIDAS                " << endl;
                            cout << "==============================================" << endl;
                            cout << "| 1. Fanta      | 2. Coca       | 3. Sprite  |" << endl;
                            cout << "| 4. Fernet     | 5. Gancia     | 6. Vino    |" << endl;
                            cout << "| 7. Agua       | 8. Jugo       | 9. Soda    |" << endl;
                            cout << "==============================================" << endl;
                            cout << "| 10. Salir                                  |" << endl;
                            cout << "==============================================" << endl;
                            cout << "Eleccion: ";
                            cin>>bebidas;

     } while ( bebidas >10);
   return bebidas;


 }

 int menuAlimentos(){
 int Alimentos=0;
 do {                       cout << "=========================================================================" << endl;
                            cout << "               MENU DE ALIMENTOS                                         " << endl;
                            cout << "=========================================================================" << endl;
                            cout << "| 1. Arroz             | 2. Fideos              | 3. Capelletini        |" << endl;
                            cout << "| 4. Oreos             | 5. Surtidas            | 6. Operas             |" << endl;
                            cout << "| 7. Hamburguesas      | 8. Bastones pescado    | 9. Patitas Pollo      |" << endl;
                            cout << "=========================================================================" << endl;
                            cout << "| 10. Salir                                                             |" << endl;
                            cout << "=========================================================================" << endl;
                            cout << "Eleccion: ";
                            cin>>Alimentos;
                            cout << "\n\n";

 } while ( Alimentos >10);
 return Alimentos;

 }

 int menuProductosLimpieza(){
 int Productoslimpieza=0;
 do {                       cout << "======================================================" << endl;
                            cout << "            MENU DE PRODUCTOS DE LIMPIEZA             " << endl;
                            cout << "======================================================" << endl;
                            cout << "| 1. Lavandina   | 2. Detergente | 3. Jabon          |" << endl;
                            cout << "| 4. Cif         | 5. Blem       | 6. Flit           |" << endl;
                            cout << "| 7. Esponja     | 8. Escobillon | 9. Palo de escoba |" << endl;
                            cout << "======================================================" << endl;
                            cout << "| 10. Salir                                          |" << endl;
                            cout << "======================================================" << endl;
                            cout << "Eleccion: ";
                            cin>>Productoslimpieza;
                            cout << "\n\n";
} while ( Productoslimpieza >10);
 return Productoslimpieza;
 }
