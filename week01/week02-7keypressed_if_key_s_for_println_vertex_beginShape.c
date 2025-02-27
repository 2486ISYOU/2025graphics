//week02_7
//想要把畫出來的座標變成我們的程式碼
ArrayList<Integer>x, y;
ArrayList<ArrayList<Integer>>xx=new ArrayList<ArrayList<Integer>>();
ArrayList<ArrayList<Integer>>yy=new ArrayList<ArrayList<Integer>>();
PImage img;
void setup() {
  size(400, 400);
  img=loadImage("cute.png");
}//把圖檔拉到程式
void draw() {
  background(img);
  fill(255, 200);//半透明色彩
  rect(0, 0, 400, 400);//畫超大的四邊形全部蓋住
  //上面是week02-4下面用迴圈從資料結構取出來
  for (int I=0; I<xx.size(); I++) {
    ArrayList<Integer>x=xx.get(I);
    ArrayList<Integer>y=yy.get(I);
    for (int i=1; i<x.size(); i++) {
      line(x.get(i), y.get(i), x.get(i-1), y.get(i-1));
    }
  }
}
void keyPressed() {
  if (key=='s'||key=='S') {
    for (int I=0; I<xx.size(); I++) {
      ArrayList<Integer>x=xx.get(I);
      ArrayList<Integer>y=yy.get(I);
      println("beginShape();");
      for (int i=1; i<x.size(); i++) {
        println("vertex("+x.get(i)+","+y.get(i)+");");//line(x.get(i),y.get(i),x.get(i-1),y.get(i-1));
      }//改在keyPressed()按下s或S時在全部印出來
      println("endShape();");
    }
  }
}
void mouseDragged() {
  println("vertex("+mouseX+","+mouseY+");");
  x.add(mouseX);
  y.add(mouseY);
}
void mousePressed() {
  x=new ArrayList<Integer>();
  xx.add(x);
  y=new ArrayList<Integer>();
  yy.add(y);
}
