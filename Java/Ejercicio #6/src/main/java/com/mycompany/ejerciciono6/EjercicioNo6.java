package com.mycompany.ejerciciono6;
import java.util.Scanner;
/**
 * Crear programa que muestre el producto de los primeros números impares positivos que pida el usuario.
 * Por ejemplo, dame el producto de los primeros 10 numeros impares positivos, o dame el producto de los 20
 * 2
 * El papu Sak
 * @author maxim
 */
public class EjercicioNo6 {
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        
        //Se le pide al usuario hasta donde se va a ser el producto
        System.out.println("Cuales van a ser los primeros numeros impar que vas a multiplicar?");
        int n = obj.nextInt();
        
        //Se imprimen los numeros impares a multiplicar
        System.out.println();
        System.out.println("Tus numeros impares son:");
        
        //Se crea una array para comodidad
        int[] impar = new int[n];
        
        //Variable donde se almacenara el producto
        int prod = 1;
        
        //Bucle para ir almacenando los numeros impares
        for(int i = 0; i < n; i++) {
            //Se crea el numero impar
            impar[i] = (i +1)*2 -1;
            
            //Se le va multiplicando al producto
            prod = prod *impar[i];
            
            //Se imprime en numero impar actual
            System.out.println(impar[i]);
       }

       //Se retorna finalmente el producto final de la multiplicación de todos los numeros impares recolectados
       System.out.println();
       System.out.println("El producto de estos numeros impares es " +prod);
    }
}