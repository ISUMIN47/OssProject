#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(void)
{
	int s;
	while (1)
	{
		puts("------------------------------");
		puts("1. üũ����Ʈ�� �Է��ϱ�");
		puts("2. üũ����Ʈ�� ����ϱ�");
		puts("3. üũ����Ʈ�� �Ϸ� ǥ���ϱ�");
		puts("4. üũ����Ʈ �����ϱ�");
		puts("5. �����ϱ�");
		puts("------------------------------");
		puts("���ϴ� �ɼ��� ��ȣ�� �Է��ϼ���");
		printf(">>>");
		scanf_s("%d", &s);

		switch (s)
		{
			case 1:
				puts("1");
				//�Է����α׷�
				break;
			case 2:
				puts("2");
				//������α׷�
				break;
			case 3:
				puts("3");
				//�Ϸ� ǥ�� ���α׷�
				break;
			case 4:
				puts("4");
				//���� ���α׷�
				break;
			case 5:
				break;
			default:
				puts("�Է��� ��ȣ�� �ٽ� Ȯ���ϼ���");
				break;
		}

		if (s == 5)
		{
			puts("���α׷��� �����մϴ�,..");
			break;
		}
	}
}

int main(void)
{
	menu();
	return 0;
}
