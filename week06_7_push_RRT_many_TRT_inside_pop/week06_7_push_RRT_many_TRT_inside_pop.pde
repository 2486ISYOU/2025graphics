//week06-7_push_RRT_many_TRT_inside_pop
void setup(){
  size(500,800,P3D);
}
void draw(){
  background(255);
  translate(width/2,height/2);
  sphere(10);//中心
  
  fill(252,131,77);
  pushMatrix();
    if(mousePressed&&mouseButton==RIGHT)rotateY(radians(frameCount));//02右鍵旋轉
    if(mousePressed&&mouseButton==RIGHT)rotateZ(radians(frameCount));//03右鍵旋轉
    translate(x,y);//01要往上抬升
    box(50,200,25);//手臂
    pushMatrix();
      translate(0,-100);
      rotateZ(radians(frameCount));
      translate(100,0);
      box(200,50,25);
   
      pushMatrix();
        translate(100,0);
        rotateZ(radians(frameCount));
        translate(25,0,0);//讓左端放中心
        box(50,25,50);//小手腕
        popMatrix();
      popMatrix();
    popMatrix();
}
float x=0,y=0;//會動的位置
void mouseDragged(){
  x+=mouseX-pmouseX;
  y+=mouseY-pmouseY;
  println("x:"+x+" y:"+y);//印出來
}
