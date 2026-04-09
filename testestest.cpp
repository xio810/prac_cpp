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

    int num = 0;
    cin >> num;

    int count = num;

    for (int i = 0; i < num; i++)
    {
        char str[101];
        cin >> str;

        int length = strlen(str);

        int alph[26] = {0};

        for (int j = 0; j < length; j++)
        {
            if (j > 0 && str[j] != str[j - 1] && alph[str[j] - 'a'] == 1)
            {
                count--;
                break;
            }
            alph[str[j] - 'a'] = 1;
        }
    }

    cout << count << endl;

    // cout << "입력한 숫자는 " << num << "입니다." << endl;
    // cin >> num;

    return 0;
}