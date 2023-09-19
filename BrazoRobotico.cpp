#include "BrazoRobotico.h"



BrazoRobotico::BrazoRobotico(double x, double y, double z,bool sujetobj){
        this->x = x;
        this->y = y;
        this->z = z;
        this->sujetobj = sujetobj;
}
    double BrazoRobotico::getx(){
            return x;
    }
    double BrazoRobotico::gety(){
            return y;
    }
    double BrazoRobotico::getz(){
            return z;
    }
    bool BrazoRobotico::haysujetobj(){
            return sujetobj;
    }
    void BrazoRobotico::coger(){
            sujetobj=true;
    }
    void BrazoRobotico::soltar(){
            sujetobj=false;
    }
    void BrazoRobotico::mover(double xx, double yy, double zz){
            x += xx;
            y += yy;
            z += zz;
    }
