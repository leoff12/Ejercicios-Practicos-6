Proceso Suma_Vectores
	Definir suma Como Entero;
	Escribir "Ingrese la longitud de los vectores: ";
	Leer n;
	Definir v1[n], v2[n], suma[n] Como Entero;
	Escribir "Ingrese los elementos del primer vector: ";
	Para i <- 0 Hasta n - 1 Hacer
		Leer v1[i];
	Fin Para
	Escribir "Ingrese los elementos del segundo vector: ";
	Para i <- 0 Hasta n - 1 Hacer
		Leer v2[i];
	Fin Para
	Para i <- 0 Hasta n - 1 Hacer
		suma[i] <- v1[i] + v2[i];
	Fin Para
	Escribir "La suma de los vectores es: ";
	Para i <- 0 Hasta n - 1 Hacer
		Escribir suma[i], " ";
	Fin Para
	Escribir "";
FinProceso


