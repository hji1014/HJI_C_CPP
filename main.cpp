// 주석
// 설명 역할. 인식되지 않음

int main()
{
	// 자료형 (크기 단위, byte)
	// 정수형 : char(1), short(2), int(4), long(4), long long(8) ...
	// 실수형 : float(4), double(8), long double(8 이상)...
	
	int i = 0;					// int : 자료형, i : 변수명
	
	// 1바이트로 양수만 표현
	// 256가지 -> 0~255
	unsigned char c = 0;		// unsigned : 양수
	c = 0;
	c = 256;

	// 1바이트로 양수, 음수 둘다 표현
	// 256가지 -> -128 ~ 0 ~ +127 (첫 번째 비트가 MSB - Most Significant Bit이고 양수0/음수1 결정)
	char c1 = 0;				// char = (signed) char

	return 0;
}

// 어소트락 게임아카데미 C/C++ 강의 3화 양수/음수 설명부터 다시보기