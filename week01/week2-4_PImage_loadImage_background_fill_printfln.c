//week2-4_PImage_loadImage_background_fill_printfln
//�s���}�l�A�n�y��
PImage img;
void setup(){
  size(400,400);
  img=loadImage("cute.png");
}//����ɩԨ�{��
void draw(){
  background(img);
  fill(255,mouseX);//�b�z����m
  println(mouseX);//��mouseX����b�U���p�¦L�X��
  rect(0,0,400,400);//�e�W�j���|��Υ����\��
}
