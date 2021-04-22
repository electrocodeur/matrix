#define ROW_1 2
#define ROW_2 3
#define ROW_3 4
#define ROW_4 5
#define ROW_5 6
#define ROW_6 7
#define ROW_7 8
#define ROW_8 9

#define COL_1 10
#define COL_2 11
#define COL_3 12
#define COL_4 13
#define COL_5 A0
#define COL_6 A1
#define COL_7 A2
#define COL_8 A3

const byte rows[] = {
  ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8
};
byte core[] = {  B00000000,
                 B00000000,
                 B01110111,
                 B11111111,
                 B11111111,
                 B01111110,
                 B00111100,
                 B00011000
              };
byte star1[] = {B00000110, B11000010, B10100100, B00011000, B00011000, B00100101, B01000011, B01100000};
byte star2[] = {B00110000, B00100000, B00100111, B00011001, B10011000, B11100100, B00000100, B00001100};
byte star3[] = {B00000110, B10001000, B10010000, B01011100, B00111010, B00001001, B00010001, B01100000};
byte ALL[] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111};
byte EX[] = {B00000000, B00010000, B00010000, B00010000, B00010000, B00000000, B00010000, B00000000};
byte A[] = {B00000000, B00111100, B01100110, B01100110, B01111110, B01100110, B01100110, B01100110};
byte B[] = {B01111000, B01001000, B01001000, B01110000, B01001000, B01000100, B01000100, B01111100};
byte C[] = {B00000000, B00011110, B00100000, B01000000, B01000000, B01000000, B00100000, B00011110};
byte D[] = {B00000000, B00111000, B00100100, B00100010, B00100010, B00100100, B00111000, B00000000};
byte E[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00111100, B00000000};
byte F[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00100000, B00000000};
byte G[] = {B00000000, B00111110, B00100000, B00100000, B00101110, B00100010, B00111110, B00000000};
byte H[] = {B00000000, B00100100, B00100100, B00111100, B00100100, B00100100, B00100100, B00000000};
byte I[] = {B00000000, B00111000, B00010000, B00010000, B00010000, B00010000, B00111000, B00000000};
byte J[] = {B00000000, B00011100, B00001000, B00001000, B00001000, B00101000, B00111000, B00000000};
byte K[] = {B00000000, B00100100, B00101000, B00110000, B00101000, B00100100, B00100100, B00000000};
byte L[] = {B00000000, B00100000, B00100000, B00100000, B00100000, B00100000, B00111100, B00000000};
byte M[] = {B00000000, B00000000, B01000100, B10101010, B10010010, B10000010, B10000010, B00000000};
byte N[] = {B00000000, B00100010, B00110010, B00101010, B00100110, B00100010, B00000000, B00000000};
byte O[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000010, B00111100, B00000000};
byte P[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100000, B00100000, B00000000};
byte Q[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000110, B00111110, B00000001};
byte R[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100100, B00100100, B00000000};
byte S[] = {B00000000, B00111100, B00100000, B00111100, B00000100, B00000100, B00111100, B00000000};
byte T[] = {B00000000, B01111100, B00010000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte U[] = {B00000000, B01000010, B01000010, B01000010, B01000010, B01000010, B01111110, B00000000};
byte V[] = {B00000000, B00100010, B00100010, B00100010, B00010100, B00010100, B00001000, B00000000};
byte W[] = {B00000000, B10000010, B10010010, B01010100, B01010100, B00101000, B00000000, B00000000};
byte X[] = {B00000000, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B00000000};
byte Y[] = {B00000000, B01000100, B00101000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte Z[] = {B00000000, B00111100, B00000100, B00001000, B00010000, B00100000, B00111100, B00000000};
float timeCount = 0;

void setup() {
  for (byte i = 2; i <= 13; i++)
    pinMode(i, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
}

void loop() {
  timeCount += 1;
  delay(5);
  if (timeCount <  20)
  {
    drawScreen(E);
  }
  else if (timeCount <  40)
  {
    drawScreen(L);
  }
  else if (timeCount <  60)
  {
    drawScreen(E);
  }
  else if (timeCount <  80)
  {
    drawScreen(C);
  }
  else if (timeCount <  100)
  {
    drawScreen(T);
  }
  else if (timeCount <  120)
  {
    drawScreen(R);
  }
  else if (timeCount <  140) {
    drawScreen(O);
  }
  else if (timeCount <  160)
  {
    drawScreen(C);
  }
  else if (timeCount <  180)
  {
    drawScreen(O);
  }
  else if (timeCount <  200)
  {
    drawScreen(D);
  }
  else if (timeCount <  220) {
    drawScreen(E);
  }
  else if (timeCount <  240)
  {
    drawScreen(U);
  }
  else if (timeCount <  260)
  {
    drawScreen(R);
  }
    else if (timeCount <  280)
  {
    drawScreen(core);
  }
  else if (timeCount <  330)
  {
    drawScreen(ALL);
  }
  else {
    // back to the start
    timeCount = 0;
  }
}
void  drawScreen(byte buffer2[]) {


  // Turn on each row in series
  for (byte i = 0; i < 8; i++) {
    setColumns(buffer2[i]); // Set columns for this specific row

    digitalWrite(rows[i], HIGH);
    delay(2); // Set this to 50 or 100 if you want to see the multiplexing effect!
    digitalWrite(rows[i], LOW);

  }
}


void setColumns(byte b) {
  digitalWrite(COL_1, (~b >> 7) & 0x01); // Get the 1st bit: 10000000
  digitalWrite(COL_2, (~b >> 6) & 0x01); // Get the 2nd bit: 01000000
  digitalWrite(COL_3, (~b >> 5) & 0x01); // Get the 3rd bit: 00100000
  digitalWrite(COL_4, (~b >> 4) & 0x01); // Get the 4th bit: 00010000
  digitalWrite(COL_5, (~b >> 3) & 0x01); // Get the 5th bit: 00001000
  digitalWrite(COL_6, (~b >> 2) & 0x01); // Get the 6th bit: 00000100
  digitalWrite(COL_7, (~b >> 1) & 0x01); // Get the 7th bit: 00000010
  digitalWrite(COL_8, (~b >> 0) & 0x01); // Get the 8th bit: 00000001

  // If the polarity of your matrix is the opposite of mine
  // remove all the '~' above.
}
