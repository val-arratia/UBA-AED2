#include <iostream>

using namespace std;

using uint = unsigned int;

// Ejercicio 1

class Rectangulo {
    public:
        Rectangulo(uint alto, uint ancho);
        uint alto();
        uint ancho();
        float area();

    private:
        int alto_;
        int ancho_;

};

Rectangulo::Rectangulo(uint alto, uint ancho) : alto_(alto), ancho_(ancho) {}
//ponemos que alto_ y ancho_ reciben el mismo valor que se ingresa (alto y ancho)

uint Rectangulo::alto() {
    return alto_; // el this se puede obviar ya que como estamos entrando con :: a la
    //clase rectangulo, ya sabemos que estamos hablando del alto_ de la clase
}

uint Rectangulo::ancho() {
    return ancho_;
}

float Rectangulo::area() {
    return alto_ * ancho_;
}


// Ejercicio 2

// Clase Elipse
class Elipse{
public:
    Elipse(uint r_a, uint r_b);
    uint r_a();
    uint r_b();
    float area();

private:
    int r_a_;
    int r_b_;

};

float PI = 3.14;

Elipse::Elipse(uint r_a, uint r_b) : r_a_(r_a), r_b_(r_b) {}

uint Elipse::r_a(){
    return r_a_;
}

uint Elipse::r_b() {
    return r_b_;
}

float Elipse::area() {
    return r_a_ * r_b_ * PI;
}

// Ejercicio 3

class Cuadrado {
    public:
        Cuadrado(uint lado);
        uint lado();
        float area();

    private:
        Rectangulo r_;
};

Cuadrado::Cuadrado(uint lado): r_(lado, lado) {}

uint Cuadrado::lado() {
    return r_.alto(); //para "acceder" uso una de las operaciones del tipo rectangulo
}

float Cuadrado::area() {
    return r_.alto() * r_.ancho();
}

// Ejercicio 4

// Clase Circulo
class Circulo{
    public:
        Circulo(uint radio);
        uint radio();
        float area();

    private:
        int radio_;
};


Circulo :: Circulo(uint radio) : radio_(radio) {}

uint Circulo::radio(){
    return radio_;
}

float Circulo::area() {
    return radio_ * radio_ * PI;
}

// Ejercicio 5

ostream& operator<<(ostream& os, Rectangulo r) {
    os << "Rect(" << r.ancho() << ", " << r.alto() << ")";
    return os;
}

// ostream Elipse
ostream& operator<<(ostream& os, Elipse e) {
    os << "Elipse(" << e.r_a() << ", " << e.r_b() << ")";
    return os;
}
// Ejercicio 6
ostream& operator<<(ostream& os, Cuadrado c) {
    os << "Cuad(" << c.lado() << ")";
    return os;
}

ostream& operator<<(ostream& os, Circulo c) {
    os << "Circ(" << c.radio() << ")";
    return os;
}