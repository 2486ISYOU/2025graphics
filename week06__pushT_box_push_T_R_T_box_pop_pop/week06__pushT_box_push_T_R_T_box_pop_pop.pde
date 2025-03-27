//week06-5_pushT_box_push_T_R_T_box_pop_pop
void setup(){
  size(500,400,P3D);
}
void draw(){
  background(255);
  translate(width/2,height/2);
  sphere(10);
  
  fill(252,131,77);
  pushMatrix();
    translate(x,y);
    box(200,50,25);
    
    //把程式往右縮排
    pushMatrix();
      translate(100,0);//01發現放100，0很好
      //if(mousePressed)rotateZ(radians(frameCount));
      rotateZ(radians(frameCount));//02把剛剛的if(mousePressed)刪掉，只轉動
      translate(25,0,0);//讓左端放中心
      box(50,25,50);//小手腕
     popMatrix();
    popMatrix();
}
float x=0,y=0;//會動的位置
void mouseDragged(){
  x+=mouseX-pmouseX;
  y+=mouseY-pmouseY;
  println("x:"+x+" y:"+y);//印出來
}
