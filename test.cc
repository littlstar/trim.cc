
#include <assert.h>
#include <string>
#include "trim.h"

using namespace littlstar;

int
main(){
  std::string s;

  s = " \n \t hello world \n \t ";
  TrimLeft(s);
  assert("hello world \n \t " == s);

  s = " \n \t hello world \n \t ";
  TrimRight(s);
  assert(" \n \t hello world" == s);

  s = " \n \t hello world \n \t ";
  Trim(s);
  assert("hello world" == s);

  return 0;
}
