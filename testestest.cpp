#include <iostream>
#include <vector>
#include <cstring> //strlen사용하려면

using namespace std; // std:: 생략 가능하게 해줌

int main()
{
    // 입출력 속도 최적화 (알고리즘 문제 풀 때 필수!)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "ʕっ.ᴥ.ʔっ ";

    char str[11]; // ZZZZZ
    int jin;      // 진법

    cin >> str >> jin;

    int length = strlen(str);

    long long result = 0;
    int num;
    int squared = 1; // 제곱

    for (int i = length - 1; i >= 0; i--)
    {
        // cout << i << endl;

        if ('A' <= str[i] && str[i] <= 'Z')
        {
            num = str[i] - 'A' + 10; // Z 는 35
        }

        result = result + (num * squared); // (35 * 1)
        squared = jin * squared;
    }

    cout << result << endl;
    // cout << "입력한 숫자는 " << num << "입니다." << endl;
    // cin >> num;

    return 0;
}