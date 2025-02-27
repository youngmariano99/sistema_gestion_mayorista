#include "Estructuras.h"
#include <iostream>
using namespace std;



 void compraGaseosa(Productos& stockBebidas,int cantidad,int& compraTotal) {

 if(stockBebidas.Stock>=cantidad) {

    stockBebidas.Stock -= cantidad;
    compraTotal+=stockBebidas.Precio*cantidad;
    cout<<"La cantidada de stock del producto "<<stockBebidas.Nombre<<" es "<<stockBebidas.Stock<<endl;
    cout<<"La compra acumulada es de $"<<compraTotal<<endl;


 }
 else {
    cout<<"Disculpe, el stock solicitado no esta disponible. El Stock disponible es: "<<stockBebidas.Stock<<endl;
 }
 }

 void compraAlimentos(Productos& stockAlimentos,int cantidad,int& compraTotal) {

 if(stockAlimentos.Stock>=cantidad) {

    stockAlimentos.Stock -= cantidad;
    compraTotal+=stockAlimentos.Precio*cantidad;
    cout<<"La cantidada de stock del producto "<<stockAlimentos.Nombre<<" es "<<stockAlimentos.Stock<<endl;
    cout<<"La compra acumulada es de $"<<compraTotal<<endl;

 }
 else {
    cout<<"Disculpe, el stock solicitado no esta disponible. El Stock disponible es: "<<stockAlimentos.Stock<<endl;
 }
 }

 void compraProductosLimpieza(Productos& stockProductosLimpieza,int cantidad,int& compraTotal) {

 if(stockProductosLimpieza.Stock>=cantidad) {

    stockProductosLimpieza.Stock -= cantidad;
    compraTotal+=stockProductosLimpieza.Precio*cantidad;
    cout<<"La cantidada de stock del producto "<<stockProductosLimpieza.Nombre<<" es "<<stockProductosLimpieza.Stock<<endl;
    cout<<"La compra acumulada es de $"<<compraTotal<<endl;

 }
 else {
    cout<<"Disculpe, el stock solicitado no esta disponible. El Stock disponible es: "<<stockProductosLimpieza.Stock<<endl;
 }
 }
