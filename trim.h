
//
// Copyright (c) 2015 Little Star Media, Inc.
// MIT licensed
//

#ifndef TRIM_H
#define TRIM_H 1

#include <string>

/**
 * Trim whitespace from `s`.
 */

std::string &
Trim(std::string &s);

/**
 * Trim leading whitespace from `s`.
 */

std::string &
TrimLeft(std::string &s);

/**
 * Trim trailing whitespace from `s`.
 */

std::string &
TrimRight(std::string &s);

#endif // TRIM_H
