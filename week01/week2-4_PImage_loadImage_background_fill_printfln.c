//week2-4_PImage_loadImage_background_fill_printfln
//新的開始，要描圖
PImage img;
void setup(){
  size(400,400);
  img=loadImage("cute.png");
}//把圖檔拉到程式
void draw(){
  background(img);
  fill(255,mouseX);//半透明色彩
  println(mouseX);//把mouseX的質在下面小黑印出來
  rect(0,0,400,400);//畫超大的四邊形全部蓋住
}
