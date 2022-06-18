//
//  acceleration.cpp
//  Lab07
//
//  Created by Sulav Dahal on 6/16/22.
//

#include <stdio.h>
#include "acceleration.h"


void Acceleration:: setAccelerationDirection(double acc, Direction &direction)
{
    ddx = acc * direction.getX();
    ddy = acc * direction.getY();
}
