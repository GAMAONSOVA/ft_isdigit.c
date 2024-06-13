#include <stdio.h>
int ft_isdigit(int c)
{
	char m0[11]="0123456789";
	int i=0;
	while(m0[i] !=0)
	{
		if(m0[i]== c)
		{
			return 1;
		}
		i++;
	}
	return 0;
}
int main()
{
	char a='b';
	int e=ft_isdigit(a);
	printf("%d", e);
}
