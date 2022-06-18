//
//  testDirection.h
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

class TestDirection
{
public:
    void run()
    {
        test_set_radians();
        test_direction_set_negative();
        test_radians_from_degrees();
        test_rotate();
        test_set_direction_from_position();
        test_getX_direction();
        test_getY_direction();
        test_default_constructor();
        test_non_default_constructor();
        test_copy_direction();
        test_assign_equal_direction();
    }
private:
    void test_default_constructor()
    {
        Direction d;
        
        assert(d.getRadians() == 0.0);
    }
    
    void test_direction_set_negative()
    {
        // SETUP
        Direction d;
        
        // EXERCISE
        
        d.setRadians(-0.01);
        
        assert(d.getRadians() == -0.01);
        
        
    }
    
    void test_non_default_constructor()
    {
        Direction d(30);
        
        assert(d.getRadians() == 0.5);
        
    }
    
    void test_set_radians()
    {
        Direction d;
        d.setRadians(0.5);
        
        assert(d.getRadians() == 0.5)
    }
    
    void test_radians_from_degrees()
    {
        Direction d;
        d.radiansFromDegrees(30);
        
        assert(d.getRadians() == 0.5);
    }
    
    void test_rotate()
    {
        Direction d;
        d.rotate(0.1);
        
        assert(d.getRadians() == 0.1);
    }
    
    void test_set_direction_from_position()
    {
        Direction d;
        d.setDirectionFromPosition(2100, 0);
        
        assert(d.getRadians() == 1.58);
    
    }
    
    void test_getX_direction()
    {
        Direction d;
        
        d.setRadians(0.5);
        
        assert(d.getX() == 0.48);
    }
    
    void test_getY_direction()
    {
        Direction d;
        
        d.setRadians(0.5);
        
        assert(d.getY() == 0.88);
    }
    
    void test_copy_direction()
    {
        Direction d;
        d.setRadians(0.5);
        
        Direction d2 (d);
        
        assert(d2.getRadians() == 0.5);
        
    }
    
    void test_assign_equal_direction()
    {
        Direction d;
        d.setRadians(0.99);
        
        Direction d2;
        d2= d1;
        
        assert(d2.getRadians() == 0.99);
    }
    

};
