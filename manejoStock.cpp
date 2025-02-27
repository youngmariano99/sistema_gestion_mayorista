#include <iostream>
#include "Estructuras.h"
using namespace std;


int menuAgregarStock() {
                        int eleccion=0;
                        cout << "======================================" << endl;
                        cout << "         MENU AGREGAR STOCK           " << endl;
                        cout << "======================================" << endl;
                        cout<<  "      Que producto desea elegir:      "<<endl;
                        cout << "======================================" << endl;
                        cout<<  "   -1 Bebidas                         "<<endl;
                        cout<<  "   -2 Alimentos                       "<<endl;
                        cout<<  "   -3 Productos de limpieza           "<<endl;
                        cout << "======================================" << endl;
                        cin>>eleccion;
                        return eleccion;

                                }

void agregarStockGaseosa(Productos stockBebidas[]){
 int cantidad=0,bebidas=0;

                            do{
                             cout << "==============================================" << endl;
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

                            if (bebidas==10){
                                break;
                            }
                            cout<<"Que cantidad de stock quiere agregar: ";
                            cin>>cantidad;

                            stockBebidas[bebidas-1].Stock+=cantidad;
                            cout<<"Ahora el stock disponible de "<<stockBebidas[bebidas-1].Nombre<<" es: "<<stockBebidas[bebidas-1].Stock<<endl;
                            }while(bebidas!=10);
                            }

void agregarStockAlimentos(Productos stockAlimentos[]){
 int cantidad=0,Alimentos=0;

                            do{
                            cout << "=========================================================================" << endl;
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


                             if (Alimentos==10){
                                break;
                            }
                            cout<<"Que cantidad de stock quiere agregar: ";
                            cin>>cantidad;

                            stockAlimentos[Alimentos-1].Stock+=cantidad;
                            cout<<"Ahora el stock disponible de "<<stockAlimentos[Alimentos-1].Nombre<<" es: "<<stockAlimentos[Alimentos-1].Stock<<endl;
                            }while(Alimentos!=10);
                            }

void agregarStockProductosLimpieza(Productos stockProductosLimpieza[]){
 int cantidad=0,ProductosLimpieza=0;

                            do{
                            cout << "======================================================" << endl;
                            cout << "            MENU DE PRODUCTOS DE LIMPIEZA             " << endl;
                            cout << "======================================================" << endl;
                            cout << "| 1. Lavandina   | 2. Detergente | 3. Jabon          |" << endl;
                            cout << "| 4. Cif         | 5. Blem       | 6. Flit           |" << endl;
                            cout << "| 7. Esponja     | 8. Escobillón | 9. Palo de escoba |" << endl;
                            cout << "======================================================" << endl;
                            cout << "| 10. Salir                                          |" << endl;
                            cout << "======================================================" << endl;
                            cout << "Eleccion: ";
                            cin>>ProductosLimpieza;
                             if (ProductosLimpieza==10){
                                break;
                            }
                            cout<<"Que cantidad de stock quiere agregar: ";
                            cin>>cantidad;

                            stockProductosLimpieza[ProductosLimpieza-1].Stock+=cantidad;
                            cout<<"Ahora el stock disponible de "<<stockProductosLimpieza[ProductosLimpieza-1].Nombre<<" es: "<<stockProductosLimpieza[ProductosLimpieza-1].Stock<<endl;
                            }while(ProductosLimpieza!=10);
                            }


int menuQuitarStock() {
                        int eleccion=0;
                        cout << "======================================" << endl;
                        cout << "         MENU QUITAR STOCK            " << endl;
                        cout << "======================================" << endl;
                        cout<<  "      Que producto desea elegir:      "<<endl;
                        cout << "======================================" << endl;
                        cout<<  "   -1 Bebidas                         "<<endl;
                        cout<<  "   -2 Alimentos                       "<<endl;
                        cout<<  "   -3 Productos de limpieza           "<<endl;
                        cout << "======================================" << endl;
                        cin>>eleccion;
                        return eleccion;

                                }


void quitarStockBebidas (Productos stockBebidas[]) {
    int cantidad=0,bebidas=0;

                            do{
                           cout << "==============================================" << endl;
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

                            if (bebidas==10){
                                break;
                            }
                            cout<<"Que cantidad de stock quiere quitar: ";
                            cin>>cantidad;

                            stockBebidas[bebidas-1].Stock-=cantidad;
                            cout<<"Ahora el stock disponible de "<<stockBebidas[bebidas-1].Nombre<<" es: "<<stockBebidas[bebidas-1].Stock<<endl;
                            }while(bebidas!=10);
                            }
void quitarStockAlimentos(Productos stockAlimentos[]){
 int cantidad=0,Alimentos=0;

                            do{
                             cout << "=========================================================================" << endl;
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

                             if (Alimentos==10){
                                break;
                            }
                            cout<<"Que cantidad de stock quiere quitar: ";
                            cin>>cantidad;

                            stockAlimentos[Alimentos-1].Stock-=cantidad;
                            cout<<"Ahora el stock disponible de "<<stockAlimentos[Alimentos-1].Nombre<<" es: "<<stockAlimentos[Alimentos-1].Stock<<endl;
                            }while(Alimentos!=10);
                            }


void quitarStockProductosLimpieza(Productos stockProductosLimpieza[]){
 int cantidad=0,ProductosLimpieza=0;

                            do{
                            cout << "======================================================" << endl;
                            cout << "            MENU DE PRODUCTOS DE LIMPIEZA             " << endl;
                            cout << "======================================================" << endl;
                            cout << "| 1. Lavandina   | 2. Detergente | 3. Jabon          |" << endl;
                            cout << "| 4. Cif         | 5. Blem       | 6. Flit           |" << endl;
                            cout << "| 7. Esponja     | 8. Escobillón | 9. Palo de escoba |" << endl;
                            cout << "======================================================" << endl;
                            cout << "| 10. Salir                                          |" << endl;
                            cout << "======================================================" << endl;
                            cout << "Eleccion: ";
                            cin>>ProductosLimpieza;
                             if (ProductosLimpieza==10){
                                break;
                            }
                            cout<<"Que cantidad de stock quiere quitar: ";
                            cin>>cantidad;

                            stockProductosLimpieza[ProductosLimpieza-1].Stock-=cantidad;
                            cout<<"Ahora el stock disponible de "<<stockProductosLimpieza[ProductosLimpieza-1].Nombre<<" es: "<<stockProductosLimpieza[ProductosLimpieza-1].Stock<<endl;
                            }while(ProductosLimpieza!=10);
                            }





