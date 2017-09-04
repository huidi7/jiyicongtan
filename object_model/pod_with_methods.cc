// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#include "base/base.h"

class A {
 public:
  A(int i, char j, float k) : a(i), b(j), c(k) {}

  int GetA() { return a; }
  char GetB() { return b; }
  float GetC() const { return c; }

 private:
  int a;
  char b;
  float c;
};

int main() {
  A t(0x12345678, 'b', 12.5);
  printf("sizeof(t) = %ld\n", sizeof(t));

  HexDump(&t);
  return 0;
}
