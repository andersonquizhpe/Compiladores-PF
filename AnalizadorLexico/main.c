/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jhander
 *
 * Created on 2 de junio de 2022, 11:52
 */

#include <stdio.h>
#include <stdlib.h>

//Función para obtener los componentes léxicos
void obtener_token();

int main(int argc, char** argv){
	printf("    _                _ _              _            \n");
	printf("   / \\   _ __   __ _| (_)______ _  __| | ___  _ __ \n");
	printf("  / _ \\ | '_ \\ / _` | | |_  / _` |/ _` |/ _ \\| '__|\n");
	printf(" / ___ \\| | | | (_| | | |/ / (_| | (_| | (_) | |   \n");
	printf("/_/   \\_\\_| |_|\\__,_|_|_/___\\__,_|\\__,_|\\___/|_| \n");

	printf(" _              _           \n");
	printf("| |    _____  _(_) ___ ___  \n");
	printf("| |   / _ \\ \\/ / |/ __/ _ \\ \n");
	printf("| |__|  __/>  <| | (_| (_) |\n");
	printf("|_____\\___/_/\\_\\_|\\___\\___/ \n");

	printf("\n");
	printf("               Compiladores         \n");
	printf("\n");
	printf("\t+ Luis Negrón, \n\t+ David Pacheco, \n\t+ Anderson Quizhpe   \n");
	printf("\n");
	
	obtener_token();
	
	return 0;
}

void obtener_token(){
	FILE *archivo;
	char nombre_archivo[100];
	int num_linea=1;
	char caracter = 0;
	
	printf("Ingresa el nombre del archivo:\n");
	scanf("%s", &nombre_archivo);
	printf("El archivo que se esta analizando es: %s...\n", nombre_archivo);
	archivo = fopen(nombre_archivo, "r");
	
	if (archivo == NULL){ 
		printf ("Error al abrir el archivo");
	}
	while((caracter = fgetc(archivo))!= EOF){
		if(caracter == ' ' || caracter == '\t'){
			//Se ignoran los espacios en blanco y tabulaciones
			continue;
		}else if(caracter == '\n'){
			//Se incrementa el numero de linea
			num_linea++;
			continue;
		}
		printf("%d", num_linea);
	}
	fclose(archivo);
}
	
