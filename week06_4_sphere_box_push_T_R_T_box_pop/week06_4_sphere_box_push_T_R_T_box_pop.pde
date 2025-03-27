//week06-4_sphere_box_push_T_R_T_box_pop
void setup(){
  size(500,400,P3D);
}
void draw(){
  background(255);
  translate(width/2,height/2);
  sphere(10);
  
  box(200,50,25);//手軸
  
  fill(252,131,77);
  pushMatrix();
    translate(x,y);//發現放100，0很好
    if(mousePressed)rotateZ(radians(frameCount));
    translate(25,0,0);//讓左端放中心
    box(50,25,50);//小手腕
  popMatrix();
}
float x=0,y=0;//會動的位置
void mouseDragged(){
  x+=mouseX-pmouseX;
  y+=mouseY-pmouseY;
  println("x:"+x+" y:"+y);//印出來
}
