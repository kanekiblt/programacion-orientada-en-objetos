#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

int main() {
    Persona person("Kaneki", 25);
    person.mostrarInformacion();
    return 0;
}
