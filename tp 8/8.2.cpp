#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }
};

bool compararEdad(Persona a, Persona b) {
    return a.edad < b.edad;
}

int main() {
    vector<Persona> personas;

    int cantidad;

    cout << "Ingrese la cantidad de personas: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        string nombre;
        int edad;

        cout << "\nIngrese nombre: ";
        cin >> nombre;

        cout << "Ingrese edad: ";
        cin >> edad;

        personas.push_back(Persona(nombre, edad));
    }

    sort(personas.begin(), personas.end(), compararEdad);

    cout << "\n--- PERSONAS ORDENADAS POR EDAD ---\n";

    for (Persona persona : personas) {
        cout << "Nombre: " << persona.nombre
             << " | Edad: " << persona.edad << endl;
    }

    return 0;
}