int led  = 5;
#define LED6 = 6
int speaker = 9;
int aluminumFoil = A2;
int sensorValue;


int C = 1046;
int D = 1175;
int E = 1319;
int F = 1397;
int F1 = 1450;
int G = 1598;
int A = 1760;
int B = 1976;
int C1 = 2093;
int D1 = 2349;


void setup() {
pinMode(led, OUTPUT); 
pinMode(speaker, OUTPUT);
pinMode(6, OUTPUT);
pinMode(aluminumFoil, INPUT);
digitalWrite(aluminumFoil, HIGH); 
Serial.begin(9600);

}

void loop(){     

  
    digitalWrite(led, HIGH);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(led,LOW);
    digitalWrite(6,LOW);
    delay(500);
    digitalWrite(led, HIGH);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    digitalWrite(6, LOW);
    delay(500);


    tone(speaker, G);
    delay(500);
    noTone(speaker);
    delay(500);
    tone(speaker, G);
    delay(500);
    noTone(speaker);
    delay(500);
    tone(speaker, B);
    delay(500);
    noTone(speaker);
    delay(500);
    tone(speaker, B);
    delay(500);
    noTone(speaker);
    delay(300);
    tone(speaker, C1);
    delay(300);
    noTone(speaker);
    delay(100);
    tone(speaker, B);
    delay(100);
    noTone(speaker);
    delay(100);
    tone(speaker, C1);
    delay(300);
    noTone(speaker);
    delay(100); 
    tone(speaker, D1);
    delay(1000);
    noTone(speaker);
    delay(100);
    tone(speaker, F1);
    delay(500);
    noTone(speaker);
    delay(500);
    tone(speaker, A);
    delay(500);
    noTone(speaker);
    delay(500); 
    tone(speaker, C1);
    delay(500);
    noTone(speaker);
    delay(500);
    tone(speaker, D1);
    delay(250);
    noTone(speaker);
    delay(250);
    tone(speaker, D1);
    delay(250);
    noTone(speaker);
    delay(250); 
    tone(speaker, D1);
    delay(250);
    noTone(speaker);
    delay(250);
    tone(speaker, C1);
    delay(300);
    noTone(speaker);
    tone(speaker, B);
    delay(230);
    noTone(speaker);
    delay(200);
    tone(speaker, G);
    delay(300);
    noTone(speaker);
    delay(300); 
    tone(speaker, G);
    delay(300);
    noTone(speaker);
    delay(1000);

    digitalWrite(led, HIGH);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(led,LOW);
    digitalWrite(6,LOW);
    delay(500);
    digitalWrite(led, HIGH);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    digitalWrite(6, LOW);
    delay(500);
}

echo "# Blink-Mouse" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/yamikor/Blink-Mouse.git
git push -u origin main
