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

    string my_string = "s  o";
    vector<string> answer;

    string word = "";
    for (int i = 0; i < my_string.length(); i++)
    {
        if (my_string[i] != ' ') // 빈칸아닐때
        {
            word += my_string[i];
        }
        else if (my_string[i] == ' ') // 빈칸일때
        {
            if (word != "")
            {
                answer.push_back(word);
                word = "";
            }
        }
    }
    if (word != "")
    {
        answer.push_back(word);
        word = "";
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " / ";
    }

    //  vector<vector<int>> arr1(n, vector<int>(m));
    //   cin >> num;
    return 0;
}