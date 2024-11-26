// 007_inventory.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
using namespace std;

int inventory[8] = { 0 };
int score = 0;

void getItem(int itemId, int cnt = 1, int sc = 0) {
    inventory[itemId] += cnt;
    score += sc;
}


int main()
{
    getItem(6, 5); //6번 item을 5개 취득
    getItem(3); // 3번 item을 1개 취득
    getItem(5, 4, 7000); // 5번 item을 4개 취득, 7000점 획득

    for (int i : inventory)
        cout << i << " ";
    cout << endl;

    cout << "점수 : " << score << endl;
}

