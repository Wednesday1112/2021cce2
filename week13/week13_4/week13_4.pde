void setup()
{
  size(300,300);
  fill(#083EFC);
  textSize(50);
  textAlign(CENTER,CENTER);
}
void draw()
{
  background(#FFE0F6);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  int choice=mouseX%3; //%取餘數(%3只會有0,1,2三種結果)
  if(choice==0) rect(0,25,50,50);//一個框框(x,y,寬,高)
  if(choice==1) rect(0,125,50,50);
  if(choice==2) rect(0,225,50,50);
}
