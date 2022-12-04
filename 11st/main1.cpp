#include <iostream>
//여러 내장 루틴을 선언하는 
//std로 알려진 네임스페이스의 모든 식별자들을 현재 코드 범위에 허용하는 것
using namespace std;

int main()
{

    int n = 4;
    //행과 열 초기화
    int column = 1, row = 1;
    //단위행렬 만들기
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
