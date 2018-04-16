#ifndef AGENTE_H
#define AGENTE_H

#include "positionvector.h"
#include <vector>

using namespace std;

class agente
{
public:
    agente();

private:
    double agStep;
    positionVector locDir;
    double angDir;
    int agId;
    vector <agente *> agViz;
};

#endif // AGENTE_H
