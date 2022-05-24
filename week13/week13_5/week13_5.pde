void setup()
{
  size(300,300);
  fill(#083EFC);
  textSize(50);
  textAlign(CENTER,CENTER);
}
int choice=-1;//-1沒選,0,1,2有選
void draw()
{
  background(#FFE0F6);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  if(choice==0) ellipse(30,50,50,50);//一個圓(x,y,寬,高)
  if(choice==1) ellipse(30,150,50,50);
  if(choice==2) ellipse(30,250,50,50);
}
void mousePressed()//當滑鼠按下去時
{
  choice=int(random(3));//會在0.00~2.99(不包括3.0)中,取int整0,1,2
}
