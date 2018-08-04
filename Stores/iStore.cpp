#include "iStore.h"
#include "../Pizzas/iPizza.h"

iPizza * iStore::orderPizza(std::string pizzaType)
{
  iPizza* pizza;

  pizza = createPizza(pizzaType);

  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();

  return pizza;
}
