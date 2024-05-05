Proceso Alumnos_Aprobados_Reprobados
	Definir aprobados, reprobados, nota, suma, i Como Entero;
	aprobados <- 0;
	reprobados <- 0;
	suma <- 0;
	Para i <- 1 Hasta 8 Con Paso 1 Hacer
		Escribir "Ingrese la nota del estudiante ", i, ": ";
		Leer nota;
		suma <- suma + nota;
		Si nota >= 70 Entonces
			aprobados <- aprobados + 1;
		Sino
			reprobados <- reprobados + 1;
		Fin Si;
	Fin Para
	Escribir "Cantidad de alumnos aprobados: ", aprobados;
	Escribir "Cantidad de alumnos reprobados: ", reprobados;
	Escribir "Promedio general del grupo: ", suma / 8.0;
FinProceso
