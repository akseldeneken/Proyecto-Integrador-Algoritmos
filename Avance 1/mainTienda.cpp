/*Aksel Deneken A01711966*/

#include <iostream>
#include <string>
#include <vector>
#include "productos.h"
#include "GestionTienda.h"
#include <limits>

using namespace std;



 // Preguntar por qué atributo ordenar
void menu(){ 
cout << "\nElige una opción\n";
cout << "1. Ordenar Productos Por Precio\n";
cout << "2. Ordenar Productos Por Nombre\n";
cout << "3. Ordenar Productos Por Cantidad En Stock\n";
cout << "4. Buscar Producto por Precio\n";
cout << "5. Añadir Producto\n";
cout << "6. Salir\n";
}


int main() {

    Tienda tienda;
    //Inventario por default
    vector<Producto> Productos = { 
    {299.99, "Playera Básica", 50},
    {499.50, "Pantalón Negro", 30},
    {749.99, "Chaqueta de Cuero", 15},
    {349.90, "Camisa Azul", 40},
    {199.99, "Gorra Gris", 25},
    {549.95, "Sudadera Negra", 20},
    {159.99, "Cinturón Verde", 60},
    {449.99, "Blusa Blanca", 35},
    {399.90, "Vestido Rojo", 10},
    {259.90, "Shorts Azules", 45},
    {299.99, "Calcetas Grises", 70},
    {699.50, "Abrigo Negro", 8},
    {129.99, "Pañuelo Blanco", 100},
    {799.99, "Chamarra Azul", 12},
    {349.99, "Falda Negra", 25},
    {179.90, "Bufanda Verde", 50},
    {599.99, "Suéter Gris", 18},
    {399.95, "Zapatos Rojos", 22},
    {749.90, "Chaleco Azul", 15},
    {129.90, "Guantes Negros", 35}
};

    int opcion(0);
    int resultado(0);
    float precioNuevo; 
    int stockNuevo;
    string nombreNuevo;

    // Mostrar el inventario sin ordenar
    cout << "Inventario original:\n";
    tienda.mostrarInventario(Productos);

   
    // Ordenar según la opción seleccionada
    string atributo;
    while (opcion != 6){
        menu();
        cout << "Elige una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                atributo = "precio";
                tienda.mergeSort(Productos, 0, Productos.size() - 1, atributo);
                 cout << "\nInventario ordenado:\n";
                tienda.mostrarInventario(Productos);
                break;


            case 2:
                atributo = "nombre";
                tienda.mergeSort(Productos, 0, Productos.size() - 1, atributo);
                 cout << "\nInventario ordenado:\n";
                tienda.mostrarInventario(Productos);
                break;


            case 3:
                atributo = "stock";
                tienda.mergeSort(Productos, 0, Productos.size() - 1, atributo);
                 cout << "\nInventario ordenado:\n";
                tienda.mostrarInventario(Productos);
                break;


            case 4:
                float precioBuscado;
                cout << "\nIngrese el precio del producto a buscar: ";
                cin >> precioBuscado;
                resultado = tienda.busquedaBinaria(Productos, precioBuscado);
                if (resultado != -1) {
                    cout << "Producto encontrado: " << Productos[resultado].getDatos() << endl;
                } else {
                    cout << "Producto con precio $" << precioBuscado << " no encontrado.\n";
                }
                break;


            case 5:
                cout << "\nIngresa el nombre del nuevo producto: ";
                cin.ignore(); getline(cin, nombreNuevo);
                cout << "\nIngresa el precio del nuevo producto: ";
                cin >> precioNuevo;
                cout << "\nIngresa la cantidad de stock del nuevo producto: ";
                cin >> stockNuevo;
                tienda.add(Productos,precioNuevo,nombreNuevo,stockNuevo);
                tienda.mostrarInventario(Productos);
                break;


            case 6:
                cout << "Cerrando Programa" << endl;
                break;


            default:
             cout << "Opción Inválida" << endl;
             break;
    
        }
    }
    

    return 0;
}