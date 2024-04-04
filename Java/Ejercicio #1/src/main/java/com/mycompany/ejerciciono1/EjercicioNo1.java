package com.mycompany.ejerciciono1;
import java.util.Scanner;
/**
 * Ejercicio de prueba usando arrays
 * @author maxim
 */
public class EjercicioNo1 {
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
       
        System.out.println("Cuantos numeros quieres evaluar?");
        int limit;
        limit = obj.nextInt();
        
        int[] num;
        num = new int[limit];
        
        System.out.println("Introduce " +limit +" numeros");
        for(int i = 0; i < limit; i++) {
            num[i] = obj.nextInt();
        }
        
        System.out.println("Cual es el rango que quieres poner para saber si es mayor?");
        int rango;
        rango = obj.nextInt();
        
        for(int j = 0; j < limit; j++) {
            if(num[j] > rango) {
                System.out.println(num[j] +" es mayor a " +rango);
            } else if(num[j] == rango) {
                System.out.println(num[j] +" es igual a " +rango);
            } else {
                System.out.println(num[j] +" es menor a " +rango);
            }
}}}