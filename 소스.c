#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��� ����
int main(void)
{
	int x, y, result;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d", x, y, result);

	return 0;
}

//�Ҽ��� ��� ����
int main(void)
{
	double x, y, result;

	printf("�� ���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	result = x + y;
	printf("%lf + %lf = %lf\n", x, y, result);

	result = x - y;
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y;
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y;
	printf("%lf / %lf = %lf\n", x, y, result);

		return 0;
}



//�� ���� �ð�
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second;

	printf("�ʴ����� �ð��� �Է��Ͻÿ�:(32�� �� ����) ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d���Դϴ�. ", input, minute, second);

	return 0;
}

//���� ������
int main(void)
{
	int x, y;

	x = 1;
	y = ++x;
	printf("x=%d y=%d\n", x, y);
	
	y = x++;
	printf("x=%d y+%d\n", x, y);

	return 0;
}

//�ٹ� �ϼ� ��ȯ
int main(void)
{
	int days, years, weeks;

	printf("�� �ϼ��� �Է��Ͻÿ�:  ");
	scanf("%d", &days);

	years = days / 365;
	weeks = (days % 365) / 7;
	days = days - ((years * 365) + (weeks * 7));

	printf("%d��\n%d��\n%d��\n", years, weeks, days);


	return 0;
}

