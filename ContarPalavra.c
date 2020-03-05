#include <stdio.h>
int conta_ocorrencias (char s [100])
{
int i=0, counter = 0;
	for(i=0;i<7;i++)
	{
		if(s[i] != '\0')
			counter++;
		else
			return counter;
	}
return counter;
}
int main(void) {
  char s[100];
  char t;
  scanf("%s\n", s);
  scanf("%c", &t);
  printf("%s\n", s);
  printf("%c\n", t);
  printf("%d\n",conta_ocorrencias(s));


  return 0;
}
