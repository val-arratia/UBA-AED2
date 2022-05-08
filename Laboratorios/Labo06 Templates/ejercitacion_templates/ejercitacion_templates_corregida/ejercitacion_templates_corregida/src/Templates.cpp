#include<string>
#include "Templates.hpp"
using namespace std;

// Ejercicio 1: Pasar a templates
int cuadrado(int x) {
  return x * x;
}

template<class T>
class Cuadrado{
    public:
        Cuadrado(T x);
        int cuadrado(int x);
    private:
        int _x;
};

template<class T>
Cuadrado<T> :: Cuadrado(T x): _x(x) {}

template<class T>T Cuadrado<T> :: Cuadrado(T x){
    return x * x;
}


// Ejercicio 2: Pasar a templates
bool contiene(string s, char c) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == c) {
      return true;
    }
  }
  return false;
}

template<class Contenedor, class Elem>class Contiene{
    public:
        Contiene(Contenedor s, Elem c);
        Contenedor c();
        bool contiene(string s, char c);

    private:
        Contenedor _s;
        Elem _c;
};

template<class Contenedor, class Elem> Contiene<Contenedor,Elem>:: Contiene(Contenedor s,Elem c): _s(s),_c(c){}

template<class Contenedor, class Elem> bool Contiene<Contenedor,Elem>:: Contiene(Contenedor s,Elem c){
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            return true;
        }
    }
    return false;
}


// Ejercicio 3: Funcion es prefijo con un template contenedor

// Ejercicio 4: Función maximo con un template contenedor y uno elemento
