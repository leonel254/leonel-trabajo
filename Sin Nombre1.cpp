//codigo de alumno: leonel jonathan restaneo
// link del git personal:https://github.com/leonel254
// link del git grupal (lider: miguel angel chura crespo): https://github.com/leonel254

#incluir <stdio.h>
void linea(char simbolo) {
    for (int i = 0; i < 20; i++) {
        printf("%c", simbolo);
    }
    printf("\n");
}
void repetir(const char *texto, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("%s\n", texto);
    }
}
void cartel(const char *texto, int cantidad) {
    repetir(texto, cantidad); 
}
