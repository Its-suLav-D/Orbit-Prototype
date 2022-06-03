//
//  physics.h
//  Lab07
//
//  Created by Sulav Dahal on 6/1/22.
//

#pragma once
#include <cmath>
#include "velocity.h"
#include "position.h"

#define PI 3.14159265

inline double accGravityAtAltitude(double h)
{
    double acc = g* pow((r/(r+h)),2);
    return acc;
}

inline double heightAboveEarth(double x, double y)
{
    double h = sqrt(x*x + y*y) - rEarth;
    return h;
}

inline double directionOfGravityPull(double x, double y)
{
    // Returns angle in Radians
    double angle = atan2(x,y)/ 180 * PI;
    return angle;
}

// Sin
inline double horizontalAcceleration(Position &p)
{
    double angle = directionOfGravityPull(p.getMetersX(),p.getMetersY());
    
    double h = heightAboveEarth(p.getMetersX(),p.getMetersY());
    
    double acc = accGravityAtAltitude(h);
    
    double ddx = acc*sin(angle);
    return ddx;
}


// Cos
inline double verticalAcceleration(Position &p)
{
    double angle = directionOfGravityPull(p.getMetersX(),p.getMetersY());
    double h = heightAboveEarth(p.getMetersX(),p.getMetersY());
    double acc = accGravityAtAltitude(h);
    double ddy = acc * cos(angle);
    return ddy;
}

 // x = x0 + dxt
inline double horizontalPosition(Velocity &v, Position &p)
{

    p.x = p.getMetersX() + v.getDx() * t;
}

inline double verticalPosition(Velocity &v, Position &p)
{
    p.y = p.getMetersY() + v.getDy() *t;
}

// x = x0 + dxt +1/2 ddx t^2
inline double horizontalDistance(Velocity &v , Position &p)
{

    double acc = horizontalAcceleration(p);
    p.x =  horizontalPosition(v,p) + 0.5* acc*(t*t);
}

inline double verticalDistance(Velocity &v, Position &p)
{
    double acc = verticalAcceleration(v);
    p.y =  verticalPosition(v,p) + 0.5* acc*(t*t);
}

const double g = 9.8; // m/s^2
const double rEarth = 637800; // m
const double t = 48; // f/s


// Find Horizontal and Vertical Position 
// Find Horizontal and Vertical Velocity
// Find Acceleration due to gravity at height
// Apply accelration and find New Position

