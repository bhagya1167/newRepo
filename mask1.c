#include<stdio.h>
void main()
{
unsigned int num=0x1234;
printf("Num =%x\n",num);
num=(num&0x00ff)<<8|(num&0xff00)>>8;

printf("Num =%x\n",num);
}
