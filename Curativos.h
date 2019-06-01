#include "Poder.h"
#ifndef CURATIVOS_H
#define CURATIVOS_H

class Curativos:public Poder{
private:
string curacion;

public:
Curativos();
Curativos(string,string, int);

string getcuracion();
void setcuracion(string);

string toString();
};
#endif
