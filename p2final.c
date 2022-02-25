#include<stdio.h>
#include<math.h>
void input_line(float *x1,float *y1)
{
  scanf("%f%f",x1,y1);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float dist1,dist2,dist3;
  float sum;
  dist1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  dist2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
  dist3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
  sum=dist1+dist2;
  if(sum>dist3)
   return 1;
  else
    return 0;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if(istriangle==1)
   printf("the three lines forms a triangle");
  else
  printf("the three lines doesnt form a triangle");
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  int istriangle;
  printf("enter points of three lines\n");
  input_line(&x1,&y1);
  input_line(&x2,&y2);
  input_line(&x3,&y3);
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0; 
}