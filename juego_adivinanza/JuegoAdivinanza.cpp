#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    int rango_min, rango_max, intentos_max, intentos_restantes;
    int numero_generado, numero_ingresado;
    int numeros_intentados[100], contador_intentos = 0;
    bool adivinado = false;

    cout << "Ingrese el rango minimo: ";
    cin >> rango_min;
    cout << "Ingrese el rango maximo: ";
    cin >> rango_max;
    cout << "Ingrese la cantidad maxima de intentos: ";
    cin >> intentos_max;

    srand(time(NULL));
    numero_generado = rand() % (rango_max - rango_min + 1) + rango_min;

    cout << "¡Bienvenido! Adivine el numero generado entre " << rango_min << " y " << rango_max << "." << endl;

    while (!adivinado && contador_intentos < intentos_max) {
        intentos_restantes = intentos_max - contador_intentos;
        cout << "Intento " << contador_intentos + 1 << " de " << intentos_max << ". Le quedan " << intentos_restantes << " intentos." << endl;
        cout << "Ingrese un número: ";
        cin >> numero_ingresado;

        if (numero_ingresado < rango_min || numero_ingresado > rango_max) {
            cout << "El número ingresado está fuera del rango. Por favor ingrese un número entre " << rango_min << " y " << rango_max << "." << endl;
            continue;
        }

        bool repetido = false;
        for (int i = 0; i < contador_intentos; i++) {
            if (numeros_intentados[i] == numero_ingresado) {
                repetido = true;
                break;
            }
        }

        if (repetido) {
            cout << "El numero ingresado ya fue intentado. Por favor ingrese un número diferente." << endl;
            continue;
        }

        numeros_intentados[contador_intentos] = numero_ingresado;
        contador_intentos++;

        if (numero_ingresado == numero_generado) {
            cout << "¡Felicitaciones! Adivinó el número en " << contador_intentos << " intentos." << endl;
            adivinado = true;
        } else if (numero_ingresado < numero_generado) {
            cout << "El número ingresado es menor que el número generado." << endl;
        } else {
            cout << "El número ingresado es mayor que el número generado." << endl;
        }
    }

    if (!adivinado) {
        cout << "¡Lo siento! Se quedó sin intentos. El número generado era " << numero_generado << "." << endl;
    } else {
        sort(numeros_intentados, numeros_intentados + contador_intentos);
        cout << "Los números ingresados fueron: ";
        for (int i = 0; i < contador_intentos; i++) {
            cout << numeros_intentados[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
