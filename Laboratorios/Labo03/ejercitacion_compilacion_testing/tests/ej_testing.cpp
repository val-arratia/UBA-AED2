#include "gtest-1.8.1/gtest.h"
#include "../src/Libreta.h"
#include "../src/Truco.h"
#include <map>
#include <cmath>

using namespace std;

// Ejercicio 4
TEST(Aritmetica, suma) {
    int calculado=15+7;
    int esperado=22;
    EXPECT_EQ(calculado,esperado);
}

// Ejercicio 5
TEST(Aritmetica,potencia) {
    float potenciar= pow(10,2);
    int esperado=100;
    EXPECT_EQ(potenciar,esperado);
}

// Ejercicios 6..9
TEST(Aritmetica,potencia_general) {
    for(int i=-5; i<=5; i++){
        EXPECT_EQ(pow(i,2),i*i);
    }
}

TEST(Diccionario,obtener) {
    map<int, int> m;
    m.insert(make_pair(1, 2));
    EXPECT_EQ(m[1], 2);
}

TEST(Diccionario,definir) {
    map<int, int> m;
    EXPECT_EQ(m.count(1),0);
    m.insert(make_pair(1, 2));
    EXPECT_EQ(m.count(1),1);
}

TEST(Truco,inicio) {
    Truco t;
    EXPECT_EQ(t.puntaje_j1(),0);
    EXPECT_EQ(t.puntaje_j2(),0);
}

TEST(Truco,buenas) {
    Truco t;
    EXPECT_EQ(t.buenas(1),false);
    for(i=0;i<15;i++){
        t.sumar_punto(1);
    }
    EXPECT_EQ(t.buenas(1),false);
    t.sumar_punto(1);
    EXPECT_EQ(t.buenas(1),true);
    t.sumar_punto(1);
    t.sumar_punto(1);
    EXPECT_EQ(t.buenas(1),true);
}






