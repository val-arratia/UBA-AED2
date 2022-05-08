#include <vector>
#include "algobot.h"

using namespace std;

// Ejercicio 1
vector<int> quitar_repetidos(vector<int> s) {
    set<int> set_s;
    for (int i = 0; i < s.size(); i++) {
        set_s.insert(s[i]);
    }
    vector<int> res;
    for (int elem: set_s) {
        if(set_s.count(elem) == 1){
            res.push_back(elem);
        }
    }
    return res;
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    set<int> set_s;
    for (int i = 0; i < s.size(); i++) {
        set_s.insert(s[i]);
    }
    vector<int> res;
    for (int elem: set_s) {
        res.push_back(elem);
    }
    return res;
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    set<int> set_a;
    for (int i = 0; i < a.size(); i++) {
        set_a.insert(a[i]);
    }
    set<int> set_b;
    for (int i = 0; i < b.size(); i++) {
        set_b.insert(b[i]);
    }
    return set_a == set_b;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    set<int> set_a;
    for (int i = 0; i < a.size(); i++) {
        set_a.insert(a[i]);
    }
    set<int> set_b;
    for (int i = 0; i < b.size(); i++) {
        set_b.insert(b[i]);
    }
    return set_a == set_b;
}

// Ejercicio 5

int apariciones(vector<int> &s, int x) {
    int i = 0;
    int cantidad = 0;
    while (i < s.size()) {
        if (s[i] == x) {
            cantidad++;
        }
    i++;
    }
    return cantidad;
}

map<int, int> contar_apariciones(vector<int> s) {
    map<int, int> m;
    for (int i = 0; i < s.size(); i++) {
         m[s[i]] = apariciones(s, s[i]);
    }
    return m;
}

// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    vector<int> res;
    for (int i = 0; i < s.size(); i++) {
        if (apariciones(s, s[i]) == 1) {
            res.push_back(s[i]);
        }
    }
    return res;
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    vector<int> aux;
    set<int> res;
    for (int elem: a) {
        if (b.count(elem)) {
            aux.push_back(elem);
        }
    }
    for (int elem: aux) {
        res.insert(elem);
    }
    return res;
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    set<int> set_s;
    map<int, set<int>> m;


    return m;
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    return vector<char>();
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    return true;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
  return map<set<LU>, Mail>();
}
