//week2-5a_combin02-4and02-3_bad
//�n�y��,�o�X��
PImage img;
void setup(){
  size(400,400);
  img=loadImage("cute.png");
}//����ɩԨ�{��
void draw(){
  background(img);
  fill(255,200);//�b�z����m
  rect(0,0,400,400);//�e�W�j���|��Υ����\��
  //�W���Oweek02-4�U���Oweek02-3���{�o�L�k�W�h
  stroke(255,0,0);//���⪺�u
  if(mousePressed) line(mouseX,mouseY,pmouseX,pmouseY);
}
