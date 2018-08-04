#include "NYPizzaIngredientFactory.h"

#include "Dough\ThinCrustDough.h"
#include "Sauce\MarinaraSauce.h"
#include "Cheese\ReggianoCheese.h"
#include "Veggies\Garlic.h"
#include "Veggies\Onion.h"
#include "Veggies\Mushroom.h"
#include "Veggies\RedPepper.h"
#include "Pepperoni\SlicedPepperoni.h"
#include "Clams\FreshClams.h"

IDough * NYPizzaIngredientFactory::createDough() const
{
  return new ThinCrustDough();
}

ISauce * NYPizzaIngredientFactory::createSauce() const
{
  return new MarinaraSauce();
}

ICheese * NYPizzaIngredientFactory::createCheese() const
{
  return new ReggianoCheese();
}

std::vector<IVeggies*> NYPizzaIngredientFactory::createVeggies() const
{
  std::vector<IVeggies*> veggies;
  veggies.push_back(new Garlic());
  veggies.push_back(new Onion());
  veggies.push_back(new Mushroom());
  veggies.push_back(new RedPepper());

  return veggies;
}

IPepperoni * NYPizzaIngredientFactory::createPepperoni() const
{
  return new SlicedPepperoni();
}

IClams * NYPizzaIngredientFactory::createClams() const
{
  return new FreshClams();
}
