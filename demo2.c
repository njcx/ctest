#include<stdio.h>
int main(){


int stuAddr = 5;

printf("%x\n",&stuAddr); // 0x444ABCD

int *myAddr ;

myAddr = &stuAddr;

printf("%x\n%d\n",myAddr,*myAddr); // 0x4444ABCD:5

myAddr = NULL;


}
