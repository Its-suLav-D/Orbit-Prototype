//
//  gps.cpp
//  Lab07
//
//  Created by Sulav Dahal on 6/2/22.
//

#include "gps.h"
using namespace std;



void Gps:: initializeGps()
{
    // Set up Position
//    this->physics.horizontalPosition(this->getVelocityInstance(), this->getPosition());
//    this->physics.verticalPosition(this->getVelocityInstance(), this->getPosition());
    
    // Apply Acceleration
    double ddx = this->physics.horizontalAcceleration(this->getPosition(), angle);
    double ddy = this->physics.verticalAcceleration(this->getPosition(), angle);
    
    
    // Apply Velocity
    this->physics.verticalVelocity(this->getVelocityInstance(), ddy);
    this->physics.horizontalVelocity(this->getVelocityInstance(), ddx);
    
    //
    
    this->physics.horizontalDistance(this->getPosition(), this->getVelocityInstance(), ddx);
    this->physics.verticalDistance(this->getPosition(),this->getVelocityInstance(), ddy);
    

}
