//
//  acceleration.h
//  Lab07
//
//  Created by Sulav Dahal on 6/16/22.
//

#pragma once
#include "velocity.h"

class Acceleration
{
private:
    double ddx;
    double ddy;
    
public:
    Acceleration(): ddx(0.0), ddy(0.0){}
    Acceleration(double acc, Direction & direction): ddx(0.0), ddy(0.0)
    {
        setAccelerationDirection(acc, direction);
    }
    
    double getDDY() {return ddy; }
    double getDDX() {return ddx;}
    
    Velocity getVelocity(double time)
    {
        return Velocity(ddx * time, ddy * time);
    }
    
    // Change this
    Acceleration& operator = (Velocity &rhs)
    {
        ddx = rhs.getDx();
        ddy = rhs.getDy();
        return *this;
    }
    
    void setAccelerationDirection(double acc, Direction & direction);
    
};
