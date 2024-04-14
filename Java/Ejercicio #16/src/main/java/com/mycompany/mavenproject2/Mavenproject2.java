package com.mycompany.mavenproject2;
import java.util.Scanner;
/**     Ejercicio sacado de: https://retosdeprogramacion.com/ejercicios/ #7
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma automática.
 * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"
 * 
 * El papu Sak
 * @author maxim
 */

public class Mavenproject2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Introduce el texto a voltear:");
        String text = scan.nextLine();
        
        char[] textArray = text.toCharArray(), textConvert = new char[textArray.length];
        int i = 0, j = textArray.length -1;
        while(i < textArray.length && j >= 0) {
            textConvert[j] = textArray[i];
            i++;
            j--;
        }
        
        System.out.println("Tu texto original: " +text +"\nTu texto volteado: " +String.valueOf(textConvert));
    }
}
