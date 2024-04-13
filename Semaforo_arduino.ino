
//Super TOOLS LP//

#define led_verde 8
#define led_amarillo 9
#define led_rojo 10

void setup(){
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(led_rojo, OUTPUT);
}

void loop(){

  /// 10 segundos para el led verde
  digitalWrite(led_verde, 1);
  digitalWrite(led_amarillo, 0);
  digitalWrite(led_rojo, 0);
  delay(10000);

  /// 2 segundos para el led amarillo
  digitalWrite(led_verde, 0);
  digitalWrite(led_amarillo, 1);
  digitalWrite(led_rojo, 0);
  delay(2000);

  /// 10 segundos para el led rojo
  digitalWrite(led_verde, 0);
  digitalWrite(led_amarillo, 0);
  digitalWrite(led_rojo, 1);
  delay(10000);

  /// 2 segundos para el led amarillo
  digitalWrite(led_verde, 0);
  digitalWrite(led_amarillo, 1);
  digitalWrite(led_rojo, 0);
  delay(2000);
}
