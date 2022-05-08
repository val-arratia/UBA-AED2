#include <iostream>
#include <list>

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
    if(dia_ < dias_en_mes(mes_)){ //acá tengo que acceder a
        dia_++;
    }else if(dia_ == dias_en_mes(mes_)){
        dia_=1;
        mes_++;
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
class Recordatorio {
    public:
        Recordatorio(Fecha fecha, Horario horario, string mensaje);
        Fecha fecha();
        Horario horario();
        string mensaje();
        menor();

    private:
        Fecha fecha_;
        Horario horario_;
        string mensaje_;
};

Recordatorio::Recordatorio(Fecha fecha, Horario horario, string mensaje) : fecha_(fecha), horario_(horario), mensaje_(mensaje) {}

Fecha Recordatorio::fecha() {
    return fecha_;
}
Horario Recordatorio::horario() {
    return horario_;
}
string Recordatorio::mensaje() {
    return mensaje_;
}



ostream& operator<<(ostream& os, Recordatorio r) {
    os << r.mensaje() << " @ " << r.fecha() << " " << r.horario() ;
    return os;
}

// Ejercicio 14

// Clase Agenda
class Agenda {
    public:
        Agenda(Fecha fecha_inicial);
        void agregar_recordatorio(Recordatorio rec);
        void incrementar_dia();
        list<Recordatorio> recordatorios_de_hoy();
        Fecha hoy();

    private:
        Fecha fecha_inicial_;
        list<Recordatorio> recordatorios_de_hoy_;

};

Agenda::Agenda(Fecha fecha_inicial) : fecha_inicial_(fecha_inicial){}

Fecha Agenda::hoy(){
    return fecha_inicial_;
}

void Agenda:: agregar_recordatorio(Recordatorio rec){
    recordatorios_de_hoy_.push_back(rec);
}

void Agenda::incrementar_dia(){
    return fecha_inicial_.incrementar_dia();
}

list<Recordatorio> Agenda::recordatorios_de_hoy() {
    list<Recordatorio> rec_hoy;
    for(Recordatorio r: recordatorios_de_hoy_) {
        if(r.fecha() ==fecha_inicial_ ){
            rec_hoy.push_back(r);
        }
    }
    rec_hoy.sort();
    return rec_hoy;
}

ostream& operator<<(ostream& os, Agenda a) {
  //  os << a.hoy() << "=====\n" << a.recordatorios_de_hoy(); otra forma

    os << a.hoy();
    os << endl;

    for(Recordatorio r: a.recordatorios_de_hoy()){
        os << r;
        os << endl;
    }

    return os;
}



