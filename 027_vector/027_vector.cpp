// 027_vector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; //<>탭플릿, 정수 v 백터 선언

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
// v.후 탭하면 1.상자=함수 2.★는 그 중 많이 쓰는 기능

    for (int i : v)
        cout << i << " ";
    cout << endl;

    //(1)초기화 방법
    vector<float> w = { 1.1,2.3,5.6 };
    for (float i : w)
        cout << i << " ";
    cout << endl;

    //((2)백터를 배열처럼 쓸 수 있음
    int x = v[0];
    cout << x << endl;

    v[0] = 123;
    cout << v[0] << endl;

    //(3)백터의 복사(깊은 복사)
    vector<int> v2 = v;
    for (int i : v2)
        cout << i << " ";
    cout << endl;

    //(3-1)백터의 복사2
    v2[0] = 1;
    for (int i : v)
        cout << i << " ";
    cout << endl;

/*(4)예시 
    Print(v);
*/

}
/*예시 - 백터를 매개변수로 받을 때 참조형으로 받는게 좋음
        그렇지 않으면 백터의 내용 전체가 매개변수로 전달된다.
void Print(vector<int> v) {
    for (int i : v)
        cout << i << " ";
    cout << endl;
} */
