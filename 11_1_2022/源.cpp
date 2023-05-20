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
	struct crad m = { "生日快乐",10 };
	printf("我想对你说的是：%s\n",m.name );
	printf("而这价格 ： % d\n", m.price);

	char z = 8;//00000000 00000000 00000000 00000100,而字符类型z只能存入一个字节，所以z=00001000
	char x = 127;//x=01111111
	char v = z + x;//有符号数补位取决于符号位，无符号数补位为零 整形提升， v=10000111
	printf("v=%d\n", v);//输出结果为整形打印，v进行补位，v=11111111 11111111 11111111 10000111 -计算机以补码形式存储
	                    //原码为10000000 00000000 00000000 01111001—— -121
	char n = 0xef;
	printf("n=%d\n", n);
	return 0;
}
