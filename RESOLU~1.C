// A program in C to display the resolution of the Screen.

#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	x=getmaxx();   //maximum coordinate in the x direction
	y=getmaxy();   //maximun coordinate in the y direction
	printf("Resolution of the screen is :  %d * %d Pixels",x,y);
	getch();
	closegraph();

}