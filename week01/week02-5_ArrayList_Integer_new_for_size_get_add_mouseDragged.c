//week02-5_ArrayList_Integer_new_for_size_get_add_mouseDragged
//�n�Q�θ�Ƶ��c����v�y��O�_��
ArrayList<Integer>x=new ArrayList<Integer>();
ArrayList<Integer>y=new ArrayList<Integer>();
PImage img;
void setup(){
  size(400,400);
  img=loadImage("cute.png");
}//����ɩԨ�{��
void draw(){
  background(img);
  fill(255,200);//�b�z����m
  rect(0,0,400,400);//�e�W�j���|��Υ����\��
  //�W���Oweek02-4�U���ΰj��q��Ƶ��c���X��
  for(int i=1;i<x.size();i++){
    line(x.get(i),y.get(i),x.get(i-1),y.get(i-1));
  }
}
void mouseDragged(){
  x.add(mouseX);
  y.add(mouseY);
}
