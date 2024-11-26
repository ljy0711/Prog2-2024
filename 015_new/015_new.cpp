// 015_new.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

int main()
{
    int n;
    // 합과 가장 큰 값을 출력하시오(sum,max)

    cout << "몇개의 데이터? :";
    cin >> n; 

    int* a = new int[n]; // 동적 메모리 할당(꼭외우기)
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    delete[] a; //메모리 해제(반납)
}

