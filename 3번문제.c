#include <stdio.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define PI 3.141592
double circleA(double radius);
double circleC(double radius);
void main()
{
	int a;
	float x;
choice:
	printf("[원의 면적]과 [원의 둘레] 중 알고 싶은 값은?(원의 면적:1, 원의 둘레:2)");
	scanf("%d", &a);
	if (a != 1 && a != 2)
		goto choice;
	printf("\n반지름을 입력하세요:");
	scanf("%f", &x);
	if (a == 1)
		printf("반지름이 %.0f인 원의 면적은 %.2f입니다.", x,circleA(x));
	else
		printf("반지름이 %.0f인 원의 둘레는 %.2f입니다.", x,circleC(x));
		

}

/*double circleA(double radius)
{
	return (M_PI * radius* radius);
}
double circleC(double radius)
{
	return (M_PI * 2 * radius);
}*/
//math.h에 정의된 M_PI값을 이용하려면, 함수 정의를 위의 주석과 교환합니다.
double circleA(double radius)
{
	return (PI * radius* radius);
}
double circleC(double radius)
{
	return (PI * 2 * radius);
}