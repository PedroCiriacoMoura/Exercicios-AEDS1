#ifndef myKarel_hpp
#define myKarel_hpp
#include "karel.hpp"
/*
   mykarel  - myKarel robot definitions.
   @author  779139_PEDRO_MARCELO_CIRIACO_MOURA
   @version 0.1 - 2020
 */
class MyRobot : public Robot
{
public:
   void turnRight()
   {
      if (checkStatus())
      {
         turnLeft();
         turnLeft();
         turnLeft();
      }
   }
   void turnDown()
   {
      if (checkStatus())
      {
         turnLeft();
         turnLeft();
      }
   }

   void moveN(int steps)
   {
      int step = 0;
      for (step = 0; step < steps; step = step + 1)
      {
         move();
      }
   }  
   void pickBeepers(int n1)
   {
      int bolinha = 0;
      while (n1 > bolinha)
      {
         pickBeeper();
         n1 = n1-1;
      }
   }

   void putBeepers(int n1)
   {
      int bolinha = 0;
      while (n1 > bolinha)
      {
         putBeeper();
         n1 = n1-1;
      }
   }

   void doTask()
   {
      move();
      pickBeepers(9);
      move();
      putBeepers(9);
      move();
      pickBeepers(9);
      move();
      putBeepers(9);
      move();
      pickBeepers(9);
      moveN(2);
      pickBeepers(9);
      moveN (2);
      putBeepers(18);
      turnDown();
      moveN(9);
      turnDown();
   }
};
#endif
