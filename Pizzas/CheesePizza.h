#pragma once

#include "iPizza.h"

class IIngredients;

class CheesePizza : public iPizza
{
public:
  CheesePizza(IIngredients* ingredientFactory);
  virtual ~CheesePizza();

  void prepare() override;

private:
  IIngredients* ingredientFactory;
};
