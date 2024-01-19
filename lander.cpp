//
//  lander.cpp
//  Moonlander
//
//  Created by Gergo Medveczky on 2/10/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#include "lander.h"
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
//TODO: update point constructor here
Lander ::Lander() : point(100, 100)
{
    setFuel(500);
    setLanded(false);
    setAlive(true);
}


// set the FUEL!
void Lander::setFuel(int fuel)
{
    this -> fuel = fuel;
}
// getter for alive
bool Lander::isAlive() const
{
    return alive;
}
// getter for landed
bool Lander::isLanded() const
{
    return landed;
}
//getter for fuel
int Lander::getFuel() const
{
    return fuel;
}
//getter for thrust: true or false
bool Lander::canThrust() const
{
 if (getFuel() > 0 && !isLanded())
 {
     return true;
 }
else
{
    return false;
}
}
//setter for landed
void Lander::setLanded(bool landed)
{
    this -> landed = landed;
}
//setter for alive
void Lander::setAlive(bool alive)
{
    this -> alive = alive;
}
//setter for gravity
void Lander::applyGravity(float gravity)
{
    velocity.setDy(velocity.getDy() - gravity);
    
}
//setter for applythrustleft
void Lander::applyThrustLeft()
{
    velocity.setDx(velocity.getDx() + .1);
    setFuel(getFuel() - 1);
}
//setter for applythrust right
void Lander::applyThrustRight()
{
    velocity.setDx(velocity.getDx() - .1);
    setFuel(getFuel() - 1);
}
//setter for applythrust bottom
void Lander::applyThrustBottom()
{
    velocity.setDy(velocity.getDy() + .3);
    setFuel(getFuel() - 3);
}

//getter for point
Point Lander:: getPoint() const
{
    return point;
}

//setter for point
//void setPoint(Point point)
//{
//    this -> point = point;
//}

//getter for velocity
Velocity Lander:: getVelocity() const
{
    return velocity;
}

//advance function
void Lander:: advance()
{
    point.addX(velocity.getDx());
    point.addY(velocity.getDy());
    //point.setX(getX() + Dx)
}

//draw function
void Lander:: draw()
{
    drawLander(point);
}
