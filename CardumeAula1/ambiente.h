#ifndef AMBIENTE_H
#define AMBIENTE_H

#include "agente.h"
#include <vector>

using namespace std; // toma o std como namespace padrao, evita escrever coisas como std::vector, std::rand() ...

class ambiente
{
public:
    ambiente();

private:
    vector <agente> agVector;
    double tamMundo;

};

#endif // AMBIENTE_H
