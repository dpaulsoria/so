# Makefile para compilar

# Definir el compilador y las opciones de compilacion
CC = gcc
CFLAGS = -Wall -O2

# Definir los archivos fuente y el archivo de salida
SRC = main.c # funciones.c
OBJ = $(SRC:.c=.o)
OUT = programa

# Regla predeterminada: compilar el programa

all: $(OUT)

# Regla para generar el programa ejecutable

$(OUT): $(OBJ)
	$(CC) $(OBJ) -o $(OUT)

# Regla para compilar los archivos fuente a objetos

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza: eliminar archivos objetos y el ejecutable

clean:
	rm -f $(OBJ) $(OUT)