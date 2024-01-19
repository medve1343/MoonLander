//
//  velocity.hpp
//  Moonlander
//
//  Created by Gergo Medveczky on 2/10/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#ifndef velocity_h
#define velocity_h

#include <stdio.h>
class Velocity
{
private:
    float Dx;
    float Dy;
public:
    //Non-default constructor
    Velocity();
    //Default constructor
    Velocity(float Dx, float Dy);
    //getter for Dx
    float getDx() const;
    //getter for Dy
    float getDy() const;
    //setter for Dx
    void setDx(float Dx);
    //setter for Dy
    void setDy(float Dy);
};
#endif /* velocity_hpp */
