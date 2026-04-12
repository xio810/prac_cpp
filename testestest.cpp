#include <iostream>
#include <vector>
#include <cstring>   //strlen 사용하려면
#include <algorithm> //reverse 사용하려면

using namespace std; // std:: 생략 가능하게 해줌

int main()
{
    // 입출력 속도 최적화 (알고리즘 문제 풀 때 필수!)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "ʕっ.ᴥ.ʔっ ";

    int num, jin;
    cin >> num >> jin;

    char str[100];
    int i = 0;

    int mox = 0; // 몫
    int nam = 0; // 나머지

    while (num > 0)
    {
        mox = num / jin;
        nam = num % jin; // 나머지

        if (nam < 10)
        {
            str[i] = nam + '0';
        }
        else
        {

            str[i] = nam + 'A' - 10;
        }

        i++;

        num = mox;
    }
    str[i] = '\0';

    // 확인용 출력
    string s = str;
    reverse(s.begin(), s.end());
    cout << s << endl;

    // cout << "입력한 숫자는 " << num << "입니다." << endl;
    // cin >> num;

    return 0;
}