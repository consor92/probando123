//Variable GLOBAL
//Varible declarada por fuera de TODA ESTRUCTURA existe en todos lados para su uso

//declaracion
int homero;
char letra;
float pi;
bool existe;
String palabra;

//instanciar
int cero = 0;


void setup()
{
  	pinMode( 2 , INPUT );         //PULL-UP
    pinMode( 3 , INPUT );         //PULL-DOWN
    pinMode( 5 , OUTPUT );        //LED
    pinMode( 4 , INPUT_PULLUP );  //SIN NADA
  
  	Serial.begin(9600);
  
  	pi = 3.14;
  	pi = 3.0;
  	homero = 80;
  	palabra = "parlante" ;
  	letra = '?' ;
  	existe = false;
}

void loop()
{
  // variable LOCAL
  // variable declarada dentro de una estructura SOLO EXISTE  desntro de la estructura
  	String error;

	//Serial.print("Mi nombre es:");
  	//Serial.println( error );
  
   bool boton1 = digitalRead( 2 );	
  		// solo 1 dato dentro de los parentecis
   //Serial.println( boton1 );
  
  //condicion = pregunta respondida con V o F
  // if( condicion )
  
  //  operadores de comparacion
  //  >   <    >=    <=    ==   !=
  
  //operadores logicos
  //  !  -> invierte/contrario
  if( 4 != 5 )
  {
    //condicion es verdadera
    //ACCION/ES
  }else if( 8 == 8 ){
    //damos posibilidad de volver a pretar cuando es falso
    //ACCION/ES
  }else{
    //condicion es false
    //ACCION/ES
  }
  
  
  if(  digitalRead(2) == LOW  )
  {
    digitalWrite( 5 , HIGH );
  }else{
   	digitalWrite( 5 , LOW  ); 
  }
  
  
}

