#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x;
    double y;
    double z;
    bool sujetobj;

public:
    BrazoRobotico(double x, double y, double z,bool sujetobj);
    double getx();
    double gety();
    double getz();
    bool haysujecion();
    void coger();
    void soltar();
    void mover(double xx, double yy, double zz);
};

#endif
