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
    double angle=45;

public:
    Gps():position(29819250,29819250){}
    
    void applyPhysics();
    void initializeGps();
    Position & getPosition() { return position; }
    Velocity & getVelocityInstance() { return velocity; }
    Physics & getPhysics()  {return physics;  }
    
    
    double angleGps;
};
