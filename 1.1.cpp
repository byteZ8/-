#include<stdio.h>
int MAX(int s,int h)
{
	if(s>h)
	return s;
	else
	return h;
}

int main()
{
	int x,y,w;
	scanf("%d%d",&x,&y);
	w=MAX(x,y);
	printf("最大值为：%d\n",w);
	return 0;
}
