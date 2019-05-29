/*************************************************************
 * File: velocity.h
 * Author: Kyle Gardner
 *
 * Description: Contains the definition of the velocity class.
 *************************************************************/

#ifndef VELOCITY_H
#define VELOCITY_H

#include "uiDraw.h"
#include "uiInteract.h"

class Velocity
{
  private:
   float dx;
   float dy;
  public:
   Velocity()
   {
      //dx = 0;
      //dy = 0;
   }

   Velocity(float dx, float dy)
   {
      setDx(dx);
      setDy(dy);
   }
   float getDx() const;
   float getDy() const;
   void setDx(float dx);
   void setDy(float dy);
};

#endif
