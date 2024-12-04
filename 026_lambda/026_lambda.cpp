// 026_lambda.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

int arrFnMin(int a[], int n, int(*fp)(int)) {
    int min = fp(a[0]);
    for (int i = 0; i < n; i++)
        if (min > fp(a[i]))
            min = fp(a[i]);
    return min;
}

/*
int square(int i){
    return i*i;
}
*/
int main()
{
    int arr[] = { 43,453,1234,-543,45,54 };
    // cout << arrFnMin(arr,6, square);
    cout << arrFnMin(arr, 6, [](int n)-> int {return n * n; }) << endl;
    cout << arrFnMin(arr, 6, [](int n)-> int {return n * n * n; }) << endl;

}

