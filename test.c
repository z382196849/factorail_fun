#include<stdio.h>
#include<windows.h>

int fac(int n)
{
    if(n < 2)
    {
	return 1;
    }
    else
    {
	return n * fac(n - 1);
    }
}

int main()
{
    int i = 0;
    int ret = 0;
    printf("请输入：i = ");
    scanf("%d", &i);
    ret = fac(i);
    printf("fac(%d) = %d\n", i, ret);
    system("pause");
    return;
}