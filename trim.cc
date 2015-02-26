
//
// Copyright (c) 2015 Little Star Media, Inc.
// MIT licensed
//

#include <algorithm> // find_if
#include <functional> // not1
#include <string>
#include "trim.h"

std::string &
Trim(std::string &s){
  return TrimLeft(TrimRight(s));
}

std::string &
TrimLeft(std::string &s){
  s.erase(
      s.begin()
    , std::find_if(
          s.begin()
        , s.end()
        , std::not1(std::ptr_fun<int, int>(std::isspace))
      )
  );
  return s;
}

std::string &
TrimRight(std::string &s){
  s.erase(
      std::find_if(
          s.rbegin()
        , s.rend()
        , std::not1(std::ptr_fun<int, int>(std::isspace))
      ).base()
    , s.end()
  );
  return s;
}
