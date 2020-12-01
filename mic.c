
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
#include <dos.h>

int main()
{
    int gdriver = DETECT, gmode, errorcode;
	int p,i,x,y,r;
     int midx,midy;

   //  midx= getmaxx() / 2;
     //midy= getmaxy() / 2;


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


    printf("enter the value of r");
    scanf("%d",&r);

    cleardevice();


       midx=100;
       midy=100;





	p=1-r;

	x=0;
	y=r;

	while(x<y)
	{

		if(p<0)
		{
			putpixel(x+midx,y+midy,getmaxcolor());

			putpixel(y+midx,x+midy,getmaxcolor());

			putpixel(y+midx,(-x)+midy,getmaxcolor());

			putpixel(x+midx,(-y)+midy,getmaxcolor());

			putpixel((-x)+midx,(-y)+midy,getmaxcolor());

			putpixel((-y)+midx,(-x)+midy,getmaxcolor());

			putpixel((-y)+midx,x+midy,getmaxcolor());

			putpixel((-x)+midx,y+midy,getmaxcolor());

			x=x+1;
			p=p + (2*x) + 1;

		}
		else
		{
			putpixel(x+midx,y+midy,getmaxcolor());

			putpixel(y+midx,x+midy,getmaxcolor());

			putpixel(y+midx,(-x)+midy,getmaxcolor());

			putpixel(x+midx,(-y)+midy,getmaxcolor());

			putpixel((-x)+midx,(-y)+midy,getmaxcolor());

			putpixel((-y)+midx,(-x)+midy,getmaxcolor());

			putpixel((-y)+midx,x+midy,getmaxcolor());

			putpixel((-x)+midx,y+midy,getmaxcolor());


			x=x+1;
			y=y-1;

			p=p + (2*x) + 1 - (2*y);

		}



	}

   getch();
   closegraph();
   return 0;

	
}
