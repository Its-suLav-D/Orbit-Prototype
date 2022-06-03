//
//  gps.h
//  Lab07
//
//  Created by Sulav Dahal on 6/2/22.
//

#include "position.h"
#include "velocity.h"
#include "physics.h"
using namespace std;


class Gps
{
private:
    Position position;
    Velocity velocity;
    Physics physics;
//    double initialY = 29814450;
//    double initialX = 29814450;
    double angle=30 *PI/180;

public:
    Gps(){
        position.setMetersX(sin(angle)* 42164000);
        position.setMetersY(cos(angle)* 42164000);
    }
    
    void applyPhysics();
    void initializeGps();
    Position & getPosition() { return position; }
    Velocity & getVelocityInstance() { return velocity; }
    Physics & getPhysics()  {return physics;  }
    
    
    double angleGps;
};
