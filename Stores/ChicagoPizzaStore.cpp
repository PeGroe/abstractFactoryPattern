#include "ChicagoPizzaStore.h"
#include "../Ingredients/ChicagoPizzaIngredientFactory.h"
#include "../Pizzas/CheesePizza.h"

iPizza * ChicagoPizzaStore::createPizza(std::string pizzaType)
{
  iPizza* pizza = nullptr;
  ChicagoPizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();

  if (pizzaType == "cheese")
  {
    pizza = new CheesePizza(ingredientFactory);
    pizza->setName("Chicago Style Cheese Pizza");
  }
  else if (pizzaType == "veggie")
  {

  }
  else if (pizzaType == "clam")
  {

  }
  else if (pizzaType == "pepperoni")
  {

  }

  return pizza;
}