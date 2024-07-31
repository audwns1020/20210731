// 포인터 문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = {};
//	int* ptr;
//
//	printf("임의의 수 5개를 입력하세요.\n");
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
//	int* pt = num;					// 포인터 pt는 배열의 1번째 요소를 가리킴 = 1
//	pt++;							// 포인터 pt는 배열의 2번째 요소를 가리킴 = 2
//	*pt++ = 5;						// 포인터 pt는 배열의 2번째 요소를 5로 바꾸고 3번째 요소를 가리킴
//	*pt++ = 10;						// 포인터 pt는 배열의 3번째 요소를 10으로 바꾸고 4번째 요소를 가리킴
//	pt--;							// 포인터 pt는 배열의 4번째 요소에서 3번째 요소를 가리킴
//	*pt++ += 20;					// 포인터 pt는 배열의 3번째 요소에 20을 더한 후, 4번째 요소를 가리킴
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	// 출력 값은 최종적으로 1 5 30 4가 출력됨.
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	// 한글은 기본적으로 2바이트씩인데, 포인터 ptr이 7번째 요소 이후로 출력해야함.
	// 기울어진 이후로 출력을 해야하나, 스페이스바(공백)를 ?로 출력하고 그 이후로는 모든 문자가 출력됨.
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
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
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';				// 운동장 다음의 공백이 15번째 요소. 공백을 'a'로 바꿈.
//	str[23] = 'b';				// '한' 이라는 문자가 23, 24번째 요소를 잡아먹는데, 23번째 요소를 b로 바꿈.
//	str[25] = 'c';				// '한' 이라는 문자에서 24번째 요소가 남는데, 25번째 요소(공백)를 c로 바꾸고,
//	printf("%s\n\n", ptr);		// 남은 24번째 요소와 합쳐져서 c가 출력되지 않고 ?가 출력됨.
//
//	return 0;
//}

// 포인터를 이용한 배열 문제1
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

// 포인터를 이용한 배열 문제2
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
//	// 이 이후로는 arr 배열 쓰지 말것.
//	// ** 중요 **
//	for ( ; *ptr != index / 2; ptr++) {
//		printf("%3d ", *ptr);
//		if (*ptr == index) {
//			ptr -= index;
//		}
//	}
//
//	return 0;
//}

// string 함수
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