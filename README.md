# 📦 Sistema de Gestión de Stock y Compras - Comercio Mayorista

### 📌 Proyecto de Parcial - Programación I

Este proyecto es una **aplicación de consola en C++** desarrollada en **Code::Blocks** como parte del **parcial de la materia Programación I** en la **Tecnicatura Universitaria en Programación** de la **UTN - Facultad Regional Trenque Lauquen, Extensión Aulica Coronel Pringles**.

## 🚀 Descripción del Proyecto

Es un **sistema de gestión de stock y compras** para un comercio mayorista, que permite:
- **Gestión de stock** para trabajadores (**agregar/quitar productos**).
- **Sistema de compras** para clientes (**selección de productos y cálculo de monto total**).
- **Menús interactivos** diseñados con funciones y estructuras en C++.
- **Almacenamiento de datos mediante arrays**, sin necesidad de una base de datos.
- **Acceso con contraseña** para empleados.

---

## 🛠️ Instalación y Ejecución

1 **Clona el repositorio**  

git clone https://github.com/tuUsuario/nombreDelRepositorio.git

2 Abre el proyecto en Code::Blocks
- Ejecuta Code::Blocks y abre el archivo principal del proyecto (main.cpp).
3 Compila y ejecuta el programa
- Compila el código usando GNU GCC Compiler dentro de Code::Blocks.
- Ejecuta el programa desde la consola.

📜 Instrucciones de Uso

🔹 Inicio del Programa
- Al abrir el programa, verás un Menú principal donde podrás elegir:
- 1 Cliente
- 2 Trabajador
- 3 Salir
  
🔹 Modo Cliente
- Ingresa tu nombre y presiona Enter.
- Puedes comprar productos dentro de las categorías:
- Bebidas
- Alimentos
- Productos de limpieza
- Ver el total a pagar o consultar contactos del comercio.
- Métodos de pago disponibles:
- Efectivo
- Débito
- Tarjeta de crédito en cuotas (3 o 6 cuotas)

  
🔹 Modo Trabajador
- Deberás ingresar la contraseña (12341 por defecto).
- Opciones disponibles:
- Agregar stock
- Quitar stock
- Revisar categorías de productos
- El sistema impide stock negativo y errores en cantidades.

🏗️ Tecnologías Utilizadas
🖥️ Lenguaje: C++.
🛠️ Entorno de desarrollo: Code::Blocks.
📌 Estructuras de datos: Arrays, Funciones y Estructuras.

📂 Estructura del Proyecto

```
📂 Proyecto
├── 📁 src
│   ├── 📄 compraProductos.cpp
│   ├── 📄 main.cpp
│   ├── 📄 manejoStock.cpp
│   ├── 📄 menuPrincipal.cpp
│   ├── 📄 menuProductos.cpp
│   ├── 📄 mostrarContactos.cpp
│   ├── 📄 pagoFinal.cpp
│   ├── 📄 promedioEdad.cpp
├── 📁 include
│   ├── 📄 compraProductos.h
│   ├── 📄 Estructuras.h
│   ├── 📄 manejoStock.h
│   ├── 📄 menuPrincipal.h
│   ├── 📄 mostrarContactos.h
│   ├── 📄 pagoFinal.h
├── 📁 bin
```

👥 Autores
Proyecto desarrollado por:
- Veyries Benjamín
- Quintanilla Eber
- Young Mariano

📜 Licencia
Este proyecto es de uso educativo. Puedes usarlo y modificarlo con fines de aprendizaje. 🚀
Si necesitas ajustes en el README, dime cómo quieres personalizarlo y lo adaptamos. ¡Éxito con tu repositorio! 😃





