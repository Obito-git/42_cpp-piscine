//
// Created by amyroshn on 6/7/22.
//

#ifndef EX01_DATASERIALIZER_HPP
#define EX01_DATASERIALIZER_HPP
#include "Data.hpp"
#include <stdint.h>

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif //EX01_DATASERIALIZER_HPP
