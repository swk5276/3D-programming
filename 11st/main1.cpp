#include <iostream>
//���� ���� ��ƾ�� �����ϴ� 
//std�� �˷��� ���ӽ����̽��� ��� �ĺ��ڵ��� ���� �ڵ� ������ ����ϴ� ��
using namespace std;

int main()
{

    int n = 4;
    //��� �� �ʱ�ȭ
    int column = 1, row = 1;
    //������� �����
    while (column <= n)
    {
        row = 1;
        while (row <= n)
        {
            cout << (row == column ? 1 : 0);
            row++;
        }
        cout << endl;
        column += 1;
        continue;
    }
    return 0;
}
