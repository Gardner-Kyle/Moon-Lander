/****************************************************************************************
 * File: velocity.cpp
 * Author: Kyle Gardner
 *
 * Description: Contains function to retrieve and set changes in position of the lander.
 ****************************************************************************************/

#include "velocity.h"

float Velocity :: getDx() const
{
        return dx;
}

float Velocity :: getDy() const
{
        return dy;
}

void Velocity :: setDx(float dx)
{
   this->dx = dx;
}

void Velocity :: setDy(float dy)
{
   this->dy = dy;
}



