/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include "counter.h"

struct CounterImp
{
  enum Directions direction;
  int increment;
  int value;
  bool isused;
};

struct CounterImp c1 = {UNDEFINED,0,0,false};
struct CounterImp c2 = {UNDEFINED,0,0,false};
struct CounterImp c3 = {UNDEFINED,0,0,false};
struct CounterImp c4 = {UNDEFINED,0,0,false};
struct CounterImp c5 = {UNDEFINED,0,0,false};
struct CounterImp c6 = {UNDEFINED,0,0,false};
struct CounterImp c7 = {UNDEFINED,0,0,false};
struct CounterImp c8 = {UNDEFINED,0,0,false};
static Counter counters_so_far[COUNTER_COUNT] = {&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8};

Counter new_counter(enum Directions direction)
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
    if (!counters_so_far[i]->is_used)
    {
      counters_so_far[i]->is_used=true;
      counters_so_far[i]->type=type;
      return counters_so_far[i];
    }
  }
  return 0;
}

void init()
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
    counters_so_far[i]->is_used=false;
    counters_so_far[i]->increment_value=1;
    counters_so_far[i]->value=0;
    counters_so_far[i]->type=UNDEFINED;
  }
}

void set_direction(Counter counter,enum Directions direction)
{
  c->type=type;
}

enum Directions get_direction(Counter counter)
{
  return c->type;
}

void increment(Counter counter)
{
  if (c->type==UP)
  {
    c->value+=c->increment_value;
  }
  else if (c->type==DOWN)
  {
    c->value-=c->increment_value;
  }
}

void set_increment_value(Counter counter,int value)
{
  if(value>=0) c->increment_value=value;
}

int get_increment_value(Counter counter)
{
  return c->increment_value;
}

bool set_value(Counter counter,int value)
{
  if (c->type==DOWN)
  {
    c->value=value;
      return true;
  }
  return false;
}

int get_value(Counter counter)
{
  return c->value;
}
