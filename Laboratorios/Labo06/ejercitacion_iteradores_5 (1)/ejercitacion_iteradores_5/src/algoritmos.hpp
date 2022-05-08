#ifndef ALGO2_LABO_CLASE5_ALGORITMOS_H
#define ALGO2_LABO_CLASE5_ALGORITMOS_H

#include <utility>
#include <iterator>
#include <vector>

// Completar con las funciones del enunciado
template<class Contenedor> typename Contenedor::value_type minimo(const Contenedor& c){
    auto min=c.begin(); //auto ya contiene el const
    for(auto it=c.begin();it!= c.end();++it){
        if(*min> *it){
            min=it;
        }
    }
    return *min;
}

template<class Contenedor> typename Contenedor::value_type promedio(const Contenedor& c){
    int suma = 0;
    typename Contenedor::value_type size=0;
    for(auto it=c.begin();it!= c.end();++it) {
        suma = suma + *it;
        size++;
    }

    return suma/size;
}

template<class Iterator> typename Iterator::value_type minimoIter(const Iterator& desde, const Iterator& hasta){
    auto min=desde;
    for(auto it=desde;it!= hasta;++it){
        if(*min> *it){
            min=it;
        }
    }
    return *min;
}
template<class Iterator> typename Iterator::value_type promedioIter(const Iterator& desde, const Iterator& hasta){
    int suma = 0;
    typename Iterator::value_type size=0;
    for(auto it=desde;it!=hasta;++it) {
        suma = suma + *it;
        size++;
    }

    return suma/size;
}

//EJ 4
template<class Contenedor> void filtrar(Contenedor &c, const typename Contenedor::value_type& elem){
    /*for(auto it=c.begin();it!= c.end();++it) {
        if(*it==elem){
            it=c.erase(it);
        }
    }*/
    auto it=c.begin();
    while(it!=c.end()){
        if(*it==elem){
            it=c.erase(it);
        }else{
            ++it; //es para comparar el elemento que borre, que no pase al siguiente
        }


    }
}
//EJ 5
template<class Contenedor>bool ordenado(Contenedor &c){
    auto it=c.begin();
    int aux=*it;
    int size=0;
    int cont=0;
    while(it!= c.end()) {
        if(*it>aux){
            aux=*it;
            cont++;
        }
        ++it;
        size++;
    }
    return cont+1==size;
}

//EJ 6
template<class Contenedor> std::pair<Contenedor, Contenedor>split(const Contenedor & c,const typename Contenedor::value_type& elem){
    auto it=c.begin();
    std::pair<Contenedor, Contenedor> p;
    while(it!= c.end()) {
        if(*it<elem){
            p.first.insert(it,*it);
        }else{
            p.second.insert(it,*it);
        }
        ++it;

    }

    return p;
}

//EJ 7
template <class Contenedor> void merge(const Contenedor& c1, const Contenedor & c2, Contenedor & res){


}




#endif //ALGO2_LABO_CLASE5_ALGORITMOS_H




















