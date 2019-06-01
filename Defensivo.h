#include "Poder.h"
#ifndef DEFENSIVO_H
#define DEFENSIVO_H

class Defensivo:public Poder{
private:
string resistencia;
string duracion;

public:
Defensivo();
Defensivo(string, string,string, int);

string getresistencia();
void setresistencia(string);

string getduracion();
void setduracion(string);

string toString();
};
#endif
