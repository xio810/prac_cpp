#include <iostream>
#include <vector>

using namespace std; // std:: 생략 가능하게 해줌

int main()
{
    // 입출력 속도 최적화 (알고리즘 문제 풀 때 필수!)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "입력 ->";

    while (1)
    {
        int num;
        cin >> num;

        if (num == -1)
        {
            break;
        }

        vector<int> arr;
        int sum = 0;

        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                arr.push_back(i);
                sum += i;
            }
        }

        if (num == sum)
        {
            // printf("%d = %d", num, arr[0]);
            cout << num << " = " << arr[0];

            for (int i = 1; i < arr.size(); i++)
            {
                // printf(" + %d", arr[i]);
                cout << " + " << arr[i];
            }
            printf("\n");
        }
        else
        {
            cout << num << " is not perfect." << endl;
        }
    }

    // cout << "입력한 숫자는 " << num << "입니다." << endl;

    return 0;
}