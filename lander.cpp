/*************************************************************
 * File: lander.cpp
 * Author: Kyle Gardner
 *
 * Description: Contains the implementations of the
 *  method bodies for the lander class.
 *************************************************************/

#include "lander.h"

Lander :: Lander()
{
   setAlive(true);
   setLanded(false);
   velocity.setDx(0.0);
   velocity.setDy(0.0);
}
Lander :: Lander(Point point, Velocity velocity, float fuel)
{
   setPoint(point);
   setVelocity(velocity);
   setFuel(fuel);
   setAlive(true);
   setLanded(false);
}
Point Lander :: getPoint() const
{
        return point;
}

Velocity Lander :: getVelocity() const
{
        return velocity;
}

int Lander :: getFuel() const
{
   return fuel;
}

bool Lander :: isAlive() const
{
        return alive;
}

bool Lander :: isLanded() const
{
        return landed;
}

void Lander :: setPoint(Point point)
{
   this->point = point;
}

void Lander :: setVelocity(Velocity velocity)
{
   this->velocity = velocity;
}

void Lander :: setAlive(bool alive)
{
   this->alive = alive;
}

void Lander :: setLanded(bool landed)
{
   this->landed = landed;
}
void Lander :: setFuel(float fuel)
{
   this->fuel = fuel;
}

bool Lander :: canThrust()
{
   return true;
}
void Lander :: applyGravity(float GRAVITY_AMOUNT)
{
   velocity.setDy(velocity.getDy() - GRAVITY_AMOUNT);
}
void Lander :: applyThrustBottom()
{
   if (fuel > 0)
   {
      velocity.setDy(velocity.getDy() + 2);
      setFuel(fuel - 1);
      drawLanderFlames(point, true, false, false);
   }
}

void Lander :: applyThrustLeft()
{
   if (fuel > 0)
   {
      velocity.setDx(velocity.getDx() + 1);
      setFuel(fuel - 1);
      drawLanderFlames(point, false, true, false);
   }
}

void Lander :: applyThrustRight()
{
   if (fuel > 0)
   {
      velocity.setDx(velocity.getDx() - 1);
      setFuel(fuel - 1);
      drawLanderFlames(point, false, false, true);
   }
}
void Lander :: advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy());
}
void Lander :: draw()
{
   drawLander(point);
   for (int i = 0; i < 50; i++)
      drawDot({random(-250,250), random(-250,250)});

}
