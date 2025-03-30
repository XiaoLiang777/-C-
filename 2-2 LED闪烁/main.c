#include <REGX52.H>
void Delay100ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	i = 5;
	j = 52;
	k = 195;
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
		Delay100ms();
		P2=0XFF;//1111 1101 0xFD
	  Delay100ms();
		P2=0XFF;//1111 1011 0xFB
	  Delay100ms();
		P2=0XFF;//1111 0111 0xF7
	  Delay100ms();
		P2=0XFF;//1110 1111 0xEF
	  Delay100ms();
		P2=0XFF;//1101 1111 0xDF
	  Delay100ms();
		P2=0XFF;//1011 1111 0xBF
	  Delay100ms();
		P2=0XFF;//0111 1111 0x7F
	  Delay100ms();
	}
}