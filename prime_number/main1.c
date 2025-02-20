#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int column = 0;     // 출력된 소수를 세기 위한 변수 (한 줄에 5개씩 출력하기 위함)
    int inputValue;     // 사용자로부터 입력받을 정수
    int stepValue;      // 2부터 inputValue까지의 각 숫자 (소수 판별 대상)
    int incValue;       // 소수 판별을 위해 나눗셈에 사용할 변수

    // 사용자에게 2 이상의 정수를 입력하도록 요청
    printf("2 이상의 정수를 입력 :");
    scanf("%d", &inputValue);

    // 2부터 inputValue까지 하나씩 검사
    for (stepValue = 2; stepValue <= inputValue; stepValue++) {
        // stepValue가 소수인지 판별하기 위해 2부터 stepValue-1까지 나누어 본다.
        for (incValue = 2; incValue < stepValue; incValue++) {
            // 만약 stepValue가 incValue로 나누어 떨어지면 (나머지가 0이면)
            // stepValue는 소수가 아니므로 반복문 탈출
            if (stepValue % incValue == 0) {
                break;
            }
        }
        // 내부 for문을 모두 통과했을 경우, incValue는 stepValue와 같아짐
        // 즉, stepValue는 어떤 수로도 나누어 떨어지지 않으므로 소수임
        if (incValue == stepValue) {
            // 소수를 5칸의 폭으로 출력
            printf("%5d", stepValue);
            column++;   // 출력한 소수의 개수를 1 증가
            // 한 줄에 5개가 출력되면 줄바꿈 처리 후 카운터 초기화
            if (column == 5) {
                column = 0;
                printf("\n");
            }
        }
    }
    return 0;
}
