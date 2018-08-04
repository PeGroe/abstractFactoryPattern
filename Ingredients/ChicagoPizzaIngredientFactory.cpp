#include "ChicagoPizzaIngredientFactory.h"

#include "Dough\ThickCrustDough.h"
#include "Sauce\PlumTomatoSauce.h"
#include "Cheese\MozzarellaCheese.h"
#include "Veggies\Spinach.h"
#include "Veggies\EggPlant.h"
#include "Veggies\BlackOlives.h"
#include "Pepperoni\SlicedPepperoni.h"
#include "Clams\FrozenClam.h"

IDough * ChicagoPizzaIngredientFactory::createDough() const
{
  return new ThickCrustDough();
}

ISauce * ChicagoPizzaIngredientFactory::createSauce() const
{
  return new PlumTomatoSauce();
}

ICheese * ChicagoPizzaIngredientFactory::createCheese() const
{
  return new MozzarellaCheese();
}

std::vector<IVeggies*> ChicagoPizzaIngredientFactory::createVeggies() const
{
  std::vector<IVeggies*> veggies;
  veggies.push_back(new Spinach());
  veggies.push_back(new EggPlant());
  veggies.push_back(new BlackOlives());

  return veggies;
}

IPepperoni * ChicagoPizzaIngredientFactory::createPepperoni() const
{
  return new SlicedPepperoni();
}

IClams * ChicagoPizzaIngredientFactory::createClams() const
{
  return new FrozenClam();
}
