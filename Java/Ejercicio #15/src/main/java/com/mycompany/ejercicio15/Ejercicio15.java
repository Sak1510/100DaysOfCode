package com.mycompany.ejercicio15;
import java.util.Scanner;
/**
 *      Ejercicio usado de: https://youtu.be/U6kKm9JAIUg?si=GAw0vDrOs5NMXN5J
 * Programa que nos pida la cantidad de piezas compradas, y el precio de cada pieza.
 * Si se compraron 100 o más piezas, se dará un descuento por pieza
 * Calcular el total a pagar, usando un método.
 * 
 * El papu Sak
 * @author maxim
 */
public class Ejercicio15 {
    public static double calcDesc(double desc /*Descuento a aplicar*/, int numP /*Numero de piezas*/, double val/*Valor individual de cada pieza*/) {
        if(numP >= 100) {
            return numP*val -numP*val*desc;
        } else {
            return numP*val;
        }
    }
    
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);

        
        System.out.println("Para calcular el total a pagar, introdusca el numero de piezas:");
        int piezas = scan.nextInt();
        System.out.println("\nAhora, cual es el valor de cada pieza:");
        double valorInd = scan.nextDouble();
        
        System.out.println("\n\nTu total a pagar es de $" +calcDesc(0.20, piezas, valorInd));
    }
}