package POO;

class OPP {
    private String nombre;
    private int edad;

    public OPP(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    public void mostrarInformacion() {
        System.out.println("Nombre: " + nombre + ", Edad: " + edad);
    }

    public static void main(String[] args) {
        OPP person = new OPP("Kaneki", 25);
        person.mostrarInformacion();
    }
}
