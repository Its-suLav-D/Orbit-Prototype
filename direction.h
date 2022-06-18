//
//  direction.h
//  Lab07
//
//  Created by Sulav Dahal on 6/16/22.
//

#pragma once

#define _USE_MATH_DEFINES
#define PI 3.14159265

#include <stdio.h>
#include <cmath>

class Direction
{
public:
   Direction() :radians(0.0) {}
   Direction(double degrees): radians(0.0)
    {
       radians = radiansFromDegrees(degrees);
    }
   Direction(const Direction &rhs): radians(rhs.radians) {}
   Direction& operator = (const Direction& rhs)
   {
      radians = rhs.radians;
      return *this;
   }
   void setRadians(double radians);
   void setDegrees(double degrees);
   double getRadians(){return radians; }
   
   void rotate(double amount)
   {
      radians+= amount;
   }
   
   double radiansFromDegrees(double degrees)
   {
      return (degrees/ 360.0) * (2 * PI);
   }
   
   void setDirectionFromPosition(double x , double y)
   {
      radians = atan2(x,y);
   }
   
   double getX(){return sin(radians);  }
   double getY(){return cos(radians); }
    
private:
   double radians;
};
