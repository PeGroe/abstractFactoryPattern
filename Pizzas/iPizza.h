#pragma once

#include <vector>

class IDough;
class ISauce;
class IVeggies;
class ICheese;
class IPepperoni;
class IClams;

class iPizza
{
public:
  iPizza();
  virtual ~iPizza();

  std::string getName() const;
  void setName(std::string name);

  virtual void prepare() = 0;
  virtual void bake() const;
  virtual void cut() const;
  virtual void box() const;

protected:
  std::string pizzaName;

  IDough* dough;
  ISauce* sauce;
  std::vector<IVeggies*> veggies;
  ICheese* cheese;
  IPepperoni* pepperoni;
  IClams* clam;
};