// Pino ligado ao buzzer
int buzzer = 10;
const int pinoPOT = A5; //PINO ANALÓGICO UTILIZADO PELO POTENCIÔMETRO

float Potenciometro = 0;
void setup() 
{
    // Define o pino do Buzzer como Saida 
    pinMode(pinoPOT, INPUT);
    pinMode(buzzer,OUTPUT);    
}

void loop() 
{
    Potenciometro = map(analogRead(pinoPOT), 0, 1023, 0, 255);
    analogWrite(buzzer, Potenciometro);
    
    // Aciona o buzzer na frequencia relativa ao Dó em Hz
    tone(buzzer,261);    
    // Espera um tempo para Desativar
    delay(200);
    //Desativa o buzzer
    noTone(buzzer); 
    // Aciona o buzzer na frequencia relativa ao Ré em Hz   
    tone(buzzer,293);             
    delay(200);    
    noTone(buzzer); 
    // Aciona o buzzer na frequencia relativa ao Mi em Hz
    tone(buzzer,329);      
    delay(200);
    noTone(buzzer);     
    // Aciona o buzzer na frequencia relativa ao Fá em Hz
    tone(buzzer,349);    
    delay(200);    
    noTone(buzzer); 
    // Aciona o buzzer na frequencia relativa ao Sol em Hz
    tone(buzzer,392);            
    delay(200);
    noTone(buzzer); 
}