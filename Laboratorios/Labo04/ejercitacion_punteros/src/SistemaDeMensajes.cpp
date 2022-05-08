#include "SistemaDeMensajes.h"

// Completar...
SistemaDeMensajes::SistemaDeMensajes() {}

void SistemaDeMensajes::registrarJugador(int id, string ip){

}

void SistemaDeMensajes::enviarMensaje(int id, string mensaje){
    if (registrado (id)){

    }
}

bool SistemaDeMensajes::registrado(int id) const{
    return 0 <= id && id< 4;
}
