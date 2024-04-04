package com.mycompany.ejercicionno12;
import java.util.Scanner;
/**
 * Guargar diez numeros en un array, y mostraslos en el siguiente orden: (Ejercicio Original)
 * Primero, Ultimo, Segundo, Penultimo, Tercero, etc...
 * 
 * Guargar tantos numeros en un array, y mostraslos en el siguiente orden: (Ejercicio Modificado)
 * Primero, Ultimo, Segundo, Penultimo, Tercero, etc...
 * El papu Sak
 * @author maxim
 */
public class EjercicionNo12 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        System.out.println("Cual sera el tamaño de tu array?\nIgual o menor a cero no entero puede colapsar el programa!");
        int limit = scan.nextInt();
        int[] array = new int[limit];       
        
        System.out.println("\nIntroduce 10 numeros para guardarlos en un array.");
        
        String arrayA = new String(), arrayB = new String();
        
        for(int i = 0; i < array.length; i++) {
            array[i] = scan.nextInt();
            
            if(limit > 1) {
                if(i == 0) {
                    arrayA = "[" +array[i];
                } else if(i != array.length -1) {
                    arrayA = arrayA +", " +array[i];

                } else {
                    arrayA = arrayA +", " +array[i] +"]";
                }
            } else arrayA = "[" +array[i] +"]";

        }
        
        System.out.println("\nTu array original:   " +arrayA);
        
        int a = 0, b = array.length -1, c;
        for(int i = 0; i < array.length; i++) {
            if(i%2 == 0) c = a;
            else c = b;
            
            if(limit > 1) {
                if(i == 0) {
                    arrayB = "[" +array[c];
                } else if(i != array.length -1) {
                    arrayB = arrayB +", " +array[c];
                } else {
                    arrayB = arrayB +", " +array[c] +"]";
                }
            } else arrayB = "[" +array[c] +"]";
            
            if(i%2 == 0) a++;
            else b--;
        }
        
        System.out.println("Tu array modificado: " +arrayB);
    }
}
