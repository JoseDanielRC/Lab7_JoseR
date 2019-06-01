#include "Persona.h"
#ifndef AIRBENDER_H
#define AIRBENDER_H
#include <string>
#include<iostream>
using std::string;
class AirBender: public Persona{
private:
string pelo;
string colorflecha;

public:
AirBender();
AirBender(string, string,string, int, string, string, string);

string getPelo();
void setPelo(string);

string getColorflecha();
void setColorflecha(string);

virtual string toString();
};
#endif
