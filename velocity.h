//
//  velocity.h
//  Lab07
//
//  Created by Sulav Dahal on 6/1/22.
//
#pragma once

#include <cmath>
#include "direction.h"


class Velocity
{
private:
    double dx;
    double dy;
public:
    Velocity():dx(-2685),dy(1550){};
    Velocity(double dx, double dy):dx(dx), dy(dy){};
//    Velocity(double dx, double dy): dx(rhs.dx), dy(rhs.dy){};
    
    Velocity(double speed, Direction & direction): dx(0.0), dy(0.0)
    {
        setSpeedDirection(speed, direction);
    }
    
    Velocity & operator = (const Velocity & rhs)
    {
        dx = rhs.dx;
        dy = rhs.dy;
        return *this;
    }
    
    double getDx() {return dx;}
    double getDy() {return dy;}
    Direction& getDirection();
    double getSpeed() {return sqrt(dx*dx + dy*dy);}
    
    void setDx(double dx){this->dx = dx;}
    void setDy(double dy){this->dy = dy;}
    void setDxDy(double dx, double dy){this->dx = dx; this ->dy = dy;}
    // SET Direction
    
    void setSpeed(double speed)
    {
        setSpeedDirection(speed, getDirection());
    }
    
    void setDirection(Direction & direction)
    {
        setSpeedDirection(getSpeed(), direction);
    }
    
    
    void setSpeedDirection(double speed, Direction & direction);
    void addDx(double dx){setDx(getDx() + dx);}
    void addDy(double dy){setDy(getDy()+ dy); }
    
    
    void addVelocity(const Velocity &v)
    {
        dx+= v.dx;
        dy+= v.dy;
    }
    
    Velocity &operator += (const Velocity &rhs)
    {
        addVelocity(rhs);
        return *this;
    }
    
    
};
