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
	printf("[���� ����]�� [���� �ѷ�] �� �˰� ���� ����?(���� ����:1, ���� �ѷ�:2)");
	scanf("%d", &a);
	if (a != 1 && a != 2)
		goto choice;
	printf("\n�������� �Է��ϼ���:");
	scanf("%f", &x);
	if (a == 1)
		printf("�������� %.0f�� ���� ������ %.2f�Դϴ�.", x,circleA(x));
	else
		printf("�������� %.0f�� ���� �ѷ��� %.2f�Դϴ�.", x,circleC(x));
		

}

/*double circleA(double radius)
{
	return (M_PI * radius* radius);
}
double circleC(double radius)
{
	return (M_PI * 2 * radius);
}*/
//math.h�� ���ǵ� M_PI���� �̿��Ϸ���, �Լ� ���Ǹ� ���� �ּ��� ��ȯ�մϴ�.
double circleA(double radius)
{
	return (PI * radius* radius);
}
double circleC(double radius)
{
	return (PI * 2 * radius);
}