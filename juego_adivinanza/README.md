# Juego de Adivinanza en C++ 🎮

Este proyecto es un juego interactivo de consola desarrollado en C++. Fue creado como parte de mi formacion en la Tecnicatura Superior en Programación para consolidar los fundamentos de lógica computacional, estructuras de control y manejo básico de memoria en la materia Logica de Programacion.

## 📝 Descripción

El programa reta al usuario a adivinar un número aleatorio oculto. Para hacerlo más dinámico, el jugador tiene el control total de la dificultad al inicio de la partida: define el rango mínimo, el rango máximo y la cantidad de intentos permitidos. 

Durante el juego, el sistema asiste al usuario indicando si el número oculto es mayor o menor al ingresado, controla que no se repitan valores previos y, al finalizar, muestra un historial ordenado de las jugadas.

## 🛠️ Habilidades y Tecnologías Aplicadas

* **Lenguaje:** C++
* **Librerías Estándar:** Uso de `<iostream>` para entrada/salida, `<cstdlib>` / `<ctime>` para la generación de números pseudoaleatorios, y `<algorithm>` para el ordenamiento de datos.
* **Lógica y Algoritmia:**
  * Control de flujo robusto mediante bucles `while` y condicionales `if/else`.
  * Validación de entrada de datos (control de rangos).
  * Búsqueda lineal para prevenir el ingreso de números duplicados.
  * Uso de la función `std::sort` para ordenar el historial de intentos de manera ascendente.
* **Estructuras de Datos:** Manejo de arreglos nativos para el almacenamiento temporal del historial de usuario.

## 🚀 Cómo ejecutar el proyecto

Para compilar y ejecutar este juego en tu máquina local, necesitas tener un compilador de C++ instalado (como GCC o MinGW).

1. Abre tu terminal.
2. Navega hasta el directorio donde se encuentra el archivo `JuegoAdivinanza.cpp`.
3. Compila el código con el siguiente comando:
   ```bash
   g++ JuegoAdivinanza.cpp -o adivinanza
   ```
4. Ejecuta el programa:
   ```bash
   ./adivinanza
   ```
