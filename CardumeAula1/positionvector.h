#ifndef POSITIONVECTOR_H
#define POSITIONVECTOR_H

#include <array>


class positionVector
{
public:
    positionVector();

    double getDir() const;
    void setDir(double value);
    void setPos(double a, double b) {this->x=a; this->y=b;}
    std::array<double, 2> getPos() {return {this->x,this->y};}

private:
    double x; // posicao x
    double y; // posicao y
    double dir; // direcao do agente

};

#endif // POSITIONVECTOR_H
