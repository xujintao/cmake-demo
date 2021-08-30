#include "config.h"
#ifdef USE_HELLO
#include "hello.h"
#else
#include <cstdio>
#endif

int main() {
#ifdef USE_HELLO
  println();
#else
  std::printf("hello\n");
#endif
  return 0;
}
