#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Estructura de las preguntas del juego
typedef struct {
    char pregunta[256];
    char opciones[4][70];
    char respuestaCorrecta;
} Pregunta;

// TODO: Dividir y asignar tareas para completar la implementación de las siguientes funciones: 

/**
 * Imprime la pregunta y sus opciones en la consola.
 * 
 * @param pregunta - La estructura de tipo Pregunta que contiene el texto de la pregunta y las opciones.
 * @return No devuelve ningún valor.
 */

void imprimirPregunta(Pregunta pregunta) {
    //AGREGAR LA IMPLEMENTACIÓN PARA IMPRIMIR EN CONSOLA LA PREGUNTA Y LAS OPCIONES.
    //NO MODIFIQUES LA FIRMA DE LA FUNCIÓN.
    if 
}

/**
 * Captura la respuesta del usuario desde la entrada estándar.
 * 
 * @return char - El carácter que representa la respuesta del usuario.
 */

char capturarRespuesta() {
    //AGREGAR LA IMPLEMENTACIÓN PARA LEER LA RESPUESTA DEL JUGADOR.
    //NO MODIFIQUES LA FIRMA DE LA FUNCIÓN.
}


/**
 * Verifica si la respuesta del usuario es correcta. 
 * Imprime un mensaje en consola indicando si ha respondido correctamente
 * 
 * @param pregunta La estructura de tipo Pregunta que contiene la pregunta y la respuesta correcta.
 * @param respuesta La respuesta ingresada por el usuario.
 * @return int - 1 si la respuesta es correcta, 0 si es incorrecta.
 */

int verificarRespuesta(Pregunta pregunta, char respuesta) {
    //AGREGAR LA IMPLEMENTACIÓN PARA VERIFICAR SI RESPONDIÓ BIEN LA PREGUNTA.
    //NO MODIFIQUES LA FIRMA DE LA FUNCIÓN. 
    if(1){
        print("¿Qué es Git?\n
            a) Un sistema de control de versiones\n
            b) Un lenguaje de programación\n
            c) Un editor de texto\n
            d) Un sistema operativo")
    }else if(2){"¿Qué comando se utiliza en Git para clonar un repositorio remoto?\n
            a) git push\n
            b) git fetch\n
            c) git clone\n
            d) git pull"
    }else if(3){"¿Cómo se llama el proceso en Git de fusionar ramas?\n
            a) Clonación\n
            b) Pull Request\n
            c) Merge\n
            d) Branching"
    }else if(4){"¿Qué comando se utiliza en Git para crear una nueva rama?\n
            a) git checkout\n
            b) git branch\
            c) git add\n
            d) git commit"
    }else if(5){"¿Qué comando se utiliza en Git para ver el estado de los archivos en el repositorio?\n
            a) git add\n
            b) git push\n
            c) git commit\n
            d) git status"
    }else if(6){"¿Qué comando se utiliza en Git para ver el historial de commits?\n
            a) git log \n
            b) git history\n
            c) git show\n
            d) git diff"
    }else if(7){"¿Qué comando en Git se utiliza para cambiar de una rama a otra?\n
            a) git branch\n
            b) git checkout\n
            c) git commit\n
            d) git merge"
    }else if(8){"¿Qué comando se utiliza en Git para enviar cambios locales a un repositorio remoto?\n
            a) git fetch\n
            b) git push\n
            c) git pull\n
            d) git merge"
    }
}


// NO MODIFICAR EL RESTO DEL CÓDIGO

int main() {
    int puntaje = 0;
    int totalPreguntas = 8;
    char respuesta; 
    Pregunta pregunta; 

    printf("¡Bienvenido al juego de trivia sobre Git y GitHub!\n");

    // Leemos las preguntas que utilizaremos en el juego. 

    FILE *archivo = fopen("preguntas.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo de preguntas.\n");
        return 1; // Salir del programa con código de error
    }

    // Arreglo que contendrá todas nuestras preguntas
    Pregunta preguntas[totalPreguntas];

    // Leer las preguntas desde el archivo
    for (int i = 0; i < totalPreguntas; i++) {
        fgets(preguntas[i].pregunta, sizeof(preguntas[i].pregunta), archivo); // Leer la pregunta
        for (int j = 0; j < 4; j++) {
            fgets(preguntas[i].opciones[j], sizeof(preguntas[i].opciones[j]), archivo); // Leer las opciones
        }
        fscanf(archivo, "%c\n", &preguntas[i].respuestaCorrecta); // Leer la respuesta correcta
    }

    fclose(archivo);

    // Funcionamiento del juego

    for (int i = 0; i < totalPreguntas; i++){
        pregunta = preguntas[i];
        imprimirPregunta(pregunta); 
        respuesta = capturarRespuesta();
        if (verificarRespuesta(pregunta, respuesta)){
            puntaje ++; 
        }
            
    }

    printf("\nTu puntaje total es: %i de %i\n", puntaje, totalPreguntas);

    return 0; 

}
