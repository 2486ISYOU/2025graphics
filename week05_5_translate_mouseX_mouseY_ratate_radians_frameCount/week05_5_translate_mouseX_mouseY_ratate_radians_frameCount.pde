//week05-5_translate_mouseX_mouseY_ratate_radians_frameCount
void setup(){
  size(400,400);
}
void draw(){
  background(204);
  rotate(radians(frameCount*10));
  translate(mouseX,mouseY);
  rect(-50,-5,100,10);
}
