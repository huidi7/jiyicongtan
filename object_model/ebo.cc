// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#include "base/base.h"

class Empty {};

class D1 : Empty {
  int i;
};

class D2 : Empty {
  Empty c;
  int i;
};

class D3 : Empty {
  D1 c;
  int i;
};

int main()
{
  Empty e;
  D1 d1;
  D2 d2;
  D3 d3;

  printf("sizeof(Empty) = %ld\n", sizeof(Empty));
  HexDump(&e);
  printf("sizeof(D1) = %ld\n", sizeof(D1));
  HexDump(&d1);
  printf("sizeof(D2) = %ld\n", sizeof(D2));
  HexDump(&d2);
  printf("sizeof(D3) = %ld\n", sizeof(D3));
  HexDump(&d3);

  return 0;
}