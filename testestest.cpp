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

    char subject[51]; // 과목명 programming
    double score = 0; // 학점 3.0
    char grade[3];    // 등급 A-

    double score_mul_grade = 0; // 학점*등급별점수
    double score_sum_grade = 0; //(학점 * 등급점수)의합
    double total_score = 0;     // 학점의총합
    double result = 0;          // 전공평점은 전공과목별 (학점 × 과목평점)의 합을 학점의 총합으로 나눈 값이다.

    for (int i = 0; i < 20; i++)
    {
        double grade_scr = 0;

        scanf("%s %lf %s", subject, &score, grade);

        if (grade[0] == 'P')
        {
            continue;
        }

        // 여기서부터 등급별 점수 나누기
        if (grade[0] == 'A')
        {
            if (grade[1] == '+')
            {
                grade_scr = 4.5;
            }
            else if (grade[1] == '0')
            {
                grade_scr = 4.0;
            }
        }
        else if (grade[0] == 'B')
        {
            if (grade[1] == '+')
            {
                grade_scr = 3.5;
            }
            else if (grade[1] == '0')
            {
                grade_scr = 3.0;
            }
        }
        else if (grade[0] == 'C')
        {
            if (grade[1] == '+')
            {
                grade_scr = 2.5;
            }
            else if (grade[1] == '0')
            {
                grade_scr = 2.0;
            }
        }
        else if (grade[0] == 'D')
        {
            if (grade[1] == '+')
            {
                grade_scr = 1.5;
            }
            else if (grade[1] == '0')
            {
                grade_scr = 1.0;
            }
        }
        else if (grade[0] == 'F')
        {
            grade_scr = 0.0;
        }

        total_score += score;
        score_mul_grade = score * grade_scr;                 // 학점 * 등급점수
        score_sum_grade = score_sum_grade + score_mul_grade; //(학점 * 등급점수)의 합

    } // for끝

    result = score_sum_grade / total_score;
    /*
    printf("학점의총합:%lf\n", total_score);
    printf("학점*등급점수%lf\n", score_mul_grade);
    printf("(학점 * 등급점수)의 합%lf\n", score_sum_grade);
    */

    cout << result << endl;

    // cout << "입력한 숫자는 " << num << "입니다." << endl;
    // cin >> num;

    return 0;
}