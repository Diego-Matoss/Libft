*Este proyecto ha sido creado como parte del currículo de 42 por dimatos-.*

<div align="center">

# 📚 Libft — @42 Madrid

Mi propia biblioteca estándar de C: una reimplementación de funciones esenciales de la libc y utilidades personalizadas.

</div>

---

# 📍 Navegación Rápida

* 📄 Descripción
* 🛠️ Librería al Detalle
* 🚀 Instrucciones de Compilación
* 📚 Recursos y Referencias

---

# 📄 Descripción

Libft es el primer proyecto fundamental del currículo de 42.

El objetivo principal consiste en reimplementar desde cero una selección de funciones de la biblioteca estándar de C (`libc`), así como desarrollar funciones adicionales que no forman parte de ella pero resultan extremadamente útiles en proyectos posteriores.

A través de este proyecto se profundiza en conceptos fundamentales como:

* Gestión manual de memoria.
* Manipulación de punteros.
* Trabajo con cadenas de caracteres.
* Operaciones sobre bloques de memoria.
* Conversión de tipos.
* Estructuras de datos dinámicas mediante listas enlazadas.

Esta librería se convertirá en una herramienta reutilizable que servirá de base para gran parte de los proyectos posteriores del currículo de 42.

---

# 🛠️ Librería al Detalle

A continuación se detallan las funciones que componen la biblioteca.

## I. Funciones de libc

### Tipos y Caracteres

| Función    | Descripción                                |
| ---------- | ------------------------------------------ |
| ft_isalpha | Comprueba si un carácter es alfabético     |
| ft_isdigit | Comprueba si un carácter es un dígito      |
| ft_isalnum | Comprueba si un carácter es alfanumérico   |
| ft_isascii | Comprueba si un carácter pertenece a ASCII |
| ft_isprint | Comprueba si un carácter es imprimible     |
| ft_toupper | Convierte un carácter a mayúscula          |
| ft_tolower | Convierte un carácter a minúscula          |

---

### Memoria

| Función    | Descripción                                  |
| ---------- | -------------------------------------------- |
| ft_memset  | Rellena un bloque de memoria                 |
| ft_bzero   | Inicializa memoria a cero                    |
| ft_memcpy  | Copia memoria sin gestionar solapamiento     |
| ft_memmove | Copia memoria gestionando solapamiento       |
| ft_memchr  | Busca un byte dentro de un bloque de memoria |
| ft_memcmp  | Compara dos bloques de memoria               |
| ft_calloc  | Reserva memoria inicializada a cero          |

---

### Strings

| Función    | Descripción                               |
| ---------- | ----------------------------------------- |
| ft_strlen  | Calcula la longitud de una cadena         |
| ft_strlcpy | Copia una cadena de forma segura          |
| ft_strlcat | Concatena cadenas de forma segura         |
| ft_strchr  | Busca la primera aparición de un carácter |
| ft_strrchr | Busca la última aparición de un carácter  |
| ft_strncmp | Compara cadenas hasta n caracteres        |
| ft_strnstr | Busca una subcadena dentro de otra        |
| ft_strdup  | Duplica una cadena                        |

---

### Conversión

| Función | Descripción                   |
| ------- | ----------------------------- |
| ft_atoi | Convierte una cadena a entero |

---

## II. Funciones Adicionales

| Función       | Descripción                                                    |
| ------------- | -------------------------------------------------------------- |
| ft_substr     | Extrae una subcadena                                           |
| ft_strjoin    | Une dos cadenas                                                |
| ft_strtrim    | Elimina caracteres de los extremos                             |
| ft_split      | Divide una cadena según un delimitador                         |
| ft_itoa       | Convierte un entero a cadena                                   |
| ft_strmapi    | Aplica una función a cada carácter y devuelve una nueva cadena |
| ft_striteri   | Aplica una función sobre cada carácter de una cadena           |
| ft_putchar_fd | Escribe un carácter en un file descriptor                      |
| ft_putstr_fd  | Escribe una cadena en un file descriptor                       |
| ft_putendl_fd | Escribe una cadena seguida de salto de línea                   |
| ft_putnbr_fd  | Escribe un número en un file descriptor                        |

---

## III. Bonus — Listas Enlazadas

| Función         | Descripción                                  |
| --------------- | -------------------------------------------- |
| ft_lstnew       | Crea un nuevo nodo                           |
| ft_lstadd_front | Inserta un nodo al principio                 |
| ft_lstsize      | Cuenta los nodos de una lista                |
| ft_lstlast      | Obtiene el último nodo                       |
| ft_lstadd_back  | Inserta un nodo al final                     |
| ft_lstdelone    | Elimina un nodo                              |
| ft_lstclear     | Elimina una lista completa                   |
| ft_lstiter      | Recorre una lista aplicando una función      |
| ft_lstmap       | Crea una nueva lista transformando cada nodo |

---

# 🚀 Instrucciones

## Estructura del Makefile

El proyecto cuenta con un Makefile automatizado para generar la librería estática.

### Reglas disponibles

| Comando     | Acción                         |
| ----------- | ------------------------------ |
| make        | Compila la librería            |
| make bonus  | Compila la parte bonus         |
| make clean  | Elimina archivos objeto        |
| make fclean | Elimina objetos y la librería  |
| make re     | Recompila el proyecto completo |

---

## Compilación

```bash
make
```

Generará:

```text
libft.a
```

---

# 📚 Recursos y Referencias

## Documentación

* ISO C Standard
* The C Programming Language — Kernighan & Ritchie
* GNU C Library (glibc)
* POSIX Documentation
* Linux Man Pages

---

## Herramientas de Testeo

* libftTester de Tripouille
* libft-tester de mapena-z
* Norminette

---

## Uso de Inteligencia Artificial

En cumplimiento de los requisitos del proyecto:

La Inteligencia Artificial se ha utilizado exclusivamente como herramienta de apoyo para:

* Comprender el comportamiento de determinadas funciones estándar.
* Resolver dudas conceptuales sobre memoria, punteros y listas enlazadas.
* Analizar casos límite (*edge cases*).
* Revisar documentación y mejorar la calidad del README.

La implementación, depuración y validación final de todas las funciones ha sido realizada manualmente por el autor.

---

# 👨‍💻 Autor

**Diego Matos**

42 Madrid
