#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int column = 0;     // ��µ� �Ҽ��� ���� ���� ���� (�� �ٿ� 5���� ����ϱ� ����)
    int inputValue;     // ����ڷκ��� �Է¹��� ����
    int stepValue;      // 2���� inputValue������ �� ���� (�Ҽ� �Ǻ� ���)
    int incValue;       // �Ҽ� �Ǻ��� ���� �������� ����� ����

    // ����ڿ��� 2 �̻��� ������ �Է��ϵ��� ��û
    printf("2 �̻��� ������ �Է� :");
    scanf("%d", &inputValue);

    // 2���� inputValue���� �ϳ��� �˻�
    for (stepValue = 2; stepValue <= inputValue; stepValue++) {
        // stepValue�� �Ҽ����� �Ǻ��ϱ� ���� 2���� stepValue-1���� ������ ����.
        for (incValue = 2; incValue < stepValue; incValue++) {
            // ���� stepValue�� incValue�� ������ �������� (�������� 0�̸�)
            // stepValue�� �Ҽ��� �ƴϹǷ� �ݺ��� Ż��
            if (stepValue % incValue == 0) {
                break;
            }
        }
        // ���� for���� ��� ������� ���, incValue�� stepValue�� ������
        // ��, stepValue�� � ���ε� ������ �������� �����Ƿ� �Ҽ���
        if (incValue == stepValue) {
            // �Ҽ��� 5ĭ�� ������ ���
            printf("%5d", stepValue);
            column++;   // ����� �Ҽ��� ������ 1 ����
            // �� �ٿ� 5���� ��µǸ� �ٹٲ� ó�� �� ī���� �ʱ�ȭ
            if (column == 5) {
                column = 0;
                printf("\n");
            }
        }
    }
    return 0;
}
