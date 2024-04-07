package com.mycompany.ejerciciono13;

/*
    //Ejercicio sacado de: https://retosdeprogramacion.com/ejercicios/ #1
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 *
 * El papu Sak 
 * Dia No.13
 * @maxim
 */
public class EjercicioNo13 {
    public static void main(String[] args) {
        for(int i = 0; i < 1001; i++) {
            if(i%3 == 0 && i%5 == 0) {
                System.out.println(i +"\tFizzbuzz");
            } else if(i%3 == 0) {
                System.out.println(i +"\tFizz");
            } else if(i%5 == 0) {
                System.out.println(i +"\tBuzz");
            } else {
                System.out.println(i);
            }
        }
    }
}
