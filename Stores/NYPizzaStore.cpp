#include "NYPizzaStore.h"
#include "../Ingredients/NYPizzaIngredientFactory.h"
#include "../Pizzas/CheesePizza.h"

iPizza * NYPizzaStore::createPizza(std::string pizzaType)
{
  iPizza* pizza = nullptr;
  NYPizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();

  if (pizzaType == "cheese")
  {
    pizza = new CheesePizza(ingredientFactory);
    pizza->setName("New York Style Cheese Pizza");
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
