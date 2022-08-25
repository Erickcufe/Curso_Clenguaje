# Curso C/C++

Ligas de cursos gratuitos:

- https://www.learn-c.org
- https://www.freecodecamp.org/news/the-c-beginners-handbook/
- https://www.redhat.com/sysadmin/learn-bash-scripting

## Primeros pasos

Para generar archivos Vim se usa el siguiente comando:

```
vim name.c
```

Posteriormente se usa `i` para insertar texto, al terminar de escribir el código se presiona `Esc` y se ingresa el comando `:wq`. Con esto generamos archivos de tipo C en la terminal. 

Para compilar el archivo se usa `gcc -o name.sh name.c`. 

# Caracteres y tokens

- **Comentarios**: `/* COMENTARIO */` la forma clasica `// classic formula`
- **Preprocessor directive**: `#include` para agregar librerias 
- **Identificadores**: `a, b, main`
- **Operadores**: `+ &`
- **Puntuación**: `{ ; }`

## Keywords

[C lenguaje keywords](https://www.programiz.com/c-programming/list-all-keywords-c-language):

- auto
- break
- case
- char
- const
- continue
- default
- do
- double
- else
- enum
- extern
- float
- for
- goto
- if
- int
- long
- register
- return
- short
- signed
- sizeof
- static
- struct
- switch
- typedef
- union
- unsigned
- void
- volatile
- while

## Identificadores

Inician con una letra o con un `_`. Seguido de letras ó `_` ó digitos. **NO SE RECOMIENDA USAR NOMBRES VAGOS O INDESCRIPTIVOS**. 

Usar las variables `x`, `y`, `q` o `p`puede ser correcto la función se refiere a planos o a funciones lógicas. 


## Operadores

[C language Operator Precedence Chart](https://en.cppreference.com/w/c/language/operator_precedence)

**Los simbolos van a variar de función según sea el contexto.**


## Evaluación de expresiones 

`/`; `%`; `++`; `--`; `=`

**Pre incremental**:
`a = ++b` es lo mismo que `b = b + 1; a = b`

**Post Incremental**:
`a = b++` es lo mismo que `a = b; b = b + 1`

Las divisiones respetan el tipo de variable (entero o flotante).

## Declaraciones de asignación

Las asignaciones se declaran con el tipo de variable que se va a manejar `int a = 1`. 

- `int`
- `double`
- `float`
- `char`

## El tipo **int**.

| Tipo    | Storage size | Value Range | 
|---------|--------------|-------------|
|char     | 1 byte       | -128 to 127 or 0 to 255|
| unsigned char | 1 byte | 0 to 255    |
| signed char | 1 byte   | -128 to 127 |
| int     | 2 or 4 bytes | -32,768 to 32,767 or -2,147,483 to 2,147,483,647 |
| unsigned int | 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295 |
| short   | 2 bytes      | -32,768 to 32,767 |
| unsigned short | 2 bytes | 0 to 65,535 |
| long    | 8 bytes or (4 bytes for 32 bit OS) | -9223372036854775808 to 9223372036854775807 |
| unsigned long | 8 bytes | 0 to 18446744073709551615 |

```
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}

```

# Operaciones logicas

Para comparar dos condiciones se usa `&&`. 

```
#include <stdio.h>


#include <stdlib.h>


int main(void)
{
   int  a = 0, b = 1, c = 2;
   
   if (a < b) printf ("TRUE\n"); else printf("FALSE\n");

   if (a < b - c) printf ("TRUE\n"); else printf("FALSE\n");   
   
   if (b < c - 1) printf ("TRUE\n"); else printf("FALSE\n"); 

   if (!c) printf ("TRUE\n"); else printf("FALSE\n");
     return 0;
}

```

## Condicionales if else

```
#include <stdio.h>
int main()
{
    int speed;
    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);
    if(speed < 65)
        printf("\nNo speeding ticket\n\n");
    else 
        printf(\nSpeeding ticket\n\n");
    return 0;
}




