Proceso producto_punto
    Definir longi, i Como Entero;
    Definir vector1, vector2 Como Entero;
    Definir resultado Como Real;
	
    Escribir "Ingrese la longitud de los vectores:";
    Leer longi;
	
 
    Definir vector1 Como Entero;
    Definir vector2 Como Entero;
	
 
    Escribir "Ingrese los elementos del primer vector:";
    Para i = 1 Hasta longi Con Paso 1 Hacer;
        Leer vector1;
    FinPara;
	
    
    Escribir "Ingrese los elementos del segundo vector:";
    Para i = 1 Hasta longi Con Paso 1 Hacer;
        Leer vector2;
    FinPara;
	
   
    resultado = 0;
    Para i = 1 Hasta longi Con Paso 1 Hacer;
        resultado = resultado + (vector1[i] * vector2[i]);
    FinPara;
	
    // Mostrar el resultado
    Escribir "El producto punto es:", resultado;
FinProceso;


