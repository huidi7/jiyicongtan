// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#include "base/base.h"

class A {
 public:
  A(int i = 1, char j = 'a', float k = 0) : a(i), b(j), c(k) {}

  int GetA() { return a; }
  char GetB() { return b; }
  float GetC() const { return c; }

 private:
  int a;
  char b;
  float c;
};

class B : public A {
 public:

 private:
  int ba = 0x1122;
  char bb = 'b';
  float bc = 99.9;
};

int main() {
  A t1(0x12345678, 'b', 12.5);
  B t2;

  printf("sizeof(t1) = %ld\n", sizeof(t1));
  HexDump(&t1);
  printf("sizeof(t2) = %ld\n", sizeof(t2));
  HexDump(&t2);
}
