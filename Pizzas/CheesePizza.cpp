#include "CheesePizza.h"
#include <string>
#include <iostream>

#include "../Ingredients/IIngredients.h"
//#include "../Ingredients/Dough/IDough.h"

CheesePizza::CheesePizza(IIngredients* ingredientFactory)
{
  this->ingredientFactory = ingredientFactory;
}

CheesePizza::~CheesePizza()
{
}

void CheesePizza::prepare()
{
  std::cout << "Preparing " << pizzaName << std::endl;
  dough  = ingredientFactory->createDough();
  sauce  = ingredientFactory->createSauce();
  cheese = ingredientFactory->createCheese();
  clam   = ingredientFactory->createClams();
}
