//week03-5_mouse_cat_x_y
void setup(){
  size(400,400);
}
float x,y;
void draw(){
  background(255);
  ellipse(x,y,40,40);
  ellipse(mouseX,mouseY,40,20);
  x=(x*14+mouseY)/15;
  y=(y*14+mouseY)/15;
}
