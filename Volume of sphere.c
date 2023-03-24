#YaejinKong_201900402_Department of Brazilian Studies
#2000년 6월 15일
#Hobby_Watching Movies
#Dog's Name :
#The Members of Family: Mom, Dad, Brother and I


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float r1,r2;

	printf("Enter the num1 : "); //첫번째 구의 반지름 입력
	scanf("%f", &r1);
	
	printf("Enter the num2 : "); //두번째 구의 반지름 입력
	scanf("%f", &r2);

	printf("The volume of a sphere_1 with a %f -meter radius is %f", r1, 4.0f / 3.0f * 3.14 * r1 * r1 * r1); //첫번째 구의 부피
	printf("The volume of a sphere_2 with a %f -meter radius is %f", r2, 4.0f / 3.0f * 3.14 * r2 * r2 * r2); //두번째 구의 부피

	return 0;
}
