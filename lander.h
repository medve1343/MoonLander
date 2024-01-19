//
//  lander.hpp
//  Moonlander
//
//  Created by Gergo Medveczky on 2/10/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#ifndef lander_h
#define lander_h
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
// Lander class
class Lander
{
private:
    Point point;
    Velocity velocity;
    int fuel;
    bool landed;
    bool alive;
public:
    //Lander default constructor
    Lander();
    // setter for Fuel
    void setFuel();
    //setter for point
    //void setPoint(Point point);
    // getter for point
    Point getPoint() const;
    // getter for velocity
    Velocity getVelocity() const;
    // bool YES/NO is alive
    bool isAlive() const;
    // bool YES/NO is landed
    bool isLanded() const;
    // getter for fuel
    int getFuel() const;
    // bool lunch the thrusts
    bool canThrust() const;
    // setter for landed
    void setLanded(bool landed);
    // setter for alive
    void setAlive(bool alive);
    // setter for fuel
    void setFuel(int fuel);
    // apply Gravity
    void applyGravity(float gravity);
    // apply Thrust left
    void applyThrustLeft();
    // apply Thrust right
    void applyThrustRight();
    // apply Thrust bottom
    void applyThrustBottom();
    // advance
    void advance();
    // draw
    void draw();
    
};

#endif /* lander_hpp */

