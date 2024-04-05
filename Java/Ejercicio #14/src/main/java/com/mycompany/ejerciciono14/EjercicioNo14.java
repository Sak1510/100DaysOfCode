package com.mycompany.ejerciciono14;
import java.util.Scanner;
/*
    //Ejercicio sacado de: https://retosdeprogramacion.com/ejercicios/ #2
 * Escribe una función que reciba dos palabras (String) y retorne verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan. //Hecho
 * - Dos palabras exactamente iguales no son anagrama.   //
 *
 *El papu Sak
 *@author maxim@
 */
public class EjercicioNo14 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        
        System.out.println("Escribe las dos palabras con todo en minusculas o en mayusculas, de lo contrario no funcionara\nIndroduce las dos palabras a analizar:");
        String palabra1 = scan.next(), palabra2 = scan.next();
        char[] arrayP1 = palabra1.toCharArray(), arrayP2 = palabra2.toCharArray();
        int anagram = 0, penalizacion = 0;
        boolean repetido = false, anagrama;
        
        if(arrayP1.length == arrayP2.length) {
            for(int i = 0; i < arrayP1.length; i++) {
                for(int j = 0; j < arrayP2.length; j++) {
                    if(arrayP1[i] == arrayP2[j] && !repetido) {
                        anagram++;
                        repetido = !repetido;
                    }
                }
                repetido = false;
                
                if(arrayP1[i] == arrayP2[i]) {
                    penalizacion++;
                }
            }
        }
        
        if(anagram == arrayP1.length && anagram == arrayP2.length && penalizacion != arrayP1.length && penalizacion != arrayP2.length) {
            anagrama = true;
        } else anagrama = false;
        
        System.out.println("\n" +anagrama);
    }
}