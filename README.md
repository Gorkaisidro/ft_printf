# ft_printf

Este proyecto consiste en la implementación de una función personalizada `printf` en C, como parte del programa de la Escuela 42. Tiene como objetivo profundizar en el uso de argumentos variables, reforzar la gestión de memoria y mejorar la estructura de código modular, recreando el comportamiento de la función `printf` de la librería estándar de C.

---

## Tabla de Contenidos

- [Objetivo](#objetivo)
- [Conversores implementados](#conversores-implementados)
- [Compilación](#compilación)

---

## 🎯 Objetivo

Recrear la función `printf()` de la librería estándar de C, permitiendo imprimir diferentes tipos de datos en la salida estándar, utilizando argumentos variables y respetando el comportamiento original de `printf` en los tipos especificados.

---

## 🔤 Conversores implementados

| Conversor | Descripción                                            |
|-----------|--------------------------------------------------------|
| `%c`      | Imprime un solo carácter.                              |
| `%s`      | Imprime una cadena de caracteres.                      |
| `%p`      | Imprime un puntero en hexadecimal con prefijo `0x`.    |
| `%d`      | Imprime un número decimal (base 10).                   |
| `%i`      | Imprime un número entero base 10.                      |
| `%u`      | Imprime un número decimal (base 10) sin signo.         |
| `%x`      | Imprime un número en hexadecimal en minúsculas.        |
| `%X`      | Imprime un número en hexadecimal en mayúsculas.        |
| `%%`      | Imprime un símbolo de porcentaje.                      |

---

## ⚙️ Compilación

Para compilar el proyecto, simplemente ejecuta:

```bash
make
