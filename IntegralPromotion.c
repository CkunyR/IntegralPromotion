//整型提升！！！！小于int类型！！！！才会发生整型提升


#include <stdio.h>

int main()
{
	int c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4   整型提升
	printf("%u\n", sizeof(!c));//1
	return 0;
}