#ifndef MANEJOSTOCK_H_INCLUDED
#define MANEJOSTOCK_H_INCLUDED

int menuAgregarStock();

void agregarStockGaseosa(Productos stockBebidas[]);
void agregarStockAlimentos(Productos stockAlimentos[]);
void agregarStockProductosLimpieza(Productos stockProductosLimpieza[]);

int menuQuitarStock();
void quitarStockBebidas (Productos stockBebidas[]);
void quitarStockAlimentos(Productos stockAlimentos[]);
void quitarStockProductosLimpieza(Productos stockProductosLimpieza[]);

#endif // MANEJOSTOCK_H_INCLUDED
