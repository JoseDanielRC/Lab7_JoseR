#ifndef PODER_H
#define PODER_H
#include<iostream>
#include <string>
using std::string;
using std::cout;
class Poder{
protected:
string nombre;
int nivel;

public:
Poder();
Poder(string, int);

string getnombre();
void setnombre(string);

int getnivel();
void setnivel(int);

string toString();
};
#endif

