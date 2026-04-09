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

    char str[101];
    cin >> str;

    int length = strlen(str);

    int letter = length;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'c')
        {
            if (str[i + 1] == '-' || str[i + 1] == '=')
            {
                letter--;
            }
        }
        else if (str[i] == 'd')
        {
            if (str[i + 1] == 'z' && str[i + 2] == '=')
            {
                letter -= 2;
                i++;
            }
            else if (str[i + 1] == '-')
            {
                letter--;
            }
        }
        else if (str[i] == 'n' || str[i] == 'l')
        {
            if (str[i + 1] == 'j')
            {
                letter--;
            }
        }
        else if (str[i] == 's' || str[i] == 'z')
        {
            if (str[i + 1] == '=')
            {
                letter--;
            }
        }
    }

    cout << letter << endl;

    // cout << "입력한 숫자는 " << num << "입니다." << endl;
    // cin >> num;

    return 0;
}