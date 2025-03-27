//week06-6_push_bos_push_TRT_box_push_TRT_pop_pop_pop
void setup(){
  size(500,400,P3D);
}
void draw(){
  background(255);
  translate(width/2,height/2);
  sphere(10);
  
  fill(252,131,77);
  pushMatrix();//04
  
    box(50,200,25);//手臂
    
    pushMatrix();
    translate(x,y);//03掛到手臂上，觀察到0，-100
      rotateZ(radians(frameCount));//02把璇傳放入
      translate(100,0);//01把手肘的移動量100，0放入
      box(200,50,25);
   
      pushMatrix();
        translate(100,0);
        rotateZ(radians(frameCount));
        translate(25,0,0);//讓左端放中心
        box(50,25,50);//小手腕
        popMatrix();
      popMatrix();
    popMatrix();//04
}
float x=0,y=0;//會動的位置
void mouseDragged(){
  x+=mouseX-pmouseX;
  y+=mouseY-pmouseY;
  println("x:"+x+" y:"+y);//印出來
}
