//
//  physics.h
//  Lab07
//
//  Created by Sulav Dahal on 6/1/22.
//

#pragma once

#define PI 3.14159265
#include <stdio.h>
#include <cmath>


class Physics
{
private:
    const double g = 9.8; // m/s^2
    const double rEarth = 637800; // m
    const double t = 48; // f/s
    
public:
    void horizontalPosition(Velocity &v, Position &p)
    {
        p.addMetersX(v.getDx() * t);
    };
    
    void verticalPosition(Velocity &v, Position &p)
    {
        p.addMetersY(v.getDy() *t); 
    }
    
    
    double accGravityAtAltitude(double h)
    {
        double acc = g* pow((rEarth/(rEarth+h)),2);
        return acc;
    }

    double heightAboveEarth(double x, double y)
    {
        double h = sqrt(x*x + y*y) - rEarth;
        return h;
    }

    void  directionOfGravityPull(double x, double y, double &angle)
    {
        // Returns angle in degree
        angle = atan2(x,y) *180 / PI ;
        std:: cout << angle << "My Angle" << std:: endl;
    }

     // Sin
    double horizontalAcceleration(Position &p, double &angle)
    {
//        double rc = cos(angle*PI/180);
//        double rs = sin(angle*PI/180);
        
        directionOfGravityPull(p.getMetersX(),p.getMetersY(), angle);
        double h = heightAboveEarth(p.getMetersX(),p.getMetersY());

        double acc = accGravityAtAltitude(h);

        double ddx = acc*sin(angle*PI/180);
        return ddx;
    }


    // Cos
    double verticalAcceleration(Position &p, double &angle)
    {
//        double rc = cos(angle*PI/180);
//        double rs = sin(angle*PI/180);
//        directionOfGravityPull(rs*p.getMetersY(), rc*p.getMetersY(), angle);
        double h = heightAboveEarth(p.getMetersX(),p.getMetersY());
        double acc = accGravityAtAltitude(h);
        double ddy = acc * cos(angle*PI/180);
        return ddy;
    }
    


//     // x = x0 + dxt
//    double horizontalPosition(Velocity &v, Position &p)
//    {
//
//        p.x = p.getMetersX() + v.getDx() * t;
//    }
//
//    double verticalPosition(Velocity &v, Position &p)
//    {
//        p.y = p.getMetersY() + v.getDy() *t;
//    }
//
//    // x = x0 + dxt +1/2 ddx t^2
    void horizontalDistance(Position &p, Velocity &v, double ddx)
    {
        
        p.addMetersX(v.getDx() *t + 0.5* ddx*(t*t));
    }

    void verticalDistance(Position &p, Velocity &v, double ddy )
    {
        double m = v.getDy() *t;
        p.addMetersY(m + 0.5* ddy*(t*t));
    }
    
    void verticalVelocity(Velocity &v, double ddy)
    {
        v.addDy(ddy*t);
    }
    
    void horizontalVelocity(Velocity &v, double ddx)
    {
        v.addDx(ddx*t);
    }

};



