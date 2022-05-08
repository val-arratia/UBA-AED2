#include <iostream>

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
        // ene, feb, mar, abr, may, jun
        31, 28, 31, 30, 31, 30,
        // jul, ago, sep, oct, nov, dic
        31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
class Fecha {
  public:
    Fecha(int mes, int dia);
    int mes();
    int dia();
    #if EJ >= 9 // Para ejercicio 9
    bool operator==(Fecha o);
    #endif
    /*void incrementar_dia(uint,uint); */ //por consigna no recibe parametros así los saco
    void incrementar_dia();

  private:
    int mes_;
    int dia_;
};
//como ya le pasan los parametros int mes, int dia no tengo que asignarle yo un parametro en
//mes_(algo) ese algo va a ser el parametro que me asginan
Fecha::Fecha(int mes, int dia) : mes_(mes), dia_(dia){}

int Fecha::mes(){
    return mes_;
}
int Fecha::dia(){
    return dia_;
}
//8
ostream& operator<<(ostream& os, Fecha f) {
    os << f.dia() << "/" << f.mes();
    return os;
}

#if EJ >= 9
bool Fecha::operator==(Fecha o) {
    bool igual_dia = this->dia() == o.dia();
    bool igual_mes = this->mes() == o.mes();
    return igual_dia and igual_mes;
}
#endif
 //10
 //Como sé que estoy definiendo una operacion en la Clase Fecha entonces puedo usar sus parametros
 //(los privados)(lo que esta en lo público son las operaciones que puedo hacer con la clase)
void Fecha::incrementar_dia(){ //por consigna no recibe parametros así los saque
    if(dia_ == dias_en_mes(mes_)){ //acá tengo que acceder a
        dia_ = 1;
    }else{
        dia_=dia_+1;
    }
}

// Ejercicio 11, 12

// Clase Horario
class Horario {
    public:
        Horario(uint hora, uint min);
        uint hora();
        uint min();
        bool operator==(Horario h);
        bool operator<(Horario h);
    private:
        int hora_;
        int min_;
};

Horario::Horario(uint hora, uint min) : hora_(hora), min_(min){}

uint Horario::hora(){
    return hora_;
}
uint Horario::min(){
    return min_;
}

ostream& operator<<(ostream& os, Horario h) {
    os << h.hora() << ":" << h.min();
    return os;
}

bool Horario::operator==(Horario h) {
    bool igual_hora = this->hora() == h.hora();
    bool igual_min = this->min() == h.min();
    return igual_hora and igual_min;
}

bool Horario::operator<(Horario h) {
    if(hora() < h.hora()){
        return true;
    }else{
        if(hora()==h.hora()){
            return min() < h.min();
        }
    }
}

// Ejercicio 13

// Clase Recordatorio


// Ejercicio 14

// Clase Agenda

