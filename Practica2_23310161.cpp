#include <iostream>
#include <string>
using namespace std;

class Usuario {
protected:
    string telefono;
    string contra;
    string email;
    string edad;
    string nombre;
    string login;

public:
    Usuario(string _nombre, string _edad, string _telefono, string _contra, string _email, string _login) 
        : nombre(_nombre), edad(_edad), telefono(_telefono), contra(_contra), email(_email), login(_login) {}
    
    void Mostrar() {
        cout << "Usuario" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Email: " << email << endl;
        cout << "Contraseña: " << contra << endl;
        cout << "Sesion: " << login << endl;
    }
};

class Cliente : public Usuario {
public:
    string persona;
    string queja;
    string devolucion;
    string producto;  

    Cliente(string _nombre, string _edad, string _telefono, string _contra, string _email, string _login, string _persona, string _queja, string _devolucion, string _producto) 
        : Usuario(_nombre, _edad, _telefono, _contra, _email, _login), persona(_persona), queja(_queja), devolucion(_devolucion), producto(_producto) {}
    
    void Mostrar() {
        Usuario::Mostrar(); 
        cout << "\nCliente " << persona << endl;
        cout << "Queja: " << queja << endl;
        cout << "Devolución: " << devolucion << endl;
        cout << "Producto: " << producto << endl;
    }
};

class Vendedor : public Usuario {
public:
    string vend;
    string precio;
    string adios;

    Vendedor(string _nombre, string _edad, string _telefono, string _contra, string _email, string _login, string _vend, string _precio, string _adios) 
        : Usuario(_nombre, _edad, _telefono, _contra, _email, _login), vend(_vend), precio(_precio), adios(_adios) {}

    void Mostrar() {
        cout << "\nVendedor " << vend << endl;
        cout << "El precio es: " << precio << endl;
        cout << "Gracias vuelva pronto" << endl;
    } 
};

int main() {
    Cliente cliente1("Jose", "20", "3323858004", "*******", "josemendiolasanchez@live.com", "Inicio de sesión", "Cliente", "El producto no funciona.", "Solicita devolución de $500.", "Protector de celular");
    cliente1.Mostrar();
    Vendedor vendedor1("Juan", "30", "3323858005", "********", "juanperez@live.com", "Inicio de sesión", "Vendedor", "300$ con descuento", "Adios");
    vendedor1.Mostrar();
    return 0;
}