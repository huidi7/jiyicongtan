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

class B2 : public B {
 public:
  B2() : ib2(12), cb2('2') {}
  virtual void f() { printf("B2::f()\n"); }
  virtual void f2() { printf("B2::f2()\n"); }
  virtual void Bf2() { printf("B2::Bf2()\n"); }

 private:
  int ib2;
  char cb2;
};

class D : public B1, public B2 {
 public:
  D() : id(100), cd('D') {}
  virtual void f() { printf("D::f()\n"); }
  virtual void f1() { printf("D::f1()\n"); }
  virtual void f2() { printf("D::f2()\n"); }
  virtual void Df() { printf("D::Df()\n"); }

 private:
  int id;
  char cd;
};

int main() {
  B b;
  B1 b1;
  B2 b2;
  D d;

  printf("sizeof(b) = %ld\n", sizeof(b));
  HexDump(&b);
  printf("sizeof(b1) = %ld\n", sizeof(b1));
  HexDump(&b1);
  printf("sizeof(b2) = %ld\n", sizeof(b2));
  HexDump(&b2);
  printf("sizeof(d) = %ld\n", sizeof(d));
  HexDump(&d);

  return 0;
}