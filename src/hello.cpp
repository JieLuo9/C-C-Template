#include <stdio.h>

/**
 * @brief main()函数启动时运行的函数
 *
 * @return int 固定返回2
 */
int Main_Start() {
  printf("main start...\n");
  return 2;
}

/**
 * @brief main函数, 主函数
 *
 * @return int  固定返回1
 */
int main() {
  /**
   * @brief 存储Main_Start函数的返回值
   *
   */
  int ret = 0;
  ret = Main_Start();

  if (ret != 1) {
    printf("main start fail!\n");  ///  启动失败
  } else {
    printf("mian start success!\n");  ///   启动成功
  }

  printf("test a cursor.\n");
  printf("just a test.\n");

  printf("好想学spdk啊!\n");
  printf("好想学RDMA啊!\n");
  printf("好想学NVMF啊!\n");

  printf("好想学游戏啊, 我想做游戏...想做游戏, 想学虚幻5, 想做游戏编程...\n");

  return 0;
}