#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void arr(int mat3[3][3]);			//행렬 출력
void add(int mat3[3][3], int mat4[3][3]);	//덧셈
void sub(int mat3[3][3], int mat4[3][3]);	//뺄셈
void mul(int mat3[3][3], int mat4[3][3]);	//곱셈
void div(int mat3[3][3], int mat4[3][3]);	//나눗셈

void main()
{
	int mat3[3][3], mat4[3][3];	//배열 초기화
	int i, j, cho, yn;			//i,j는 for문 cho는 연산자 선택 yn은 행렬값 확인시 사용

	printf("행렬1을 입력\n"); //a행렬 입력

	while (1)//무한 루프 - 행렬값 입력이 다를 시 다시 입력
	{

		for (i = 0; i < 3; i++)
		{
			printf("%d 행: \n", i + 1);
			for (j = 0; j < 3; j++)
			{
				scanf("%d", &mat3[i][j]);
			}
		}

		printf("행렬1 \n");
		arr(mat3);

		printf("입력한 값이 맞습니까? YES(1), NO(2)");
		scanf("%d", &yn);

		if (yn == 1)//맞을 시 break
			break;
	}


	printf("\n\n");


	printf("행렬2을 입력\n"); //b행렬 입력

	while (1)//무한 루프 - 행렬값 입력이 다를 시 다시 입력
	{

		for (i = 0; i < 3; i++)
		{
			printf("%d 행: \n", i + 1);
			for (j = 0; j < 3; j++)
			{
				scanf("%d", &mat4[i][j]);
			}
		}

		printf("행렬2은 다음과 같습니다. \n");
		arr(mat4);

		printf("입력한 값이 맞습니까? YES(1), NO(2)");
		scanf("%d", &yn);

		if (yn == 1)//맞을 시 break
			break;
	}

	printf("\n");

	printf("연산 선택\n");
	printf("1번 행렬덧셈 2번 행렬뺄셈 3번 행렬곱셈 4번 행렬나눗셈\n");
	scanf("%d", &cho);

	if (cho == 1)
		add(mat3, mat4);
	else if (cho == 2)
		sub(mat3, mat4);
	else if (cho == 3)
		mul(mat3, mat4);
	else if (cho == 4)
		div(mat3, mat4);


}

void arr(int mat3[3][3])//행렬
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d", mat3[i][j]);
		}
		printf("\n");
	}
}
void add(int mat3[3][3], int mat4[3][3])//덧셈
{
	int c[3][3];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = mat3[i][j] + mat4[i][j];
		}
	}

	arr(c);
}
void sub(int mat3[3][3], int mat4[3][3])//뺄셈
{
	int c[3][3];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = mat3[i][j] - mat4[i][j];
		}
	}

	arr(c);
}
void mul(int mat3[3][3], int mat4[3][3])//곱셈
{
	int c[3][3];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = mat3[i][0] * mat4[0][j] + mat3[i][1] * mat4[1][j] + mat3[i][2] * mat4[2][j];
		}
	}

	arr(c);
}

void div(int mat3[3][3], int mat4[3][3])//나눗셈
{
	int c[3][3];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = mat3[i][0] / mat4[0][j] + mat3[i][1] / mat4[1][j] + mat3[i][2] / mat4[2][j];
		}
	}

	arr(c);
}
