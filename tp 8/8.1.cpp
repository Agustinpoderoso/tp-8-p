#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Alumno {
private:
    string nombre;
    double nota1, nota2, nota3;

public:
    Alumno(string n, double n1, double n2, double n3) {
        nombre = n;
        nota1 = n1;
        nota2 = n2;
        nota3 = n3;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Nota 1: " << nota1 << endl;
        cout << "Nota 2: " << nota2 << endl;
        cout << "Nota 3: " << nota3 << endl;
        cout << endl;
    }
};

int main() {
    vector<Alumno> alumnos;

    int cantidad;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        string nombre;
        double nota1, nota2, nota3;

        cout << "\nIngrese el nombre: ";
        cin >> nombre;

        cout << "Ingrese nota 1: ";
        cin >> nota1;

        cout << "Ingrese nota 2: ";
        cin >> nota2;

        cout << "Ingrese nota 3: ";
        cin >> nota3;

        alumnos.push_back(Alumno(nombre, nota1, nota2, nota3));
    }

    cout << "\n--- DATOS DE LOS ALUMNOS ---\n";

    for (Alumno alumno : alumnos) {
        alumno.mostrarDatos();
    }

    return 0;
}