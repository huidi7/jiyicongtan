// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#include "base/base.h"

class Empty {};

class D1 : public Empty {};

class D2 : public Empty {
 public:
  virtual void Test1() {}
  virtual void Test2() {}
};

class D3 : virtual public Empty {};

class D4 : virtual public Empty {};

class D5 : public D3, public D4 {};

class D6 : public D1, public D4 {};

int main() {
  Empty e;
  D1 d1;
  D2 d2;
  D3 d3;
  D4 d4;
  D5 d5;
  D6 d6;

  printf("sizeof(Empty) = %ld\n", sizeof(Empty));
  HexDump(&e);
  printf("sizeof(D1) = %ld\n", sizeof(D1));
  HexDump(&d1);
  printf("sizeof(D2) = %ld\n", sizeof(D2));
  HexDump(&d2);
  printf("sizeof(D3) = %ld\n", sizeof(D3));
  HexDump(&d3);
  printf("sizeof(D4) = %ld\n", sizeof(D4));
  HexDump(&d4);
  printf("sizeof(D5) = %ld\n", sizeof(D5));
  HexDump(&d5);
  printf("sizeof(D6) = %ld\n", sizeof(D6));
  HexDump(&d6);

  return 0;
}
