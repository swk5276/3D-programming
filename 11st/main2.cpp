#include<iostream>

using namespace std;

int main() {
	int A[100][100];
	int B[100][3];
	int m, n = 0;
	int cnt = 0;

	//m X n ����� �����
	cout << "���� m X n ����� �Է��ϼ��� : \n";
	cin >> m >> n;
	cout << "Matrix�� ���� ��� ���� �Է��ϼ���  \n";

	//����� ���� �Է��Ѵ�
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "\n" << i << " �� " << j << "��:  ";
			cin >> A[i][j];
			if (A[i][j] != 0) cnt++;
		}
	}

	//�Է��� ����� ����Ѵ�.
	cout << "�Է��� ����� : \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}

	//������ �����
	int s = 1;
	//ù �࿡���� ��,��,0�� �ƴ� ���� ���� �Է�
	B[0][0] = m;
	B[0][1] = n;
	B[0][2] = cnt;
	//0�� �ƴ� ���� ������
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i][j] != 0) {
				B[s][0] = i;
				B[s][1] = j;
				B[s][2] = A[i][j];
				s++;
			}
		}
	}

	//A�� �迭 0���� �ʱ�ȭ
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = 0;
		}
	}

	int temp = 0;
	int row = 0;
	int col = 0;

	//�������� �̿��Ͽ� ��ġ
	for (int i = 1; i < s; i++) {
		//���� �� �ٲٱ�
		temp = B[i][0];
		B[i][0] = B[i][1];
		B[i][1] = temp;
		//��� ���� �ش��ϴ� ���� A�� ����
		row = B[i][0];
		col = B[i][1];
		A[row][col] = B[i][2];
		B[i][2] = 0;
	}

	// ��ġ��� ���
	cout << "��ġ����� : \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}