// grupo 07

// Alumnos
// Valencia Avendaño Manuel 
// Rojas Aliaga Jordy

int verde = 3, amarillo = 2, rojo = 1 , a = 10, b = 9, c = 8, d = 7, e = 6, 
	f = 5, g = 4;

void setup() {
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
	digitalWrite(rojo, HIGH);
	digitalWrite(amarillo, LOW); 
	for (int i = 1; i<= 7; i++) {
		pintarNumero(i);
		delay(1000);
	}
	digitalWrite(amarillo, HIGH);      
	for (int i = 1; i<= 2; i++) {
		pintarNumero(i);
		delay(1000);
	}
	digitalWrite(rojo, LOW);
	digitalWrite(amarillo, LOW);  
	digitalWrite(verde, HIGH);
	for (int i = 1; i<= 8; i++) {
		pintarNumero(i);
		delay(1000);
	}              
	digitalWrite(amarillo, HIGH); 
	digitalWrite(verde, LOW);
	for (int i = 1; i<= 3; i++) {
		pintarNumero(i);
		delay(1000);
	}   
}

void pintarNumero(int n){
	switch(n){
		case 1:
			limpiarNumeros();
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			break; 
		case 2:
			limpiarNumeros();
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(g, HIGH);
			digitalWrite(e, HIGH);
			digitalWrite(d, HIGH);
			break; 
		case 3:
			limpiarNumeros();
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(g, HIGH);
			break; 
		case 4:
			limpiarNumeros();
			digitalWrite(f, HIGH);
			digitalWrite(g, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			break; 
		case 5:
			limpiarNumeros();
			digitalWrite(a, HIGH);
			digitalWrite(f, HIGH);
			digitalWrite(g, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			break;
		case 6:
			limpiarNumeros();
			digitalWrite(f, HIGH);
			digitalWrite(e, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(g, HIGH);
			break; 
		case 7:
			limpiarNumeros();
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			break;  
		case 8:
			limpiarNumeros();
			digitalWrite(a, HIGH);
			digitalWrite(b, HIGH);
			digitalWrite(c, HIGH);
			digitalWrite(d, HIGH);
			digitalWrite(e, HIGH);
			digitalWrite(f, HIGH);
			digitalWrite(g, HIGH);
			break;  
	}
}

void limpiarNumeros(){
	digitalWrite(a, LOW);
	digitalWrite(b, LOW);
	digitalWrite(c, LOW);
	digitalWrite(d, LOW);
	digitalWrite(e, LOW);
	digitalWrite(f, LOW);
	digitalWrite(g, LOW);
}