#include<conio.h>
#include <stdio.h>

int main ()
{
	int c[6] = {5,8,6,7,4,2};
	int d[6];
	int i=0, j=0;

	printf("Nilai Array Yang Akan Ditampilkan\n");
	for(i=5; i>=0; i--)
	{
		d[i]=c[j];
		printf("%d", c[j]);
		j++;
	}
	printf("\n");
	printf("Nilai Array Yang Disalin Bilangan Genap Dan Lebih Besar Dari Angka Nol Secara Berurutan =\n");
	for(i=5; i>=0; i--)
	if(d[i]%2==0 && d[i] > 0)
	{
		printf("%d", d[i]);
	}
	getch ();
	return 0;
}
