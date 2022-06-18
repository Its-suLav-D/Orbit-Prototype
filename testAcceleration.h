//
//  testAcceleration.h
//  Lab07
//
//  Created by Sulav Dahal on 6/16/22.
//

#pragma once

#include <iostream>
#include "position.h"
#include "velocity.h"
#include "acceleration.h"
#include "direction.h"

#include <cassert>

class TestAcceleration
{
public:
    void run()
    {
        stationary_acceleration();
        default_constructor();
        non_default_constructor();
        acceleration_at_30Degree();
        set_acceleration_direction();
        test_add_velocity();
        test_get_velocity_from_acceleration();
        test_get_DDX();
        test_get_DDY();
        
    }
private:
    void stationary_acceleration()
    {
        // Setup
        // Exercise
        Acceleration acc;
        
        assert(acc.getDDX() == 0.0);
        assert(acc.getDDY() == 0.0);
    }
    
    void default_constructor()
    {
        // Setup
        // Exercise
        Acceleration acc;
        
        assert(acc.getDDX() == 0.0);
        assert(acc.getDDY() == 0.0);
    }
    
    void non_default_constructor()
    {
        // SETUP
        Direction d;
        d.setRadians(0.0);
        
        // EXERCISE
        Acceleration acc(-9.8,d);
        
        // VERIFY
        assert(acc.getDDX() == 0.0);
        assert(acc.getDDY() == 0.0);
        
        // TEARDOWN
    
    }
    
    void acceleration_at_30Degree()
    {
        Direction d;
        d.setDegrees(30.0);
        
        // Exercise
        Acceleration acc(-8.5, d);
        
        assert(acc.getDDX() == 8.39);
        assert(acc.getDDY() == -1.31);
        
    }
    
    
    void set_acceleration_direction()
    {
        Direction d;
        d.setDegrees(45);
        
        Acceleration acc;
        
        acc.setAccelerationDirection(-8.5, d);
        
        assert(acc.getDDY() == -7.23);
        assert(acc.getDDX() == -4.46);
    }
    
    void test_add_velocity()
    {
        
        Velocity v;
        v.setDy(0.0);
        v.setDx(-3100.0);
        
        Acceleration acc;
        
    }
    
    void test_get_velocity_from_acceleration()
    {
        Acceleration acc;
        Velocity v;
        
//        acc.ddy = 0.0;
//        acc.ddx = 0.0;
        
        v = acc.getVelocity(48);
        
        assert(v.getDx() == 0);
        assert(v.getDy() == 0);
    
    }
    
    void test_get_DDX()
    {
        Acceleration a;
        
        assert(a.getDDX() == 0.0);
    }
    void test_get_DDY()
    {
        Acceleration a;
        
        assert(a.getDDY() == 0.0);
    }
    
};
