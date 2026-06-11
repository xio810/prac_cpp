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

    cout << "ʕっ.ᴥ.ʔっ🎉" << endl;

    vector<string> strArr = {"there", "aread", "no", "a", "ds"};
    string ad = "ad";
    vector<string> answer;

    for (int i = 0; i < strArr.size(); i++)
    {
        string str = strArr[i];
        bool hasAd = false; // 기본적으로 str이 ad가 없다고 가정

        for (int j = 0; j < str.length(); j++)
        {
            bool same = true;

            for (int k = 0; k < ad.length(); k++)
            {
                if (str[j + k] != ad[k])
                {
                    same = false;
                    break;
                }
            }
            if (same)
            {
                hasAd = true; // 단어와 ad가 같다면 str을 true로
                break;
            }
        }
        if (hasAd == false) // str에 ad가 없는 애들만
        {
            answer.push_back(str);
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }

    //  vector<vector<int>> arr1(n, vector<int>(m));
    //   cin >> num;
    return 0;
}