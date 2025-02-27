#include <iomanip>
#include <iostream>
using namespace std;


                void pagoFinal(int compraTotal) {
                    long double metodoPago=0,cuotas=0,valorCuotas;

                            cout << "========================================" << endl;
                            cout << "         SELECCIONE SU METODO DE PAGO   " << endl;
                            cout << "========================================" << endl;
                            cout << "| Monto total: $"<<compraTotal<<"      |" << endl;
                            cout << "| 1. Efectivo (10% de descuento)       |" << endl;
                            cout << "| 2. Debito (recargo 10%)              |" << endl;
                            cout << "| 3. Tarjeta de credito en cuotas      |" << endl;
                            cout << "|    - 3 cuotas (15% recargo)          |" << endl;
                            cout << "|    - 6 cuotas (25% recargo)          |" << endl;
                            cout << "========================================" << endl;
                            cout << "| 4. Salir                             |" << endl;
                            cout << "========================================" << endl;
                            cout << "Eleccion: ";
                            cin>>metodoPago;
                            cout << "\n\n";
                            cout << fixed << setprecision(15);
                            if(metodoPago==1){ //INICIO DEL IF METODO PAGO 1
                            cout<<"Efectivo"<<endl;

                            compraTotal=compraTotal-(compraTotal*0.10);
                            cout<<"El monto a pagar es: "<<compraTotal<<endl;
                            } // FIN DEL IF METODO PAGO 1
                                              else if(metodoPago==2) { //INICIO DEL ELSE IF METODO PAGO 2
                                              cout<<"Debito"<<endl;
                                              compraTotal=compraTotal+(compraTotal*0.10);
                                              cout<<"El monto a pagar es: "<<compraTotal<<endl;
                                                                      } //FIN DEL ELSE IF METODO PAGO 2
                                                                      else if(metodoPago==3) { //INICIO DEL ELSE IF METODO PAGO 3
                                                                      cout<<"Credito"<<endl;
                                                                      cout<<"1 para hacerlo en 3 cuotas y 2 para hacerlo en 6 cuotas"<<endl;
                                                                      cin>>cuotas;

                                                                             if (cuotas==1) { //INICIO DEL IF 3 CUOTAS
                                                                             compraTotal=compraTotal*1.15;
                                                                             valorCuotas=compraTotal/3;
                                                                             cout<<"El valor de cada cuota es: "<<valorCuotas<<endl;
                                                                             } //FIN DEL IF 3 CUOTAS

                                                                                else if(cuotas==2) { //INICIO DEL IF 6 CUOTAS
                                                                                compraTotal=compraTotal+(compraTotal*0.25);
                                                                                valorCuotas=compraTotal/6;
                                                                                cout<<"El valor de cada cuota es: "<<valorCuotas<<endl;
                                                                                } //FIN DEL IF 6 CUOTAS
                                                                                              } //FIN DEL ELSE IF METODO PAGO 3

                                                                                              }
