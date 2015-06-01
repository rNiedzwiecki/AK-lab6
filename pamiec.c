#include <stdio.h>
#include "rdtsc.c"
int tab1[268435456];
int tab2[268435456];
int main()
{
	long long int tp,tk;
	for(int i=0;i<32456;i++)
	{
		tab1[i]=tab1[i]+1;
	}
	for (int i=0;i<268435456;i++)
	{
		tp=rdtsc();
		tab2[i]+=1;
		tk=rdtsc();
		tk-=tp;
		
		if(tk>1000)
		{		
			printf("komorka : %p , czas: %lld \n",&tab2[i],tk);
		}
	}
	return 0;
}