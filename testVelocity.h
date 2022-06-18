//
//  testVelocity.h
//  Lab07
//
//  Created by Sulav Dahal on 6/17/22.
//

#pragma once
#include "velocity.h"
#include <cassert>
#include <iostream>


using namespace std;


class TestVelocity
{
public:
    void run()
    {
        default_constructor();
        non_default_constructor();
        test_assign_speed_direction();
        test_add_velocity();
        test_get_speed();
        test_set_speed();
        test_set_direction();
        
        test_addDX();
        test_addDY();
    
        
        startAtZeroAccelerateX();
        startAtTenTenAccelerateX();
        startAtZeroAccelerateXAndY();
        startAtZeroXDecceleration();
        startAtTenTenXDecceleration();
        decelerateXAndY();
    }

private:
    
    
    void default_constructor()
    {
        // SETUP
        // EXERCISE
        Velocity v;
        
        // Verify
        assert(v.dx == 0.0 && v.dy == 0.0)
        
        // TEARDOWN
    }
    
    void non_default_constructor()
    {
        // SETUP
        // EXERCISE
        Velocity v(-2685, 1550);
        
        // VERIFY
        assert(v.dx == -2685 && v.dy == 1550)
        
        // TEARDOWN
    }
    
    void test_assign_speed_direction()
    {
        // SETUP
        Direction d;
        d.radians = -0.98;
        
        // EXERCISE
        Velocity v(3075, d);
        
        // VERIFY
        assert(v.getDx() == -3038.12 && v.getDy() == 474.32)
        
        
        // TEARDOWN
    }
    
    void test_add_velocity()
    {
        Velocity v(2000,2000);
        
        Velocity vAdd(v);
        
        assert(vAdd.getDx() == 2000 && vAdd.getDy() == 2000);
    }
    
    
    
    void test_get_speed()
    {
        Velocity v(2500,2500);
        
        double speed = v.getSpeed();
        
        assert(speed == 3535.53)
    }
    
    void test_set_speed()
    {
        
        Direction d;
        d.radians = 0.5;
        
        Velocity v;
        
        v.setSpeed(2500,d);
        
        assert(v.getDx() == 1695.02 && v.getDy() == 3102.7);
    
    }
        
    void test_set_direction()
    {
        
        Direction d;
        d.radians = 0.5;
        
        Velocity v(3000,3000);
        
        v.setSpeedDirection(d);
        
        assert(v.getDx() == 2034.03 && v.getDy() == 3723.27);
    }
    
    void test_addDX()
    {
        Velocity v;
        
        v.addDx(2000);
        
        assert(v.getDx() == 2000);
    }
    
    void test_addDY()
    {
        Velocity v;
        
        v.addDy(2000);
        
        assert(v.getDy() == 2000);
    }
    

    
    void startAtZeroAccelerateX()
    {
        //setup
        Velocity vel;
        vel.setDx(0.0);
        vel.setDy(0.0);

        //exercise
        // ?
        //verify
        assert(vel.getDx() == 1.0);
        assert(vel.getDy() == 0.0);
    } //teardown

    void startAtTenTenAccelerateX()
    {
        //setup
        Velocity vel;
        vel.setDx(10.0);
        vel.setDy(10.0);

        //exercise
        // ?
        //verify
        assert(vel.getDx() == 20.0);
        assert(vel.getDy() == 10.0);
    } //teardown

    void startAtZeroAccelerateXAndY()
    {
        //setup
        Velocity vel;
        vel.setDx(0.0);
        vel.setDy(0.0);

        //exercise
        // ?
        //verify
        assert(vel.getDx() == 10.0);
        assert(vel.getDy() == 10.0);
    } //teardown

    void startAtZeroXDecceleration()
    {
        //setup
        Velocity vel;
        vel.setDx(0.0);
        vel.setDy(0.0);

        //exercise
        // ?
        //verify
        assert(vel.getDx() == -1.0);
        assert(vel.getDy() == 0.0);
    } //teardown

    void startAtTenTenXDecceleration()
    {
        //setup
        Velocity vel;
        vel.setDx(10.0);
        vel.setDy(10.0);

        //exercise
        // ?
        //verify
        assert(vel.getDx() == 0.0);
        assert(vel.getDy() == 10.0);
    } //teardown

    void decelerateXAndY()
    {
        //setup
        Velocity vel;
        vel.setDx(0.0);
        vel.setDy(0.0);

        //exercise
        // ?
        //verify
        assert(vel.getDx() == -10.0);
        assert(vel.getDy() == -10.0);
    } //teardown
    
}
