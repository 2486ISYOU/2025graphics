//week2-5a_combin02-4and02-3_bad
//要描圖,卻出錯
PImage img;
void setup(){
  size(400,400);
  img=loadImage("cute.png");
}//把圖檔拉到程式
void draw(){
  background(img);
  fill(255,200);//半透明色彩
  rect(0,0,400,400);//畫超大的四邊形全部蓋住
  //上面是week02-4下面是week02-3但現卻無法上去
  stroke(255,0,0);//紅色的線
  if(mousePressed) line(mouseX,mouseY,pmouseX,pmouseY);
}
