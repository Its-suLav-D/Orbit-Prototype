//
//  physics.h
//  Lab07
//
//  Created by Sulav Dahal on 6/1/22.
//

#pragma once
#include <cmath>

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
inline double horizontalAcceleration(double x, double y)
{
    double angle = directionOfGravityPull(x,y);
    double h = heightAboveEarth(x,y);
    double acc = accGravityAtAltitude(h);
    double ddx = acc*sin(angle);
    return ddx;
}


// Cos
inline double verticalAcceleration(double x, double y)
{
    double angle = directionOfGravityPull(x,y);
    double h = heightAboveEarth(x,y);
    double acc = accGravityAtAltitude(h);
    double ddy = acc*cos(angle);
    return ddy;
}


inline double horizontalPosition(double x, double dx )
{
    return 0.0;
}

inline double verticalPosition(double y, double dy)
{
    return 0.0;
}

inline double horizontalDistance()
{
    return 0.0;
}

inline double verticalDistance()
{
    return 0.0;
}

double g = 9.8; // m/s^2
double rEarth = 637800; // m
double t = 48; // f/s


// Find Horizontal and Vertical Position 
// Find Horizontal and Vertical Velocity
// Find Acceleration due to gravity at height
// Apply accelration and find New Position

