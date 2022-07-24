# Analizador sintactico hecho en Bison

## Descripción

Analizador sintactico desarrollado para la asignatura de compiladores
de la Universidad Nacional de Loja.

## Instrucciones

Para compilar el analizador sintactico seguir las siguientes instrucciones:

- flex lexico.l
- bison -d sintactico.y
- gcc -o parser lex.yy.c sintactico.tab.c

## Uso

- ./parser test.txt
- ./parser error.txt

## Agradecimiento

Esperamos que este programa sea de ayuda y si existe algun fallo o quiere
dar ideas para mejorar el programa estaremos gustosos de aceptar sus ideas
a los siguientes correos:

- anderson.quizhpe@unl.edu.ec
- david.pacheco@unl.edu.ec
- luis.negron@unl.edu.ec
