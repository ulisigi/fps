#pragma once

#include <cstdlib>

struct Map
{
    size_t w, h;
    Map();
    int get(const size_t i, const size_t j) const;
    bool is_empty(const size_t i, const size_t j) const;
};