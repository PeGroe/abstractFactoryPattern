#pragma once

#include "IIngredients.h"

class NYPizzaIngredientFactory : public IIngredients
{
public:
  IDough * createDough() const override;
  ISauce* createSauce() const override;
  ICheese* createCheese() const override;
  std::vector<IVeggies*> createVeggies() const override;
  IPepperoni* createPepperoni() const override;
  IClams* createClams() const override;
};
