#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void arr(int mat3[3][3]);			//��� ���
void add(int mat3[3][3], int mat4[3][3]);	//����
void sub(int mat3[3][3], int mat4[3][3]);	//����
void mul(int mat3[3][3], int mat4[3][3]);	//����
void div(int mat3[3][3], int mat4[3][3]);	//������

void main()
{
	int mat3[3][3], mat4[3][3];	//�迭 �ʱ�ȭ
	int i, j, cho, yn;			//i,j�� for�� cho�� ������ ���� yn�� ��İ� Ȯ�ν� ���

	printf("���1�� �Է�\n"); //a��� �Է�

	while (1)//���� ���� - ��İ� �Է��� �ٸ� �� �ٽ� �Է�
	{

		for (i = 0; i < 3; i++)
		{
			printf("%d ��: \n", i + 1);
			for (j = 0; j < 3; j++)
			{
				scanf("%d", &mat3[i][j]);
			}
		}

		printf("���1 \n");
		arr(mat3);

		printf("�Է��� ���� �½��ϱ�? YES(1), NO(2)");
		scanf("%d", &yn);

		if (yn == 1)//���� �� break
			break;
	}


	printf("\n\n");


	printf("���2�� �Է�\n"); //b��� �Է�

	while (1)//���� ���� - ��İ� �Է��� �ٸ� �� �ٽ� �Է�
	{

		for (i = 0; i < 3; i++)
		{
			printf("%d ��: \n", i + 1);
			for (j = 0; j < 3; j++)
			{
				scanf("%d", &mat4[i][j]);
			}
		}

		printf("���2�� ������ �����ϴ�. \n");
		arr(mat4);

		printf("�Է��� ���� �½��ϱ�? YES(1), NO(2)");
		scanf("%d", &yn);

		if (yn == 1)//���� �� break
			break;
	}

	printf("\n");

	printf("���� ����\n");
	printf("1�� ��ĵ��� 2�� ��Ļ��� 3�� ��İ��� 4�� ��ĳ�����\n");
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

void arr(int mat3[3][3])//���
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
void add(int mat3[3][3], int mat4[3][3])//����
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
void sub(int mat3[3][3], int mat4[3][3])//����
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
void mul(int mat3[3][3], int mat4[3][3])//����
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

void div(int mat3[3][3], int mat4[3][3])//������
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
