#include <stdio.h>
#include <stdliB.h>
#include <string.>
//求 next[]的值
void get_next（ int *next, char *s, int Is） {
	int i=0,j=-1;
	next[0]=-1;		//初始化 next[0]
	while（i< ils）{	//还有字符
	if（j=-1l ls[i]=s[j]）{  //匹配
		j++;
		i++;
		if（ s[i]=s[j])
			next [i]=next[j];
		else
			next[i]=j;
	}
else
	j= next[j];
  }
}
int kmp（ int *next, char *t ,char *s, int.lt, int Is ）{
	int i= 0,j =0 ;
	while (i<lt && j<ls) {
		if（ j=1 || t[i]==s[j]） {
			i++;
			j++;
		} else
		 get_next(next, s, ls);           
		 j=next[j]; 
		}
if （j>= ls）
return i+1-ls
else 
	return -1；