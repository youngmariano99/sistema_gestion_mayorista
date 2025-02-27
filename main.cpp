#include <iostream>
#include <iomanip>
#include "pagoFinal.h"
#include "menuPrincipal.h"
#include "mostrarContactos.h"
#include "Estructuras.h"
#include "compraProductos.h"
#include "manejoStock.h"
/*INCLUIMOS ESTA BIBLIOTECA(#include <iomanip>) PARA PODER AGREGAR long double QUE NOS PERMITE AGREGARLE GRAN CANTIDAD DE DECIMALES A LOS PRECIOS
Y QUE EVITAR QUE EL PROGRAMA REONDEE CIERTOS MONTOS LO CUALES NOS GENERARÁ PERDIDAS*/
using namespace std;


int main (){ //INICIO DEL PROGRAMA

//VARIABLES INGRESO DEL MENÚ DEL TRABAJADOR
int clave=0,password=12341, eleccionDelUsuario=0;



//NUEVAS VARIABLES PRODUCTOS
Productos stockBebidas[]={

    {"Fanta 2.25l x6",16999,200},
    {"Coca-Cola Original 2.25L x6",16999,200},
    {"Sprite 2.25L x6",16999,200},
    {"Fernet 1L x6",89640,200},
    {"Americano Gancia 450ml",22902,200},
    {"Vino Trumpeter malbec 750ml x6",43663,200},
    {"Agua Serra de los padres 1.5L x6",5496,200},
    {"Agua Saborizada H2o 1,5L x6",11400,200},
    {"Soda Sierra de los padres 1.75L x6",11900,200}

};

Productos stockAlimentos[]={
    {"Arroz Gallo Oro Seleccion 1Kg x6",18990,200},
    {"Pasta De Fideos Mostachol Pastasole 500gr x6 ",5884,200},
    {"Giacomo Capelettini Queso Y Jamon 500 Grs x4",20434,200},
    {"Galletitas Dulce Oreo Relleno Vainilla x12",48801,200},
    {"Galletitas Surtidas Bagley x5",25698,200},
    {"Galletitas Opera Chicas X Caja 56 Unidades",47107,200},
    {"Caja De Super Hamburguesas Paty X40",65000,200},
    {"Baston De Merluza Cong Caja 6 Kg",34140,200},
    {"Patitas De Pollo Rellenas Caja 12x400g",44427,200}
};

Productos stockProductosLimpieza[]={

    {"Lavandina Mpclasica 1 Lt Ayudin  x6",12968,200},
    {"Detergente Limon Multi 750 Ml Magistral x6",40122,200},
    {"Dove Jabon En Barra Original 90g x6",7999,200},
    {"Cif Crema Limpiador Multiuso x12",23395,200},
    {"Lustramueble Lavanda 360Cc Blem x6",28744,200},
    {"Mata Moscas Y Mosquitos Raid x6",43989,200},
    {"Esponja Cocina - 20 Paquetes X 3u",35143,200},
    {"Escobillon Escoba Interior x6",21800,200},
    {"Cabo Madera Rosca Universal 1.20m",18000,200}

};

//VARIABLES CONTACTO
string contactos[2][3];{
contactos [0][0]= "Mariano";
contactos [0][1]= "Benjamin";
contactos [0][2]= "Eber";
contactos [1][0]= "2923511691";
contactos [1][1]= "2915080508";
contactos [1][2]= "2923504355";
}

do{
do{

int opcionSeleccionada=0,Eliminarproductos=0;
int eleccionBebida=0,eleccionAlimentos=0,eleccionProductosLimpieza=0;
int compraTotal=0;
long double montoFinal=0;

//LLAMADA A LA FUNCIÓN DONDE EL USUARIO ELIGIRA SI ES CLIENTE, TRABAJADOR O SI QUIERE SALIR DEL PROGRAMA.
eleccionDelUsuario=menuPrincipal();
if (opcionSeleccionada==3){
    break;
}

if (eleccionDelUsuario==1) { ///INICIO DEL MENÚ DE CLIENTE



            //LLAMADA A LA FUNCIÓN QUE NOS MUESTRA EL MENÚ PRINCIPAL DEL CLIENTE
            menuClientePrincipal();
do { ///INICIO DEL DO WHILE MENU CLIENTE
            //LLAMA A LA FUNCIÓN DONDE EL CLIENTE SELECCIONA QUE QUIERE HACER "COMPRAR, MOSTRAR TOTAL, VER EL CONTACTO O SALIR.
            opcionSeleccionada = menuClienteSeleccionProducto();


    switch(opcionSeleccionada){ ///INICIO DEL MENÚ DE COMPRA


                            case 1: //CASO 1 DEL MENÚ COMPRA "BEBIDAS"
                            cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) {
                            cout << left << setw(45) << stockBebidas[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockBebidas[i].Precio
                            << right << setw(10) << stockBebidas[i].Stock << endl;
                                                                            }

                            while (eleccionBebida!=10) { ///INICIO WHILE PARA BEBIDAS

                            //LLAMADA A LA FUNCIÓN PARA ELEGIR LA BEBIDA
                            eleccionBebida=menuGaseosa();
                            if (eleccionBebida==10){
                                break;
                            }
                            int cantidad=0;
                            cout<<"Ingrese la cantidad que desea comprar: ";
                            cin>>cantidad;
                            cout << "\n\n";
                            //LLAMADA A LA FUNCION DONDE SE PRODUCE LA COMPRA
                            compraGaseosa(stockBebidas[eleccionBebida-1],cantidad,compraTotal);


                                            }///FIN DEL WHILE DE GASEOSA
                             break;
                            case 2: //CASO 2 DEL MENÚ COMPRA "ALIMENTOS"
                             cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) {
                            cout << left << setw(45) << stockAlimentos[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockAlimentos[i].Precio
                            << right << setw(10) << stockAlimentos[i].Stock << endl;
                                                                            }

                            while (eleccionAlimentos!=10) { ///INICIO WHILE PARA ALIMENTOS

                            //Este es el menu para elegir la bebidas
                            eleccionAlimentos=menuAlimentos();
                            if (eleccionAlimentos==10){
                                break;
                            }
                            int cantidad=0;
                            cout<<"Ingrese la cantidad que desea comprar: ";
                            cin>>cantidad;
                            compraAlimentos(stockAlimentos[eleccionAlimentos-1],cantidad,compraTotal);

                            }///FIN DEL WHILE DE ALIMENTOS
                            break;
                            case 3: //CASO 3 DEL MENÚ COMPRA "PRODUCTOS DE LIMPIEZA"
                             cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) {
                            cout << left << setw(45) << stockProductosLimpieza[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockProductosLimpieza[i].Precio
                            << right << setw(10) << stockProductosLimpieza[i].Stock << endl;
                                                                            }

                            while (eleccionProductosLimpieza!=10) { ///INICIO WHILE PARA PRODUCTOS LIMPIEZA

                            //Este es el menu para elegir la bebidas
                            eleccionProductosLimpieza=menuProductosLimpieza();
                            if (eleccionProductosLimpieza==10){
                                break;
                            }
                            int cantidad=0;
                            cout<<"Ingrese la cantidad que desea comprar: ";
                            cin>>cantidad;
                            compraAlimentos(stockProductosLimpieza[eleccionProductosLimpieza-1],cantidad,compraTotal);

                            } ///FIN DEL WHILE DE PRODUCTOS LIMPIEZA
                            break;
                            case 4:
                            //LLAMADA DE LA FUNCION PARA ELEGIR METODO DE PAGO Y MOSTRAR EL MONTO FINAL CORRESPONDIENTE
                            pagoFinal(compraTotal);
                            break;
                            case 5:
                            //LLAMADA DE LA FUNCION PARA MOSTRAR LOS CONTACTOS
                            mostrarContactos(contactos);
                            case 6:
                            break;
                            default:
                            cout<<"Numero Incorrecto"<<endl;

    } ///FINAL DEL MENU DE COMPRA
} while (opcionSeleccionada!=6); ///FINAL DEL DO WHILE DEL MENU CLIENTE
} ///FINAL DEL MENÚ DE CLIENTE
}while (eleccionDelUsuario==1); ///FINAL DEL DO WHILE DEL MENU DEL CLIENTE

       if (eleccionDelUsuario==2){ ///INICIO DEL MENÚ DEL EMPLEADO
        //VARAIBLE DEL MENÚ DEL TRABAJADOR
       int eleccionTrabajador=0,eleccionProductoAgregarStock=0;

        //FOR PARA INGRESAR LA CLAVE
        for (int i=0;i<3;i++) {///INICIO FOR DE CLAVE
        cout << "Ingrese su clave: ";
        cin >> clave;
        if(clave == password){ ///INICIO IF CLAVE CORRECTA

        menuTrabajadorPrincipal();
        break;
        }/// FIN IF CLAVE CORRECTA
                    } ///FIN FOR CLAVE
        if (clave!=password) { ///INICIO IF CLAVE INCORRECTA
        cout << "La clave no es correcta"<<endl;
         break;

         }  ///FINAL IF CLAVE INCORRECTA

         //LLAMADA DE LA FUNCIÓN PARA LA ELECCIÓN DE LAS OPCIONES DEL TRABAJADOR
         eleccionTrabajador=menuTrabajadorEleccion();

        switch(eleccionTrabajador){ ///INICIO SWTICH MENU DEL TRABAJADOR
        case 1: {
        //LLAMADA A LA FUNCIÓN DONDE EL TRABAJADOR ELEGIRA EL PRODUCTO QUE QUIERE AGREGARLE STOCK
        eleccionProductoAgregarStock=menuAgregarStock();

        if (eleccionProductoAgregarStock==1)  { ///INICIO IF PARA AGREGAR STOCK A BEBIDAS
                            cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) { ///INICIO FOR PARA MOSTRAR PRODUCTOS
                            cout << left << setw(45) << stockBebidas[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockBebidas[i].Precio
                            << right << setw(10) << stockBebidas[i].Stock << endl;
                                                                            } ///FIN FOR PARA MOSTRAR PRODUCTOS
                             //LLAMADA A LA FUNCIÓN PARA AGREGAR STOCK
                            agregarStockGaseosa(stockBebidas);

        } ///FIN DEL IF PARA AGREGAR STOCK A BEBIDAS
        if (eleccionProductoAgregarStock==2)  { ///INICIO IF PARA AGREGAR STOCK A ALIMENTOS
                            cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) { ///INICIO FOR PARA MOSTRAR PRODUCTOS
                            cout << left << setw(45) << stockAlimentos[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockAlimentos[i].Precio
                            << right << setw(10) << stockAlimentos[i].Stock << endl;
                                                                            } ///FIN FOR PARA MOSTRAR PRODUCTOS
                            //LLAMADA A LA FUNCIÓN PARA AGREGAR STOCK
                            agregarStockAlimentos(stockAlimentos);

        } ///FIN DEL IF PARA AGREGAR STOCK A ALIMENTOS
        if (eleccionProductoAgregarStock==3)  { ///INICIO IF PARA AGREGAR STOCK A PRODUCTOS DE LIMPIEZA
                            cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) {///INICIO FOR PARA MOSTRAR PRODUCTOS
                            cout << left << setw(45) << stockProductosLimpieza[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockProductosLimpieza[i].Precio
                            << right << setw(10) << stockProductosLimpieza[i].Stock << endl;
                                                                            }///FIN FOR PARA MOSTRAR PRODUCTOS
                            //LLAMADA A LA FUNCIÓN PARA AGREGAR STOCK
                            agregarStockProductosLimpieza(stockProductosLimpieza);

        } ///FIN DEL IF PARA AGREGAR STOCK A PRODUCTOS DE LIMPIEA

        }
        case 2:{
        int eleccionProductoQuitarStock=0;
        eleccionProductoQuitarStock=menuQuitarStock();

                            if (eleccionProductoQuitarStock==1)  { ///INICIO IF PARA QUITAR STOCK A BEBIDAS
                            cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) { ///INICIO FOR PARA MOSTRAR PRODUCTOS
                            cout << left << setw(45) << stockBebidas[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockBebidas[i].Precio
                            << right << setw(10) << stockBebidas[i].Stock << endl;
                                                                            } ///FIN FOR PARA MOSTRAR PRODUCTOS
                             //LLAMADA A LA FUNCIÓN PARA QUITAR STOCK
                            quitarStockBebidas(stockBebidas);

                            } ///FIN DEL IF PARA QUITAR STOCK A BEBIDAS
                            if (eleccionProductoQuitarStock==2)  { ///INICIO IF PARA QUITAR STOCK A ALIMENTOS
                            cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) { ///INICIO FOR PARA MOSTRAR PRODUCTOS
                            cout << left << setw(45) << stockAlimentos[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockAlimentos[i].Precio
                            << right << setw(10) << stockAlimentos[i].Stock << endl;
                                                                            } ///FIN FOR PARA MOSTRAR PRODUCTOS
                             //LLAMADA A LA FUNCIÓN PARA QUITAR STOCK
                            quitarStockAlimentos(stockAlimentos);

                            } ///FIN DEL IF PARA QUITAR STOCK A ALIMENTOS
                            if (eleccionProductoQuitarStock==3)  {  ///INICIO IF PARA QUITAR STOCK A PRODUCTOS DE LIMPIEZA
                            cout << left << setw(45) << "Producto" << setw(12) << "Precio" << setw(10) << "Stock" << endl;
                            cout << "---------------------------------------------------------------" << endl;

                            for (int i = 0; i < 9; i++) { ///INICIO FOR PARA MOSTRAR PRODUCTOS
                            cout << left << setw(45) << stockProductosLimpieza[i].Nombre
                            << right << setw(1) << "$" << setw(5) << stockProductosLimpieza[i].Precio
                            << right << setw(10) << stockProductosLimpieza[i].Stock << endl;
                                                                            }///FIN FOR PARA MOSTRAR PRODUCTOS
                                 //LLAMADA A LA FUNCIÓN PARA QUITAR STOCK
                                quitarStockProductosLimpieza(stockProductosLimpieza);


                            } ///FIN DEL IF PARA QUITAR STOCK A PRODUCTOS DE LIMPIEA
            }
            case 3: {
                break;

            }
            default: {
            cout<<"Numero Incorrecto"<<endl;

            }


        }///FINAL SWTICH MENU DEL TRABAJADOR
            } ///FINAL DEL MENÚ DEL EMPLEADO

            }while (eleccionDelUsuario==2);
}

