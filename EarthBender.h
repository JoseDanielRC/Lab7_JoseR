#include "Persona.h"
#ifndef EARTHBENDER_H
#define EARTHBENDER_H
#include <string>
using std::string;
class EarthBender: public Persona{
private:
int coles;
int graduacion;

public:
EarthBender();
EarthBender(int, int,string, int, string, string, string);

int getColes();
void setColes(int);

int getGraduacion();
void setGraduacion(int);

virtual string toString();
};
#endif
