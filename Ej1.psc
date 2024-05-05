Algoritmo  Suma_Naturales
	Definir n Como Entero;
	Definir suma Como Entero;
	Definir i Como Entero;
	Escribir "Ingrese un número natural: ";
	Leer n;
	suma <- 0;
	Para i <- 1 Hasta n Con Paso 1 Hacer
		suma <- suma + i;
	Fin Para
	Escribir "La suma de los números naturales desde 1 hasta ", n, " es: ", suma;
FinAlgoritmo

