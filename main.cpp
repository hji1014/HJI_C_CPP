// �ּ�
// ���� ����. �νĵ��� ����

int main()
{
	// �ڷ��� (ũ�� ����, byte)
	// ������ : char(1), short(2), int(4), long(4), long long(8) ...
	// �Ǽ��� : float(4), double(8), long double(8 �̻�)...
	
	int i = 0;					// int : �ڷ���, i : ������
	
	// 1����Ʈ�� ����� ǥ��
	// 256���� -> 0~255
	unsigned char c = 0;		// unsigned : ���
	c = 0;
	c = 256;

	// 1����Ʈ�� ���, ���� �Ѵ� ǥ��
	// 256���� -> -128 ~ 0 ~ +127 (ù ��° ��Ʈ�� MSB - Most Significant Bit�̰� ���0/����1 ����)
	char c1 = 0;				// char = (signed) char

	return 0;
}

// ���Ʈ�� ���Ӿ�ī���� C/C++ ���� 3ȭ ���/���� ������� �ٽú���