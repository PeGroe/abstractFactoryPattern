#pragma once

#include <string>

class iPizza;

class iStore
{
public:
  iPizza* orderPizza(std::string pizzaType);

protected:
  virtual iPizza* createPizza(std::string pizzaType) = 0;
};