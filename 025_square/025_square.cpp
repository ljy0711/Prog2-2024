// 025_square.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;
// 방법3-1(배열)- 프로토타입
// int minimum(int a[], int n, int(*fp)(int)) 

int square(int x) {
    return x * x;
}
int cube(int x) {
    return x * x * x;
}

// 방법3(배열) - 배열의 원소를 fp 함수로 계산한 최소값을 리턴
// int minimum (int a[], int n, int(*fp)(int)){
//    int min = fp(a[0]);
//    for (int i = 0; i < n; i++)
//    if ( min > fp(a[i]))
//         min = fp(a[i]));
//    return min;
// }

int main()
{
    
    int a = 10;
    int (*fp)(int); //정수를 리턴, 정수하나 선언
    // 방법3 (배열)
    // int arr[] = { 23,9,-65,3,5 };
    // cout << minimum(arr, 5, square) << ednl;

    fp = square;
    cout << fp(a) << endl; //a의 제곱 출력
    
    fp = cube;
    cout << fp(a) << endl; //a의 3승 출력

    /* 방법 2
    cout << calc(a, square) << endl;
    cout << calc(a, cube) << endl;
    */   
}

/* 방법2
int calc(int a, int(*fp)(int)) {
    return fp(a);
} */

