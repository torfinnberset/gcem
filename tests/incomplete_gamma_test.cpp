/*################################################################################
  ##
  ##   Copyright (C) 2016-2017 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   GCE-Math is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   GCE-Math is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

// g++-mp-7 -O2 -Wall -std=c++11 -I./../include incomplete_gamma_test.cpp -o incomplete_gamma.test -framework Accelerate

#include <math.h>
#include <iostream>
#include <iomanip>
#include "gcem.hpp"

int main()
{
    constexpr double x = 1;

    double shape = 2;
    double scale = 2;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_inc_gamma(" << x <<") = " << std::setprecision(18) << gcem::incomplete_gamma(shape,x/scale) << std::endl;

    return 0;
}