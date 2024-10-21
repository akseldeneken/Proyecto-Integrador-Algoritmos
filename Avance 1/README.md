Tienda de Ropa - Gestión de Inventario
Este proyecto implementa un sistema de gestión de inventario para una tienda de ropa llamada "Byak Clothing". El sistema permite visualizar los productos disponibles, agregar nuevos productos y realizar búsquedas en el inventario por nombre, precio y stock. Está diseñado en C++ y utiliza principios de programación orientada a objetos.

Archivos del Proyecto
mainTienda.cpp: Contiene la lógica principal del programa, como el menú de interacción con el usuario, las operaciones de búsqueda, y la integración con las clases Tienda y Producto.
GestionTienda.h: Define la clase Tienda, que gestiona el inventario y las operaciones de ordenamiento y búsqueda de productos. Utiliza algoritmos como Merge Sort para ordenar los productos y Búsqueda Binaria para localizar elementos específicos.
productos.h: Contiene la definición de la clase Producto, que almacena la información de cada producto en la tienda, incluyendo nombre, precio y cantidad en stock.
Funcionalidades Principales
1. Mostrar Inventario
Permite visualizar todos los productos disponibles en la tienda, incluyendo su nombre, precio y cantidad en stock.

2. Agregar Productos
Los usuarios pueden agregar nuevos productos al inventario, especificando el nombre, precio y cantidad en stock.

3. Ordenamiento de Productos
Se implementa un algoritmo Merge Sort para ordenar los productos de la tienda según distintos atributos: precio, nombre o stock. El algoritmo Merge Sort fue elegido debido a su complejidad de O(n log n), lo que lo hace eficiente para manejar grandes volúmenes de datos.

4. Búsqueda de Productos
Para optimizar la búsqueda de productos por precio, se implementa una Búsqueda Binaria, que tiene una complejidad de O(log n). Esto permite localizar productos rápidamente en un inventario previamente ordenado.

Complejidad de los Algoritmos
Merge Sort: Utilizado para ordenar productos por nombre, precio o stock. Este algoritmo divide el arreglo en dos mitades, las ordena recursivamente y luego las combina. Su complejidad es O(n log n), lo que lo hace más eficiente que otros algoritmos de ordenamiento como el Bubble Sort o Insertion Sort para grandes conjuntos de datos.

Búsqueda Binaria: Al buscar productos por precio, este algoritmo reduce a la mitad el espacio de búsqueda en cada paso, logrando una complejidad de O(log n). Funciona en listas previamente ordenadas, lo que lo hace ideal en combinación con el Merge Sort.
