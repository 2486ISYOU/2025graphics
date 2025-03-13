//week04-5b_translate_mouseX_mouseY_rotateZ_translate_box
void setup(){
  size(400,400,P3D);
}
void draw(){
  background(128);
  //translate(width/2,height/2);
  
    translate(mouseX,mouseY);
    rotateZ(radians(frameCount));
    translate(0,-50);
    box(10,100,10);
}
