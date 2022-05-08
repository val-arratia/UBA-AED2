#include "Lista.h"

Lista::Lista()  { //tengo que definir todos los elementos en el private en nulo, una lista vacía
    // Completar
    primero_= nullptr;
    ultimo_= nullptr;
    longitud_ = 0;


}

Lista::Lista(const Lista& l)  {
    //Inicializa una lista vacía y luego utiliza operator= para no duplicar el código de la copia de una lista.
    *this = l;  // this es como un puntero que me accede a los elementos en private del tipo que le asigno, es decir
                // acá el this "guarda" los private de l, no a l sino sus elems en private
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

//l = {1,2,3};
//l = {4,5,6};
Lista& Lista::operator=(const Lista& aCopiar) {
    // Completar
//    borro todo lo que tiene this
    Nodo* aux = primero_;
    while(aux != nullptr){
        aux=aux->next;
        delete(primero_);
        primero_=aux;
    }
// copio a this todo lo de la lista aCopiar
    

    return *this;
}

void Lista::agregarAdelante(const int& elem) {
    // Completar
    if (longitud_==0){
        Nodo* nuevoPrimero = new Nodo();
        nuevoPrimero->valor = elem;
        primero_ = nuevoPrimero;
        ultimo_=primero_;
        longitud_++;
    }else{
        Nodo* nuevoPrimero = new Nodo();                //armo un nuevo nodo auxiliar para no solapar el primero
        nuevoPrimero->valor = elem;                     //el nuevo nodo apunta al elemento que quiero agregar adelante
        nuevoPrimero->next = primero_;                  //el nuevo nodo apunta al siguiente que es el primero
                                                        //aclara que el anterior es vacio, entonces al apuntar al primero y su anterior es vacio, eso lo hace ser el nuevo primero
        primero_->anterior = nuevoPrimero;              //reafirmo esto diciendo que el primero apunta al anterior que es el nuevo primero
        primero_ = nuevoPrimero;                        //confirmo finalmente que el primero de la lista es el nuevoPrimero
        longitud_++;                                    //le agregue un elemento, aumanta su long
    }


}

void Lista::agregarAtras(const int& elem) {
    // Completar
    if (longitud_==0){
        Nodo* nuevoPrimero = new Nodo();
        nuevoPrimero->valor = elem;
        primero_ = nuevoPrimero;
        ultimo_=primero_;
        longitud_++;
    }else{
        Nodo* nuevoUltimo= new Nodo();
        nuevoUltimo->valor = elem;

        nuevoUltimo->anterior = ultimo_;
        nuevoUltimo->next = nullptr;
        ultimo_->next = nuevoUltimo;
        ultimo_ = nuevoUltimo;
        longitud_++;
    }
}

void Lista::eliminar(Nat i) {
    // Completar
    Nodo* temp=primero_;
    Nodo* ant = primero_;
    Nodo* sig = new Nodo(); //despues las inicializo para que den el nodo anterior y el siguiente a medida que avanzo
    int j=0;
    temp=temp->next;
    if(i==0){
        delete (primero_);
        primero_=temp;
        longitud_--;
    }else{
        while(j <= i){
            ant=ant->next;
            temp=(temp ->next);

            if(j==i){
                delete (ant);
                ant=temp;
                longitud_--;
            }
            j++;
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
