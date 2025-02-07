#include<graphics.h>
#include<conio.h>
void plotcirclepoints(int xc,int yc,int x,inty))
{
    putpixel(xc+x,y,RED);
    putpixel(xc-x,yc+y,RED);
    putpixel(xc+x,yc-y,RED);
    putpixel(xc-x,yc-y,RED);
    putpixel(xc+y,yc+x,RED);
    putpixel(xc-y,yc+x,RED);
    putpixel(xc+y,yc-x,RED);
    putpixel(xc+y,yc-x,RED);
}
void Bresenhamcicircle(int xc,int yc,int r)
{
    int x=0,y=r;
    int d=3-2*r;
    plotcirclepoints(xc,yc,x,y);
    while(y>=x)
    {
        x++;
        if(d>0)
        {
            y--;
            d=d+4*(x-y)+10;
        }
        else
        {
            d=d+4*x+6;
        }
        plotcirclepoints(xc,yc,x,y);
    }
}
void main()
{
    int xc,yc,r;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    printf("Enter the center co-ordinates(xc,yc):");
    scanf("%d%d",&xc,&yc);
    printf("Enter the redius of the circle:");
    scanf("%d,&r");
    Bresenhamcicle(xc,yc,r);
    getch();
   closegraph();
}
