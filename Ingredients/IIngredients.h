#pragma once

#include <vector>

class IDough;
class ISauce;
class ICheese;
class IVeggies;
class IPepperoni;
class IClams;

class IIngredients
{
public:
  virtual IDough* createDough() const = 0;
  virtual ISauce* createSauce() const = 0;
  virtual ICheese* createCheese() const = 0;
  virtual std::vector<IVeggies*> createVeggies() const = 0;
  virtual IPepperoni* createPepperoni() const = 0;
  virtual IClams* createClams() const = 0;
};