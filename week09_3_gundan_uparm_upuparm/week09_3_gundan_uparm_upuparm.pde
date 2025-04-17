// week09_3_gundan_uparm_upuparm
PShape uparml, upuparml;
void setup(){
  size(400, 400, P3D);
  uparml = loadShape("uparm1.obj");
  upuparml = loadShape("upuparm1.obj");
}
void draw(){
  background(204);
  translate(200, 300);
  sphere(10);
  
  scale(10, -10, 10);
  
  shape(upuparml, 0, 0);
  pushMatrix();
    translate(-4.1, 19.9);
    rotateY(radians(mouseX));
    translate(4.1, -19.9);
    //rotateX(radians(mouseY-60));
    //translate(mouseX/10.0, -mouseY/10.0);
    //println(mouseX/10.0, -mouseY/10.0);
    shape(uparml, 0, 0);
   popMatrix();
}
