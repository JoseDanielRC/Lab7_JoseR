#include "Poder.h"
#ifndef OFENSIVO_H
#define OFENSIVO_H

class Ofensivo: public Poder{
private:
string rango;
string fuerza;

public:
Ofensivo();
Ofensivo(string, string,string, int);

string getrango();
void setrango(string);

string getfuerza();
void setfuerza(string);

string toString();
};
#endif
