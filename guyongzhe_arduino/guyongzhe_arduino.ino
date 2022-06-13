#include <pitches.h>
#include <themes.h>
const int sp=9;
/*
 * 65bpm
 * 4/4
 * B
*/
const int gyz[]={
NOTE_D5,NOTE_B4,NOTE_C5,NOTE_A4,NOTE_D5,NOTE_B4,NOTE_C5,NOTE_A4,
NOTE_D5,NOTE_B4,NOTE_C5,NOTE_A4,NOTE_D5,NOTE_B4,NOTE_C5,NOTE_A4,
NOTE_D5,NOTE_B4,NOTE_C5,NOTE_A4,NOTE_D5,NOTE_B4,NOTE_C5,NOTE_A4,
NOTE_D5,NOTE_B4,NOTE_C5,NOTE_A4,NOTE_D5,NOTE_B4,NOTE_C5,NOTE_A4,
NOTE_E5,0,NOTE_C5,NOTE_D5,NOTE_C5,//都是勇敢
NOTE_E5,0,NOTE_C5,NOTE_C5,NOTE_D5,NOTE_C5,NOTE_E5,//的 你额头的伤
NOTE_A4,NOTE_C5,NOTE_A4,NOTE_C5,NOTE_A4,NOTE_C5,NOTE_D5,NOTE_C5,//口你的不同你犯的
NOTE_B4,0,//错
NOTE_E5,0,NOTE_C5,NOTE_D5,NOTE_C5,//都 不必隐
NOTE_E5,NOTE_C5,NOTE_C5,NOTE_D5,NOTE_C5,NOTE_E5,//藏 你破旧的玩
NOTE_A4,NOTE_C5,NOTE_A4,NOTE_C5,NOTE_A4,NOTE_C5,NOTE_E5,NOTE_D5,//偶你的面具你的自
NOTE_B4,0,//我
NOTE_A4,NOTE_C5,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_G5,NOTE_A5,NOTE_A5,NOTE_G5,NOTE_A5,NOTE_G5,NOTE_A5,NOTE_G5,//他们说要带着光驯服每一头怪
NOTE_E5,NOTE_E5,0,NOTE_A4,NOTE_C5,//兽 他们
NOTE_A4,NOTE_A5,NOTE_A5,NOTE_G5,NOTE_A5,NOTE_G5,NOTE_B4,NOTE_B5,NOTE_B5,NOTE_A5,NOTE_B5,//说要缝好你的伤没有人爱
NOTE_B5,NOTE_A5,NOTE_E5,0,NOTE_E5,NOTE_G5,NOTE_E5,//小丑 为何孤
NOTE_D5,NOTE_E5,NOTE_D5,NOTE_E5,NOTE_D5,NOTE_E5,NOTE_G5,NOTE_E5,NOTE_G5,NOTE_E5,//独不可光荣人只有不完
NOTE_D5,NOTE_E5,NOTE_D5,NOTE_E5,NOTE_D5,0,NOTE_C5,NOTE_D5,//美值得歌颂 谁说
NOTE_E5,NOTE_A4,NOTE_C5,NOTE_E5,NOTE_D5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_C5,//污泥满身的不算英
NOTE_A4,0,NOTE_A5,NOTE_B5,//雄 爱你（副歌）
NOTE_C6,NOTE_D6,NOTE_B5,NOTE_C6,NOTE_C6,NOTE_C6,NOTE_B5,NOTE_C6,NOTE_D6,NOTE_B5,NOTE_C6,NOTE_C6,NOTE_C6,NOTE_D6,//孤身走暗巷 爱你不跪的模样 爱你
NOTE_E6,NOTE_D6,NOTE_E6,NOTE_D6,NOTE_E6,NOTE_E6,NOTE_D6,NOTE_E6,NOTE_G6,NOTE_D6,NOTE_A5,NOTE_B5,//对峙过绝望不肯哭一场 爱你
NOTE_C6,NOTE_D6,NOTE_B5,NOTE_C6,NOTE_C6,NOTE_C6,NOTE_B5,NOTE_C6,NOTE_D6,NOTE_B5,NOTE_C6,NOTE_C6,NOTE_C6,NOTE_D6,//破烂的衣裳 却敢堵命运的枪 爱你
NOTE_E6,NOTE_D6,NOTE_E6,NOTE_D6,NOTE_E6,NOTE_E6,NOTE_D6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_G6,//和我一样想缺口都一样 去
NOTE_E6,NOTE_G6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_G6,NOTE_A6,NOTE_E6,NOTE_G6,NOTE_G6,//吗 配吗这褴褛的披风 战
NOTE_E6,NOTE_G6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_G6,NOTE_A6,NOTE_E6,NOTE_G6,NOTE_G6,NOTE_G6,//吗 战啊 以最卑微的梦 致那
NOTE_E6,NOTE_D6,NOTE_D6,NOTE_D6,NOTE_C6,NOTE_E6,NOTE_E6,NOTE_D6,NOTE_D6,NOTE_D6,NOTE_C6,NOTE_C6,//黑夜中的呜咽和怒吼
NOTE_A5,0,NOTE_G6,NOTE_G6,//谁说
NOTE_E6,NOTE_D6,NOTE_D6,NOTE_D6,NOTE_C6,NOTE_E6,NOTE_E6,NOTE_D6,NOTE_D6,NOTE_D6,NOTE_C6,NOTE_C6//站在光里的才算英雄
};
const byte del[]={
2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,
11,2,1,1,1,
9,2,1,1,1,1,1,
3,1,3,1,3,1,3,1,
8,8,
11,2,1,1,1,
11,1,1,1,1,1,
3,1,3,1,3,1,3,1,
8,8,
1,1,3,1,1,1,2,1,1,1,1,1,1,
1,7,6,1,1,
3,1,1,1,1,1,3,1,1,1,2,
1,2,9,1,1,1,1,
3,1,3,1,3,1,1,1,1,1,
3,1,3,1,4,2,1,1,
2,2,2,2,3,1,1,1,2,
8,6,1,1,
1,1,1,1,2,1,1,1,1,1,1,2,1,1,
1,1,1,1,2,1,1,2,2,2,1,1,
1,1,1,1,2,1,1,1,1,1,1,2,1,1,
1,1,1,1,2,1,1,2,2,2,2,
3,1,3,1,1,1,1,1,2,2,
3,1,3,1,1,1,1,1,2,1,1,
1,1,2,2,1,1,1,1,2,2,1,1,
8,6,1,1,
1,1,2,2,1,1,1,1,2,2,1,1
};
void setup() {
  // put your setup code here, to run once:
  pinMode(sp,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
  for (int i=0;i<sizeof(gyz)/sizeof(int);i++){
    int durat=125*(del[i]*1.82);
    tone(sp,gyz[i],durat);
    //Serial.printf("number:%d,sound:%d,delay:%d\n",i,gyz[i],durat);
    Serial.print("number:");
    Serial.print(i+1);
    Serial.print(' ');
    Serial.print("tone:");
    Serial.print(gyz[i]);
    Serial.print(' ');
    Serial.print("delay:");
    Serial.print(durat);
    Serial.println();
    delay(durat);
    noTone(sp);
    delay(20);
  }
}
