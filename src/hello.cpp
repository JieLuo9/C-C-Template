#include <stdio.h>

int mian_start() {
  printf("main start...\n");
  return 2;
}

int main() {
  int ret = 0;
  ret = mian_start();

  if (ret != 1) {
    printf("main start fail!\n");
  } else {
    printf("mian start success!\n");
  }

  printf("test a cursor \n");
  printf("just a test.\n");

  return 0;
}