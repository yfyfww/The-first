#include <stdio.h>

struct crad {
	char name[20] ;
	int price ;
};
int main()
{
	int i=0,a = 1, b = 0, c = 3;
	i = a++ && b++ && ++c;
	printf("a=%d b=%d c=%d\n", a, b, c);
	b = (a > 2 ? 6 : 9);
	printf("a=%d b=%d c=%d\n", a, b, c);
	i = (c = 6, a = c + 2, b = a + c, c += 6);
	printf("i=%d\n", i);
	if (c = 7, a =  2,i=2, c == 7);
	{
		printf("a=%d\n", a);
	}
	printf("i=%d\n", i);
	struct crad m = { "ղķ˹ǩ�����ǿ�",10 };
	printf("���� ��%s\n",m.name );
	printf("�۸� �� % d\n", m.price);

	char z = 8;//00000000 00000000 00000000 00000100,���ַ�����zֻ�ܴ���һ���ֽڣ�����z=00001000
	char x = 127;//x=01111111
	char v = z + x;//�з�������λȡ���ڷ���λ���޷�������λΪ�� ���������� v=10000111
	printf("v=%d\n", v);//������Ϊ���δ�ӡ��v���в�λ��v=11111111 11111111 11111111 10000111 -������Բ�����ʽ�洢
	                    //ԭ��Ϊ10000000 00000000 00000000 01111001���� -121
	char n = 0xef;
	printf("n=%d\n", n);
	return 0;
}
