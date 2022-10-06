#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//산술 연산
int main(void)
{
	int x, y, result;

	printf("두 개의 정수를 입력하시오: ");
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

//소수점 산술 연산
int main(void)
{
	double x, y, result;

	printf("두 개의 실수를 입력하시오: ");
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



//초 단위 시간
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second;

	printf("초단위의 시간을 입력하시오:(32억 초 이하) ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다. ", input, minute, second);

	return 0;
}

//증감 연산자
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

//근무 일수 변환
int main(void)
{
	int days, years, weeks;

	printf("총 일수를 입력하시오:  ");
	scanf("%d", &days);

	years = days / 365;
	weeks = (days % 365) / 7;
	days = days - ((years * 365) + (weeks * 7));

	printf("%d년\n%d주\n%d일\n", years, weeks, days);


	return 0;
}

