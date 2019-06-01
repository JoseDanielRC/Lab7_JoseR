#include "Persona.h"
#ifndef WATERBENDER_H
#define WATERBENDER_H
#include <string>
using std::string;
class WaterBender: public Persona{
private:
string tribu;
string arma;

public:
WaterBender();
WaterBender(string, string,string, int, string, string, string);

string getTribu();
void setTribu(string);

string getArma();
void setArma(string);

virtual string toString();
};
#endif
