#include<iostream>
#include "BrazoRobotico.h"


int main(){
        BrazoRobotico Brazo(0.0,0.0,0.0,false);
        Brazo.mover(32.0,11.0,25.0);
        Brazo.coger();
        return 0;
}
