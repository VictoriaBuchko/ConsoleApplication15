#pragma once
using namespace std;
#include "fly.h"
#include "swim.h"

class Duck : public Fly, public Swim {
public:
    void quack();
};

