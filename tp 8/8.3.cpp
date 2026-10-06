#include <iostream>
#include <vector>

using namespace std;

class Rectangulo {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double a) {
        base = b;
        altura = a;
    }

    double calcularArea() {
        return base * altura;
    }

    double calcularPerimetro() {
        return 2 * (base + altura);
    }

    void mostrarDatos() {
        cout << "Base: " << base << endl;
        cout << "Altura: " << altura << endl;
        cout << "Area: " << calcularArea() << endl;
        cout << "Perimetro: " << calcularPerimetro() << endl;
        cout << endl;
    }
};

int main() {
    vector<Rectangulo> rectangulos;

    int cantidad;

    cout << "Ingrese la cantidad de rectangulos: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        double base, altura;

        cout << "\nIngrese la base: ";
        cin >> base;

        cout << "Ingrese la altura: ";
        cin >> altura;

        rectangulos.push_back(Rectangulo(base, altura));
    }

    cout << "\n--- RECTANGULOS ---\n";

    for (Rectangulo rectangulo : rectangulos) {
        rectangulo.mostrarDatos();
    }

    return 0;
}