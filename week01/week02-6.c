//week02_6
//想要很多段，不要一直線一直畫
ArrayList<Integer>x,y;
ArrayList<ArrayList<Integer>>xx=new ArrayList<ArrayList<Integer>>();
ArrayList<ArrayList<Integer>>yy=new ArrayList<ArrayList<Integer>>();
PImage img;
void setup(){
  size(400,400);
  img=loadImage("cute.png");
}//把圖檔拉到程式
void draw(){
  background(img);
  fill(255,200);//半透明色彩
  rect(0,0,400,400);//畫超大的四邊形全部蓋住
  //上面是week02-4下面用迴圈從資料結構取出來
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
