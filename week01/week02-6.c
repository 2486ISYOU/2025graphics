//week02_6
//�Q�n�ܦh�q�A���n�@���u�@���e
ArrayList<Integer>x,y;
ArrayList<ArrayList<Integer>>xx=new ArrayList<ArrayList<Integer>>();
ArrayList<ArrayList<Integer>>yy=new ArrayList<ArrayList<Integer>>();
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
  for(int I=0;I<xx.size();I++){
    ArrayList<Integer>x=xx.get(I);
    ArrayList<Integer>y=yy.get(I);
    for(int i=1;i<x.size();i++){
      line(x.get(i),y.get(i),x.get(i-1),y.get(i-1));
    }
  }
}
void mouseDragged(){
  x.add(mouseX);
  y.add(mouseY);
}
void mousePressed(){
  x=new ArrayList<Integer>();xx.add(x);
  y=new ArrayList<Integer>();yy.add(y);
}
