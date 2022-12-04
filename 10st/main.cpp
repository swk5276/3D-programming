#include <iostream>  // C++�� �ִ� ������� ���� ��� ����
#include <math.h>   //pow(), sqrt()�Լ��� ���ǵ� ��� ����


using namespace std;
//���� ���� ��ƾ�� �����ϴ� std�� �˷��� ���ӽ����̽��� ��� �ĺ��ڵ��� ���� �ڵ� ������ ����ϴ� ��

float main(int argc, char** argv) {
    //char* �� ���ڿ��� ���尡���ϰ�. char** ���� ���ڿ� �迭�� ��� ����

    //2���� ��ǥ+������ǥ ex) vec3(4,2,1)
    float vec3[3][1] = { {4},{2},{1} };

    //2�������

    //�̵���ȯ��� (3,5 �̵�)
    float Translate[3][3] = { {1,0,0},
                              {0,1,0},
                              {3,5,1} };
    //ȸ����ȯ��� (30�� ȸ��)
    float Rotate[3][3] = { {sqrt(3) / 2,1 / 2,0},
                           {1 / 2,sqrt(3) / 2,0},
                           {0,0,0} };
    //ũ�⺯ȯ��� (2�� Ȯ��)
    float Scale[3][3] = { {2,0,0},
                          {0,2,0},
                          {0,0,1} };
    //�����
    float Mat3[3][3] = { 0 };

    //Mat3(3X3��İ�)X����vec3 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    for (int m = 0; m < 1; m++) {
                        Mat3[i][l] += Translate[i][k] * Rotate[k][j] * Scale[j][l] * vec3[l][m];
                    }
                }
            }
        }
    }

    //����� ���
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << Mat3[i][j];
            if (j < 2) cout << " ";
        }
        cout << endl;
    }
    return 0;
}