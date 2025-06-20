// Wokwi Custom Chip - For docs and examples see:
// https://docs.wokwi.com/chips-api/getting-started
//
// SPDX-License-Identifier: MIT
// Copyright 2023 Mariano Ames Oviedo

#include "wokwi-api.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    pin_t pin_a0;
    pin_t pin_vcc;
    pin_t pin_gnd;
    uint32_t hr_attr;
} chip_state_t;

void chip_init() {
  chip_state_t *chip = malloc(sizeof(chip_state_t));

  // TODO: Initialize the chip, set up IO pins, create timers, etc.

  printf("Hello from custom chip!\n");
}
