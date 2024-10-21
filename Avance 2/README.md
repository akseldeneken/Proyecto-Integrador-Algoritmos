## Avance 2 - Tienda de Ropa "Byak Clothing" - Gestión de Inventario
Descripción del Proyecto
Este proyecto está orientado a la gestión del inventario y clientes de la tienda de ropa "Byak Clothing". El sistema permite visualizar, ordenar, buscar y agregar productos, además de gestionar los clientes mediante un Árbol Binario de Búsqueda (BST). Se implementaron varios algoritmos como Merge Sort y Búsqueda Binaria para las operaciones con productos, y el uso de un BST para el manejo de clientes.

# Funcionalidades
Gestión de Productos:
La funcionalidad de visualización del inventario muestra una lista de productos con su nombre, precio y cantidad disponible. Los productos pueden ser ordenados por precio, nombre o stock, utilizando el algoritmo Merge Sort. Además, se implementó una búsqueda de productos por precio mediante Búsqueda Binaria. También se incluye una opción para agregar nuevos productos al inventario.

Gestión de Clientes:
Los clientes se almacenan y muestran en orden alfabético de acuerdo con sus nombres utilizando un Árbol Binario de Búsqueda (BST). El sistema permite buscar clientes por nombre o ID. Asimismo, se pueden agregar nuevos clientes o eliminar clientes existentes del sistema.

# Estructuras y Algoritmos Usados
Merge Sort
El Merge Sort es un algoritmo de ordenamiento eficiente con una complejidad de tiempo de O(n log n). Se seleccionó este algoritmo por su estabilidad y buen rendimiento, incluso en grandes volúmenes de datos. En este caso, se utiliza para ordenar los productos por diferentes atributos como precio, nombre o cantidad en stock.

# Búsqueda Binaria
La Búsqueda Binaria tiene una complejidad de O(log n), lo que la convierte en una opción eficiente para buscar elementos en listas previamente ordenadas. En este proyecto, se utiliza para buscar productos por precio.

# Árbol Binario de Búsqueda (BST)
El BST (Binary Search Tree) es una estructura de datos que organiza los clientes por sus nombres, lo que permite mantenerlos ordenados de manera natural. Este árbol es especialmente útil para búsquedas, inserciones y eliminaciones, todas con una complejidad promedio de O(log n), en el caso de un árbol balanceado.

El BST permite realizar las siguientes operaciones de manera eficiente. La inserción de clientes se realiza comparando los nombres lexicográficamente; si el nombre es menor, se inserta en el subárbol izquierdo, y si es mayor, en el subárbol derecho. Para buscar un cliente, se utilizan comparaciones lexicográficas para moverse eficientemente por el árbol. La eliminación en un BST requiere una gestión más compleja, ya que depende de si el nodo a eliminar tiene 0, 1 o 2 hijos. Este proceso asegura que el árbol mantenga sus propiedades.

Se eligió el uso de un BST en la gestión de clientes debido a su capacidad para ofrecer tiempos de búsqueda, inserción y eliminación más eficientes que otras estructuras, como listas simples, especialmente cuando el número de clientes crece.

# Consideraciones de Complejidad
La inserción en el BST tiene una complejidad promedio de O(log n), dado que el árbol se mantiene balanceado en promedio. La búsqueda en el BST también tiene una complejidad promedio de O(log n), aprovechando la estructura del árbol. La eliminación en el BST sigue el mismo patrón, con una complejidad promedio de O(log n). En el caso de un árbol desbalanceado (donde todas las inserciones se hagan en una única rama), la complejidad podría aumentar a O(n), pero este riesgo se mitiga con una inserción de nombres de clientes de manera aleatoria.

# Conclusión
El avance 2 del proyecto permite gestionar de manera eficiente tanto los productos como los clientes de la tienda "Byak Clothing". La elección de estructuras de datos y algoritmos asegura que las operaciones clave puedan realizarse con eficiencia, incluso cuando el volumen de datos crezca. En futuros avances, se podría considerar mejorar la estructura del BST mediante un árbol auto-balanceado, como un AVL o un Red-Black Tree, para garantizar tiempos de operación más consistentes.

