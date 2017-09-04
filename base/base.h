// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#ifndef BASE_BASE_H_
#define BASE_BASE_H_

#include <cstdio>

#include "base/macro.h"
#include "base/mutex.h"

static const int kNumPerLine = 8;

template <typename T>
void HexDump(const T* addr) {
  unsigned char* ptr = (unsigned char*)addr;
  for (size_t i = 0; i < sizeof(T); ++i) {
    if (i % kNumPerLine == 0)
      printf("%p: ", ptr);
    printf("0x%02x ", *(ptr++));
    if ((i + 1) % kNumPerLine == 0)
      printf("\n");
  }
  printf("\n");
}

#endif  // BASE_BASE_H_
