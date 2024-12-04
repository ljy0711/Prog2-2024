// 023_auto.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

int main()
{
    int a[] = { 423, 432,654,234,6,3425,7,345,457 };

    for (auto i : a) // 배열 a의 각각의 원소 i에 대해
        cout << i << " ";
    cout << endl;
}

