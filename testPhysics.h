//
//  testPhysics.h
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



class Physics
{
public:
    void run()
    {
        test_height_aboveEarth();
        test_height_geoSync_orbit();
        
        test_gravity_at_altitude_negative();
        test_gravity_at_altitude_geoSync_orbit();

        
        test_horizontal_distance();
        test_vertical_distance();
        
        test_vertical_velocity();
        test_horizontal_velocity();
        
    };
private:
    
    void test_height_aboveEarth()
    {
        // SETUP
        Physics p;
        
        // EXERCISE
        double h = p.heightAboveEarth(0,0);
        
        // VERIFY
        assert(h == -6378000);
        
        
        // TEARDOWN
        
    }
    
    void test_height_geoSync_orbit()
    {
        // SETUP
        Physics p;
        
        // EXERCISE
        double h = p.heightAboveEarth(0.0, 42164000.0);
        
        // VERIFY
        assert(h == 35786000)
        
        // TEARDOWN
        
    }
    
    void test_gravity_at_altitude_negative()
    {
        // SETUP
        Physic p;
        
        // EXERCISE
        double acc = p.accGravityAtAltitude(-6378000);
        
        // VERIFY
        assert(acc == -2.45);
        
        
    }
    
    void  test_gravity_at_altitude_geoSync_orbit()
    {
        // SETUP
        Physic p;
        
        // EXERCISE
        double h =35786000;
        double acc = p.accGravityAtAltitude(h);
        
        // VERIFY
        assert(acc == -0.224);
        
        // TEARDOWN
    }
    void test_horizonal_distance()
    {
        Physics p;
        Direction d;
        Velocity v(-2690,1540);
        Position p(21081999,36515095.13);
        Acceleration acc;
        
        p.addMetersX(v, p, acc);
        
        assert(p.getX() == 20952732.22)
        
    }
    
    
    void test_vertical_distance()
    {
        Physics p;
        Direction d;
        Velocity v(-2690,1540);
        Position p(21081999,36515095);
        Acceleration acc;
        
        p.addMetersY(v, p, acc);
        
        assert(p.getY() == 36588823.53)
        
    }
    
    void test_vertical_velocity()
    {
        Velocity v(-2,0);
        Acc a;
        v.addDy(a);
        
        assert();
    }
    void test_horizontal_velocity()
    {
        Velocity v;
        Acc a;
        v.addDx(a);
        
        assert();

    }
    
    
    
};



