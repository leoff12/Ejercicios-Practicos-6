Proceso Promedio_Seccion
	Definir suma, nota, i Como Entero; 
	suma <- 0;
	Para i <- 1 Hasta 10 Con Paso 1 Hacer;
		Escribir "Ingrese la nota del estudiante ", i, ": ";
		Leer nota;
		suma <- suma + nota;
	Fin Para;
	Escribir "El promedio general de la sección es: ", suma / 10.0;
FinProceso
