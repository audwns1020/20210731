// ������ ����1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = {};
//	int* ptr;
//
//	printf("������ �� 5���� �Է��ϼ���.\n");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	ptr = arr;
//
//	ptr = ptr + 2;
//
//	printf("%d\n", *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2, 4, 6, 8, 10 };
//	int* p = &arr[0];
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1, 2, 3, 4 };
//	int* pt = num;					// ������ pt�� �迭�� 1��° ��Ҹ� ����Ŵ = 1
//	pt++;							// ������ pt�� �迭�� 2��° ��Ҹ� ����Ŵ = 2
//	*pt++ = 5;						// ������ pt�� �迭�� 2��° ��Ҹ� 5�� �ٲٰ� 3��° ��Ҹ� ����Ŵ
//	*pt++ = 10;						// ������ pt�� �迭�� 3��° ��Ҹ� 10���� �ٲٰ� 4��° ��Ҹ� ����Ŵ
//	pt--;							// ������ pt�� �迭�� 4��° ��ҿ��� 3��° ��Ҹ� ����Ŵ
//	*pt++ += 20;					// ������ pt�� �迭�� 3��° ��ҿ� 20�� ���� ��, 4��° ��Ҹ� ����Ŵ
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	// ��� ���� ���������� 1 5 30 4�� ��µ�.
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	// �ѱ��� �⺻������ 2����Ʈ���ε�, ������ ptr�� 7��° ��� ���ķ� ����ؾ���.
	// ������ ���ķ� ����� �ؾ��ϳ�, �����̽���(����)�� ?�� ����ϰ� �� ���ķδ� ��� ���ڰ� ��µ�.
//	char str[] = "������ ��� : ���ʺ��� ������ ������ �� �� ���� ��Ȳ�� ���������� �̸��� ��.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "������ ��� : ��� �� ������ ������ ��忡���� �ƹ��� �پ ����̶� ��⿡�� �̱� �� ���ٴ� ���� ����.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';				// ��� ������ ������ 15��° ���. ������ 'a'�� �ٲ�.
//	str[23] = 'b';				// '��' �̶�� ���ڰ� 23, 24��° ��Ҹ� ��ƸԴµ�, 23��° ��Ҹ� b�� �ٲ�.
//	str[25] = 'c';				// '��' �̶�� ���ڿ��� 24��° ��Ұ� ���µ�, 25��° ���(����)�� c�� �ٲٰ�,
//	printf("%s\n\n", ptr);		// ���� 24��° ��ҿ� �������� c�� ��µ��� �ʰ� ?�� ��µ�.
//
//	return 0;
//}

// �����͸� �̿��� �迭 ����1
//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//	int arr[100] = {};
//
//	for (int i = 0; i < 100; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[99];
//
//	for (int i = 99; i >= 0; i--) {
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//
//	return 0;
//}

// �����͸� �̿��� �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	const int index = 100;
//	int num = 1;
//	int arr[index] = {};
//
//	for (int i = 0; i < index; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[index / 2];
//
//	// �� ���ķδ� arr �迭 ���� ����.
//	// ** �߿� **
//	for ( ; *ptr != index / 2; ptr++) {
//		printf("%3d ", *ptr);
//		if (*ptr == index) {
//			ptr -= index;
//		}
//	}
//
//	return 0;
//}

// string �Լ�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//
//	return 0;
//}