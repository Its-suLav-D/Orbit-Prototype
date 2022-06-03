////
////  physics.cpp
////  Lab07
////
////  Created by Sulav Dahal on 6/1/22.
////
//
//#include "velocity.h"
//#include "position.h"
//#include <cmath>
//
//#define PI 3.14159265
//
//const double g = 9.8; // m/s^2
//const double rEarth = 637800; // m
//const double t = 48; // f/s
//
//
//double accGravityAtAltitude(double h)
//{
//    double acc = g* pow((rEarth/(rEarth+h)),2);
//    return acc;
//}
//
// double heightAboveEarth(double x, double y)
//{
//    double h = sqrt(x*x + y*y) - rEarth;
//    return h;
//}
//
//double directionOfGravityPull(double x, double y)
//{
//    // Returns angle in Radians
//    double angle = atan2(x,y)/ 180 * PI;
//    return angle;
//}
//
//// Sin
//double horizontalAcceleration(Position &p)
//{
//    double angle = directionOfGravityPull(p.getMetersX(),p.getMetersY());
//
//    double h = heightAboveEarth(p.getMetersX(),p.getMetersY());
//
//    double acc = accGravityAtAltitude(h);
//
//    double ddx = acc * sin(angle);
//    return ddx;
//}
//
//
//// Cos
//double verticalAcceleration(Position &p)
//{
//    double angle = directionOfGravityPull(p.getMetersX(),p.getMetersY());
//    double h = heightAboveEarth(p.getMetersX(),p.getMetersY());
//    double acc = accGravityAtAltitude(h);
//    double ddy = acc * cos(angle);
//    return ddy;
//}
//
//
//void horizontalPosition(Velocity &v, Position &p)
//{
//
//    p.addMetersX(v.getDx() * t);
//
//}
//
//void verticalPosition(Velocity &v, Position &p)
//{
//    p.addMetersY(v.getDy()*t);
//}
//
//// x = x0 + dxt +1/2 ddx t^2
//void horizontalDistance(Velocity &v , Position &p)
//{
//
//    double acc = horizontalAcceleration(p);
//    horizontalPosition(v,p);
//    p.addMetersX(0.5* acc*(t*t));
//}
//
//void  verticalDistance(Velocity &v, Position &p)
//{
//    double acc = verticalAcceleration(p);
//    verticalPosition(v,p);
//    p.addMetersY(0.5* acc*(t*t));
//}
//
