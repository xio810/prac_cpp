#include <iostream>
#include <vector>
#include <cstring>   //strlen 사용하려면
#include <algorithm> //reverse,max함수 사용하려면
#include <cmath>     //abs함수. 절대값 구할때

using namespace std; // std:: 생략 가능하게 해줌

int main()
{
    // 입출력 속도 최적화 (알고리즘 문제 풀 때 필수!)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "ʕっ.ᴥ.ʔっ" << endl;

    string myString = "AAAAaaaa";
    string pat = "a";
    string answer;

    int length = myString.length() - pat.length(); // 5

    for (int i = length; i >= 0; i--)
    {
        bool same = true;

        for (int j = 0; j < pat.length(); j++)
        {
            if (myString[i + j] != pat[j])
            {
                same = false;
                break;
            }
        }
        if (same)
        {
            answer = myString.substr(0, i + pat.length());
            break;
        }
    }

    cout << answer << endl;

    //  vector<vector<int>> arr1(n, vector<int>(m));
    //   cin >> num;
    return 0;
}