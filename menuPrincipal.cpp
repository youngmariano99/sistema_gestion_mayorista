#include <iostream>
using namespace std;
                //MENU DE ELECCIÓN DE MENU PRINCIPAL CLIENTE Ó TRABAJADOR
                int menuPrincipal () {
                            int usuario;
                            cout << "************************************************" << endl;
                            cout << " *Sistema de gestion de compras e inventarios*" <<endl;
                            cout << "          *  Seleccione un numero   *" << endl;
                            cout << "*  1 (Si sos Cliente) o 2 (Si sos Trabajador) *" << endl;
                            cout << "       *  3 si desea salir del programa  *     " << endl;
                            cout << "************************************************" << endl;
                            cout<<"Eleccion: ";
                            cin >> usuario;

                            return usuario;
                                }

                //MENU PRINCIPAL DEL CLIENTE

                void menuClientePrincipal() {
                            string nombreCliente;
                            cout << "*******************************************" << endl;
                            cout << "*              BIENVENIDO                 *" << endl;
                            cout << "*******************************************" << endl;
                            cout << "Ingrese su nombre: ";
                            cin >> nombreCliente;
                            cout << "\nHola, " << nombreCliente << "! Bienvenido/a al sistema de compras." << endl;
                            cout << "-------------------------------------------" << endl;
                            cout << "Que desea hacer?" << endl;
                                            }

                //MENU ELECCIÓN DE PRODUCTO DEL CLIENTE
                int menuClienteSeleccionProducto(){
                        int comprasproductos;
                        cout << "*************************************" << endl;
                        cout << "*        MENU PRINCIPAL             *" << endl;
                        cout << "*************************************" << endl;
                        cout << "*  1. Comprar Bebidas               *" << endl;
                        cout << "*  2. Comprar Alimentos             *" << endl;
                        cout << "*  3. Comprar Productos de limpieza *" << endl;
                        cout << "*  4. Mostrar monto total           *" << endl;
                        cout << "*  5. Contacto                      *" << endl;
                        cout << "*  6. Salir                         *" << endl;
                        cout << "*************************************" << endl;
                        cout<<  "Eleccion: ";
                        cin>>comprasproductos;
                        cout << "\n\n";
                        return comprasproductos;
                        }
                //MENU PRINCIPAL TRABAJADOR
                 void menuTrabajadorPrincipal(){
                        cout << "\n\n";
                        cout << "========================================" << endl;
                        cout << "              ACCESO PERMITIDO          " << endl;
                        cout << "========================================" << endl;
                        cout << "            Usted es Trabajador         " << endl;
                        cout << "========================================" << endl;
                        cout << "Que desea hacer?                       " << endl;
                    }
                //MENU ELECCIÓN DEL TRABAJADOR
                int menuTrabajadorEleccion(){
                        int stockproductos;
                        cout << "*****************************************" << endl;
                        cout << "* 1. Agregar stock                      *" << endl;
                        cout << "* 2. Quitar stock                       *" << endl;
                        cout << "* 3. Salir                              *" << endl;
                        cout << "*****************************************" << endl;
                        cout << "Eleccion: ";
                        cin>>stockproductos;
                        cout << "\n\n";
                        return stockproductos;

                }
