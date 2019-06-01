#include "Persona.h"
#ifndef FIREBENDER_H
#define FIREBENDER_H
#include <string>
using std::string;
class FireBender: public Persona{
private:
string cicatrices;
string victorias;

public:
FireBender();
FireBender(string, string,string, int, string, string, string);

string getCicatrices();
void setCicatrices(string);

string getVictorias();
void setVictorias(string);

virtual string toString();
};
#endif
