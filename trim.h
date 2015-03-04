
//
// Copyright (c) 2015 Little Star Media, Inc.
// MIT licensed
//

#ifndef LS_TRIM_H
#define LS_TRIM_H 1

namespace littlstar {

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

} // littlstar

#endif // LS_TRIM_H
