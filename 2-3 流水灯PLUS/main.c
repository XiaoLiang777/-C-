#include <REGX52.H>
void delay()		//@11.0592MHz
{
	unsigned char i, j, k;

	i = 22;
	j = 3;
	k = 227;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
	while(1)
	{
		P2=0xFE;//1111 1110 0xFE
		delay();
		P2=0XFD;//1111 1101 0xFD
	  delay();
		P2=0XFB;//1111 1011 0xFB
	  delay();
		P2=0XF7;//1111 0111 0xF7
	  delay();
		P2=0XEF;//1110 1111 0xEF
	  delay();
		P2=0XDF;//1101 1111 0xDF
	  delay();
		P2=0XBF;//1011 1111 0xBF
	  delay();
		P2=0X7F;//0111 1111 0x7F
	  delay();
	}
}