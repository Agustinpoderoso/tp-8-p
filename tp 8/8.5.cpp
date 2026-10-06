#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Empleado {
public:
    string nombre;
    double salario;
    string departamento;

    Empleado(string n, double s, string d) {
        nombre = n;
        salario = s;
        departamento = d;
    }
};

bool compararSalario(Empleado a, Empleado b) {
    return a.salario > b.salario;
}

int main() {
    vector<Empleado> empleados;

    int cantidad;

    cout << "Ingrese la cantidad de empleados: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        string nombre, departamento;
        double salario;

        cout << "\nNombre: ";
        cin >> nombre;

        cout << "Salario: ";
        cin >> salario;

        cout << "Departamento: ";
        cin >> departamento;

        empleados.push_back(Empleado(nombre, salario, departamento));
    }

    sort(empleados.begin(), empleados.end(), compararSalario);

    cout << "\n--- EMPLEADOS ORDENADOS POR SALARIO ---\n";

    for (Empleado empleado : empleados) {
        cout << "Nombre: " << empleado.nombre << endl;
        cout << "Salario: $" << empleado.salario << endl;
        cout << "Departamento: " << empleado.departamento << endl;
        cout << endl;
    }

    return 0;
}