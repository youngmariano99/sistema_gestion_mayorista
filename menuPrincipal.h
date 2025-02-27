#ifndef MENUPRINCIPAL_H_INCLUDED
#define MENUPRINCIPAL_H_INCLUDED

int menuPrincipal ();

//Menu principal del cliente y menu donde el cliente selecciona el producto
void menuClientePrincipal();
int menuClienteSeleccionProducto();

//Menú del trabajadpor princpial y donde el trabajador elige que quiere hacer con el stock
void menuTrabajadorPrincipal();
int menuTrabajadorEleccion();
//menú donde el cliente elije que tipo de producto quiere de cada categoria (Bebidas, Alimentos, Productos limpieza)
int menuGaseosa();
int menuAlimentos();
int menuProductosLimpieza();
#endif // MENU_H_INCLUDED
