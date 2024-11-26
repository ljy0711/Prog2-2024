// 004_loop.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };

    // 범위 기반의  for문
    for (int i : a) //배열 개수를 몰라도 됨.
        
        cout << i*i << ' ';
    cout << endl;


}
