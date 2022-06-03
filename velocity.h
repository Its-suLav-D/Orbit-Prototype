//
//  velocity.h
//  Lab07
//
//  Created by Sulav Dahal on 6/1/22.
//
#pragma once
#include <cmath>
class Velocity
{
private:
    double dx;
    double dy;
public:
    Velocity():dx(-2685),dy(1550){};
    Velocity(double dx, double dy):dx(dx), dy(dy){};
//    Velocity(double dx, double dy): dx(rhs.dx), dy(rhs.dy){};
    Velocity & operator = (const Velocity & rhs)
    {
        dx = rhs.dx;
        dy = rhs.dy;
        return *this;
    }
    
    double getDx() {return dx;}
    double getDy() {return dy;}
//    double getSpeed() {return sqrt(x*x + y*y);}
    
    void setDx(double dx){this->dx = dx;}
    void setDy(double dy){this->dy = dy;}
    void setDxDy(double dx, double dy){this->dx = dx; this ->dy = dy;}
    
    
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
