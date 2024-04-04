package com.mycompany.ejerciciono3;
import java.util.Scanner;
/**
 * De un array (arreglo), ver cual es el numero mayor de todos
 * @author maxim
 */
public class EjercicioNo3 {
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        
        //Se le pide al usuario cuantos numeros va a ingresar
        System.out.println("Cuantos numeros vas a evaluar?");
        int array_ = obj.nextInt();
        
        //Se crea el array con el tamaño adecuado
        int[] array;
        array = new int[array_];
        
        //Se reciben los numeros siendo guardados en el array
        System.out.println(" ");
        System.out.println("Introduce los " +array_ +" numeros:");
        for(int i = 0; i < array.length; i++) {
            array[i] = obj.nextInt();
        }

        //Se analiza cual de todos los numeros es mayor
        int numMa = 0;
        for(int i = 0; i < array.length; i++) {
            if(array[i] > numMa) {
                numMa = array[i];
            }
        }
        
        //Se retorna en la consola el numero mayor del array
        System.out.println(" ");
        System.out.println("Este es el numero mayor de tu array: " +numMa);
    }
}
