// 020_template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include <string>
using namespace std;

class Vector2{
private:
    float x, y;
public:
    Vector2() : x(0),y(0){}
    Vector2(float x, float y) : x(x),y(y){}
//  Vector2(float x, float y) {
//      this->x = x;
//      this->y = y;
//  }
    float GetX() const {return x;}
    float GetY() const { return y;}
    // 방법 2(백터)
    Vector2 operator+(const Vector2 other) const {
        return Vector2(x + other.x, y + other.y);
    }
    Vector2 operator-(const Vector2 other) const {
        return Vector2(x - other.x, y - other.y);
    }
    //방법 3
    Vector2& operator+=(const Vector2 other) {
        x += other.x;
        y += other.y;
        return *this;
    }
    Vector2& operator-=(const Vector2 other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }
};

template <typename T>
T getArraySum(T arr[], int n) {
    T sum = arr[0];
    for (int i = 1; i < n; i++)
        sum += arr[i];
    return sum;
}

template <>
string getArraySum(string arr[], int n) {
    string sum = arr[0];
    for (int i = 1; i < n; i++)
        sum += " " + arr[i];
    return sum;
}

int main()
{
    int iarr[5] = { 3,5,6,2,4 };
    double darr[5] = { 1.3,54.3,4.6,8.7,4.5 };
    string sarr[3] = { "afjlk","sadlfjsl","pajfdg" };
    Vector2 varr[3] = { Vector2(1,2),Vector2(3,5),Vector2(7,8) }; //방법2

    int isum = getArraySum<int>(iarr, 5);
    double dsum = getArraySum<double>(darr, 5);
    string ssum = getArraySum<string>(sarr, 3);
    Vector2 vsum = getArraySum<Vector2>(varr, 3); //방법2

    cout << isum << endl;
    cout << dsum << endl;
    cout << ssum << endl;
    cout << "(" << vsum.GetX() << ", " << vsum.GetY() << ")" << endl; //방법2
}