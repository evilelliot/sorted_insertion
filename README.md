# sorted_insert

Este proyecto consiste en una implementación de un array ordenado en C++ utilizando programación orientada a objetos (OOP). El array ordenado permite almacenar una colección de números enteros en orden ascendente, evitando duplicados.

## Estructura del Proyecto

El proyecto se organiza de la siguiente manera:

- `bin/`: Contiene los archivos ejecutables.
- `lib/`: Contiene los archivos de cabecera (.hpp) y de código fuente (.cpp).
- `main.cpp`: El archivo de entrada principal que contiene la función `main()`.

## Funcionamiento del Código

El código implementa una clase llamada `SortedArray` que encapsula la funcionalidad del array ordenado. A continuación, se describen las principales funciones de la clase:

- `SortedArray::SortedArray()`: Constructor de la clase que inicializa el array ordenado y su tamaño.
- `int SortedArray::_create(int value)`: Agrega un valor al array ordenado de manera que se mantenga en orden ascendente. Si el valor ya existe, se muestra un mensaje de error.
- `void SortedArray::_update(int previousValue, int newValue)`: Actualiza un valor existente en el array con un nuevo valor especificado.
- `int SortedArray::_search(int value)`: Busca un valor en el array y devuelve su posición. Si el valor no se encuentra, devuelve la posición donde debería insertarse (como un número negativo).
- `int SortedArray::_delete(int value)`: Elimina un valor del array si existe.
- `void SortedArray::_showAll()`: Muestra todos los elementos del array y su cantidad.

Además de estas funciones, la clase `SortedArray` contiene un atributo constante `MAX` que define el tamaño máximo del array.

## Por qué Programación Orientada a Objetos (OOP)?

La programación orientada a objetos se utiliza en este proyecto para encapsular la funcionalidad relacionada con el array ordenado en una clase. Esto tiene varios beneficios:

1. **Abstracción:** La clase `SortedArray` proporciona una interfaz clara y coherente para trabajar con el array ordenado, ocultando los detalles de implementación.
2. **Reutilización de Código:** Las funciones y atributos relacionados están encapsulados en un solo objeto, lo que facilita la reutilización en otros proyectos.
3. **Mantenimiento:** Cambiar o mejorar la funcionalidad del array ordenado es más sencillo y seguro debido a la encapsulación.
4. **Claridad:** El código se organiza de manera más estructurada y legible, lo que facilita la comprensión y el mantenimiento a largo plazo.

## Uso del Código

Puedes utilizar este proyecto como base para trabajar con arrays ordenados en tus propias aplicaciones. Simplemente incluye los archivos de cabecera y fuente en tu proyecto y crea una instancia de `SortedArray` para comenzar a utilizarlo.

Para compilar el proyecto, puedes utilizar un compilador de C++ estándar. Asegúrate de que `main.cpp` incluye el archivo de cabecera `SortedArray.hpp` y que los archivos de código fuente se compilan junto con tu aplicación.

## Ejemplo de Uso Básico

```cpp
#include <iostream>
#include "./lib/SortedArray.hpp"

int main() {
    SortedArray myArray;

    myArray._create(10);
    myArray._create(5);
    myArray._create(15);
    myArray._showAll(); // Mostrará "Number of elements: 3" y los elementos en orden ascendente.
    
    return 0;
}
