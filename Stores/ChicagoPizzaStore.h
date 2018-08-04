#pragma once

#include "../Stores/iStore.h"

class ChicagoPizzaStore : public iStore
{
protected:
  iPizza* createPizza(std::string pizzaType) override;
};