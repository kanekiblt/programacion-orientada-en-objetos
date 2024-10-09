using System;

class Persona {
    private string nombre;
    private int edad;

    public Persona(string nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    public void MostrarInformacion() {
        Console.WriteLine("Nombre: " + nombre + ", Edad: " + edad);
    }

    static void Main(string[] args) {
        Persona person = new Persona("Kaneki", 25);
        person.MostrarInformacion();
    }
}
