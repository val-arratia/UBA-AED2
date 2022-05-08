#include "Lista.h"

Lista::Lista() :  primero_(nullptr), ultimo_(nullptr)   {
    longitud_=0;
}

Lista::Lista(const Lista& l)  {
    *this = l;
}

Lista::~Lista() {
    // Completar
    Nodo* aux = primero_;
    while(aux != nullptr){
        aux=aux->next;
        delete(primero_);
        primero_=aux;
    }
}

Lista::Nodo::Nodo(const int& elem)    : valor(elem) , next(nullptr) , prev(nullptr) {};

Lista& Lista::operator=(const Lista& aCopiar) {
    // Completar
    Nodo* aux = primero_;
    while(aux != nullptr){
        aux=aux->next;
        delete(primero_);
        primero_=aux;

    }
    longitud_=0;
    for(int i=0;i<aCopiar.longitud();i++){
        agregarAtras(aCopiar.iesimo(i));
    }
    return *this;
}

void Lista::agregarAdelante(const int& elem) {
    // Completar
    if (longitud_==0){
        Nodo* nuevoPrimero = new Nodo(elem);
        primero_ = nuevoPrimero;
        ultimo_=primero_;
        longitud_++;
    }else {
        Nodo *nuevoPrimero = new Nodo(elem);
        nuevoPrimero->next = primero_;
        primero_->prev = nuevoPrimero;
        primero_ = nuevoPrimero;
        longitud_++;
    }

}

void Lista::agregarAtras(const int& elem) {
    // Completar
    if (longitud_==0){
        Nodo* nuevoPrimero = new Nodo(elem);

        primero_ = nuevoPrimero;
        ultimo_=primero_;
        longitud_++;
    }else{
        Nodo* nuevoUltimo= new Nodo(elem);

        nuevoUltimo->prev = ultimo_;
        nuevoUltimo->next = nullptr;
        ultimo_->next = nuevoUltimo;
        ultimo_ = nuevoUltimo;
        longitud_++;
    }
}

void Lista::eliminar(Nat i) {
    // Completar
    Nodo* temp=primero_;
    int j=0;

    if(longitud_==1){
        delete (primero_);
        primero_= nullptr;
        ultimo_= nullptr;
        longitud_--;
    }else{
        if(i==0){
            temp=temp->next;
            delete (primero_);
            primero_=temp;
            longitud_--;
        }else{
            if(i==longitud_-1){
                temp=ultimo_;
                temp=temp->prev;
                delete (ultimo_);
                ultimo_=temp;
                ultimo_->next= nullptr;
                longitud_--;
            }else{
                while(j < i){
                    temp = temp->next;
                    j++;
                }
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
                longitud_--;
            }
        }
    }
}

int Lista::longitud() const {
    // Completar
    return longitud_;
}

const int& Lista::iesimo(Nat i) const {
    // Completar
    Nodo* temp = primero_;
    int j=0;
    while(j<i){
        temp=temp ->next;
        j++;
    }
    return temp->valor;
}

int& Lista::iesimo(Nat i) {
    // Completar (hint: es igual a la anterior...)
    Nodo* temp = primero_;
    int j=0;

    while(j<i){
        temp=temp ->next;

        j++;
    }
    return temp->valor;
}

void Lista::mostrar(ostream& o) {
    // Completar
}
