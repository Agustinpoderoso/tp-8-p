#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CuentaBancaria {
private:
    int numeroCuenta;
    string titular;
    double saldo;

public:
    CuentaBancaria(int numero, string nombre, double dinero) {
        numeroCuenta = numero;
        titular = nombre;
        saldo = dinero;
    }

    void depositar(double dinero) {
        saldo += dinero;
    }

    void retirar(double dinero) {
        if (dinero <= saldo) {
            saldo -= dinero;
        } else {
            cout << "No hay saldo suficiente." << endl;
        }
    }

    void mostrarDatos() {
        cout << "Numero de cuenta: " << numeroCuenta << endl;
        cout << "Titular: " << titular << endl;
        cout << "Saldo: $" << saldo << endl;
    }
};

int main() {
    vector<CuentaBancaria> cuentas;

    int cantidad;

    cout << "Ingrese la cantidad de cuentas: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        int numero;
        string titular;
        double saldo;

        cout << "\nNumero de cuenta: ";
        cin >> numero;

        cout << "Nombre del titular: ";
        cin >> titular;

        cout << "Saldo inicial: ";
        cin >> saldo;

        cuentas.push_back(CuentaBancaria(numero, titular, saldo));
    }

    cout << "\n--- CUENTAS ---\n";

    for (int i = 0; i < cuentas.size(); i++) {
        cout << "\nCuenta " << i << endl;
        cuentas[i].mostrarDatos();
    }

    int seleccion;
    cout << "\nSeleccione una cuenta: ";
    cin >> seleccion;

    int opcion;
    double dinero;

    cout << "\n1. Depositar" << endl;
    cout << "2. Retirar" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    cout << "Ingrese el monto: ";
    cin >> dinero;

    if (opcion == 1) {
        cuentas[seleccion].depositar(dinero);
    } else if (opcion == 2) {
        cuentas[seleccion].retirar(dinero);
    }

    cout << "\n--- CUENTA ACTUALIZADA ---\n";
    cuentas[seleccion].mostrarDatos();

    return 0;
}