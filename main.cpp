
#include <stdio.h>


int main(int argc, char const *argv[])
{
  float AB_[8] __attribute__ ((aligned (32)));
  printf("我的第一个汇编程序 !\n");
  asm volatile(
    "vmov.f32   q0,    #3.0        \n\t"
    "vmov.f32   q1,    #1.0        \n\t"
    "vst1.32  {q0, q1}, [%[AB_]]!   \n\t"
     :
     :[AB_]"r"(AB_)
     :"memory", "q0", "q1"
  );

  for (int i = 0; i < 8; ++i) {
    printf("%f \n", AB_[i]);
  }
	return 0;
}