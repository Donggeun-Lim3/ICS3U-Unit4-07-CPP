// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program prints five integers per line

#include <iostream>


main() {
    int counter;

    for (counter = 1000; counter < 2001; counter++) {
        if (counter % 5 != 4) {
            std::cout << counter << " ";
        } else {
            std::cout << counter << std::endl;
        }
    }
}
