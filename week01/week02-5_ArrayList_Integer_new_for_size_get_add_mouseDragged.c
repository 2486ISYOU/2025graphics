//week02-5_ArrayList_Integer_new_for_size_get_add_mouseDragged
//要利用資料結構把歷史軌跡記起來
ArrayList<Integer>x=new ArrayList<Integer>();
ArrayList<Integer>y=new ArrayList<Integer>();
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
  for(int i=1;i<x.size();i++){
    line(x.get(i),y.get(i),x.get(i-1),y.get(i-1));
  }
}
void mouseDragged(){
  x.add(mouseX);
  y.add(mouseY);
}
