// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#include "base/base.h"

class A {
 public:
  int a = 0x12345678;
  char b = 'b';
  float c = 12.5;
};

int main() {
  A t;

  printf("sizeof(t) = %ld\n", sizeof(t));
  printf("&t = %p\n", &t);
  printf("&t.a = %p\n", &t.a);
  printf("&t.b = %p\n", &t.b);
  printf("&t.c = %p\n", &t.c);

  HexDump(&t);

  return 0;
}