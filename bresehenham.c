#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
#include <dos.h>

int main()
{ 
    int gdriver = DETECT, gmode, errorcode;
	int i,x1,x2,y1,y2,length;
	float x,y,dx,dy;
	
	
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
    printf("enter the value of x1");
    scanf("%d",&x1);

    printf("enter the value of y1");
    scanf("%d",&y1);

    printf("enter the value of x2");
    scanf("%d",&x2);

    printf("enter the value of y2");
    scanf("%d",&y2);


    cleardevice();

	
	if(abs(x2-x1)>abs(y2-y1))
	{
		length = abs(x2-x1);
		
	}
	else
	{
		length = abs(y2-y1);
	}
	
	dx=(x2-x1);
	dy=(y2-y1);
	

	
	
	i=1;
	
	p=(2*dy)-dx
	
	x=x1;
	y=y1;
	
	while(i<=length)
	{
		if(p<0)
		{
			putpixel((int)x,(int)y,getmaxcolor());
			p=p + (2dy);
			x=x+1;
		}
		else
		{
			putpixel((int)x,(int)y,getmaxcolor());
			p=p + (2dy) - (2dx);
			x=x+1;
			y=y+1;
			
		}
	
		i++;
	}
	
   getch();
   closegraph();
   return 0;
	
	
}
