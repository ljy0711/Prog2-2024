// 029_sort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[7] = {2,4,3,1,7,5,23};
    sort(a, a + 7);

    for (int i : a)
        cout << i << "  ";
    cout << endl;

    //방법2(백터)
    vector<int> v = { 12,543,67,34,2565,7,6 };
    sort(v.begin(), v.end());//시작 주소, 마지막 +1 주소 형식으로 써야함.

    for (int i : v)
        cout << i << "  ";
    cout << endl;
}

