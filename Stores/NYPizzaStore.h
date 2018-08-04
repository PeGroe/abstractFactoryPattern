#pragma once

#include "../Stores/iStore.h"

class NYPizzaStore : public iStore
{
protected:
  iPizza* createPizza(std::string pizzaType) override;
};