#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Libro {
public:
    string titulo;
    string autor;
    int anio;

    Libro(string t, string a, int f) {
        titulo = t;
        autor = a;
        anio = f;
    }
};

bool compararAnio(Libro a, Libro b) {
    return a.anio < b.anio;
}

int main() {
    vector<Libro> libros;

    int cantidad;

    cout << "Ingrese la cantidad de libros: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        string titulo, autor;
        int anio;

        cout << "\nTitulo: ";
        cin >> titulo;

        cout << "Autor: ";
        cin >> autor;

        cout << "Año de publicacion: ";
        cin >> anio;

        libros.push_back(Libro(titulo, autor, anio));
    }

    sort(libros.begin(), libros.end(), compararAnio);

    cout << "\n--- LIBROS ORDENADOS POR AÑO ---\n";

    for (Libro libro : libros) {
        cout << "Titulo: " << libro.titulo << endl;
        cout << "Autor: " << libro.autor << endl;
        cout << "Año: " << libro.anio << endl;
        cout << endl;
    }

    return 0;
}