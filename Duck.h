#pragma once
#ifndef DUCK_H
#define DUCK_H

#include "Fly.h"
#include "Swim.h"

class Duck : public Fly, public Swim {
public:
    void quack();
};

#endif