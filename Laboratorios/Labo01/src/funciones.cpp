#include <vector>
#include "algobot.h"

using namespace std;

// Ejercicio 1
vector<int> quitar_repetidos(vector<int> s) {
    set<int> set_res={};
    vector<int> res;
    for(int i=0;i<s.size();i++){
        if (set_res.count(s[i]) == 0){
            set_res.insert(s[i]);
            res.push_back(s[i]);
        }
    }
    return res;
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    set<int> set_res;
    vector<int> res;
    for(int i=0;i<s.size();i++){
        if (set_res.count(s[i]) == 0){
            set_res.insert(s[i]);
            res.push_back(s[i]);
        }
    }
    return res;
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    set<int> set_a;
    set<int> set_b;
    for(int i=0;i<a.size();i++){
        set_a.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        set_b.insert(b[i]);
    }
    for(int i=0;i<a.size();i++){
        set_a.insert(a[i]);
    }
    bool res=false;
    int count_b=0;
    int count_a=0;
    for(int i=0;i<b.size();i++){
        if(set_a.count(b[i])==set_b.count(b[i])){
            count_b = count_b+1;
        }
    }
    for(int i=0;i<a.size();i++){
        if(set_a.count(a[i])==set_b.count(a[i])){
            count_a = count_a+1;
        }
    }
    if(count_a==a.size() && count_b==b.size()){
        res=true;
    }
    return res;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    set<int> set_a;
    set<int> set_b;
    for(int i=0;i<a.size();i++){
        set_a.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        set_b.insert(b[i]);
    }
    for(int i=0;i<a.size();i++){
        set_a.insert(a[i]);
    }
    bool res=false;
    int count_b=0;
    int count_a=0;
    for(int i=0;i<b.size();i++){
        if(set_a.count(b[i])==set_b.count(b[i])){
            count_b = count_b+1;
        }
    }
    for(int i=0;i<a.size();i++){
        if(set_a.count(a[i])==set_b.count(a[i])){
            count_a = count_a+1;
        }
    }
    if(count_a==a.size() && count_b==b.size()){
        res=true;
    }
    return res;
}

// Ejercicio 5
int apariciones(int x, vector<int> s){
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==x){
            c=c+1;
        }
    }
    return c;
}

map<int, int> contar_apariciones(vector<int> s) {
    map<int,int> m;
    set<int> set_s;
    //no sale con set ya que en los conjuntos no se repiten los elementos
    //cuando creo un set y le agrego los elementos, no se agregan los repetidos
    for(int i=0; i<s.size();i++){
        m[s[i]]=apariciones(s[i],s);
    }
    return m;
}

// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    set<int> set_res;
    vector<int> res;
    for(int i=0;i<s.size();i++){
        if (set_res.count(s[i]) == 0){
            set_res.insert(s[i]);
            res.push_back(s[i]);
        }
    }
    return res;
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    set<int> res;

    for (int x : b) {
        if (a.count(x) == 1) {
            res.insert(x);
        }
    }
    return res;
}

// Ejercicio 8
/*
set<int> apariciones2(int x, vector<int> s){
    set<int> s2;
    s2.insert(s[i]);
    s2.insert(s[j]);
    if(s[i]%10==s[j]%10){
        s2.insert(s[i]);
        s2.insert(s[j]);
    }
}
*/

map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    map<int, set<int>> m;
    set<int> set;

    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[i]%10==s[j]%10){
                set.clear();
                set.insert(s[i]);
                set.insert(s[j]);
                m[s[i]]=set;
            }
        }
    }

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
