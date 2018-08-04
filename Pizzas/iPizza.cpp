#include "iPizza.h"
#include <iostream>

iPizza::iPizza()
{
}

iPizza::~iPizza()
{
}

std::string iPizza::getName() const
{
  return pizzaName;
}

void iPizza::setName(std::string name)
{
  pizzaName = name;
}

void iPizza::bake() const
{
  std::cout << "Bake for 25 minutes at 350 degrees" << std::endl;
}

void iPizza::cut() const
{
  std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void iPizza::box() const
{
  std::cout << "Place pizza in official PizzaStore box" << std::endl;
}
