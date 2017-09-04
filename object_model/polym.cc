// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#include "base/base.h"

class B {
 public:
  B() : ib(0), cb('B') {}
  void nb() {}
  virtual void f() { printf("B::f()\n"); }
  virtual void Bf() { printf("B::Bf()\n"); }

 private:
  int ib;
  char cb;
};

class B1 : public B {
 public:
  B1() : ib1(11), cb1('1') {}
  virtual void f() { printf("B1::f()\n"); }
  virtual void f1() { printf("B1::f1()\n"); }
  virtual void Bf1() { printf("B1::Bf1()\n"); }

 private:
  int ib1;
  char cb1;
};

int main() {
  B b;
  B1 b1;

  B& rb = b1;
  rb.f();

  printf("sizeof(b) = %ld\n", sizeof(b));
  HexDump(&b);
  printf("sizeof(b1) = %ld\n", sizeof(b1));
  HexDump(&b1);

  return 0;
}