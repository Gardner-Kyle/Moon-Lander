/*************************************************************
 * File: lander.h
 * Author: Kyle Gardner
 *
 * Description: Contains the definition of the lander class.
 *************************************************************/

#ifndef LANDER_H
#define LANDER_H

#include "uiInteract.h"
#include "uiDraw.h"
#include "point.h"
#include "velocity.h"

class Lander
{
  private:
   bool alive;
   bool landed;
   float fuel;
   Velocity velocity;
   Point point;
   Point points;
  public:
   Lander();
   Lander(Point point, Velocity velocity, float fuel);
   Point getPoint() const;
   Velocity getVelocity() const;
   int getFuel() const;
   void setPoint(Point point);
   void setVelocity(Velocity velocity);
   bool isAlive() const;
   bool isLanded() const;
   void setAlive(bool alive);
   void setLanded(bool landed);
   bool canThrust();
   void applyGravity(float GRAVITY_AMOUNT);
   void advance();
   void applyThrustBottom();
   void applyThrustLeft();
   void applyThrustRight();
   void draw();
   void setFuel(float fuel);
};

#endif
