package com.mycompany.ejerciciono4;
import java.util.Scanner;
/**
 * Saber total a pagar, en base al descuento que se haga.
 * 
 * Cada pan vale $5
 * Si compra más de 50 panes, le costarán a $4.50
 * Si compra más de 100 panes, le costará a $4
 * 
 * El papu Sak
 * @author maxim
 */
public class EjercicioNo4 {
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        
        //Se le pide al usuario cuantos panes ah comprado
        System.out.println("Cuantas piezas haz comprado?");
        double pan = obj.nextInt(), total;
        
        //Se evalua la cantidad
        System.out.println(" ");
        if(pan > 100) {
            total = pan *4;
            System.out.println("Cada pan te costo $4.00");
        } else if(pan > 50) {
            total = pan *4.5;
            System.out.println("Cada pan te costo $4.50");
        } else {
            total = pan *5;
            System.out.println("Cada pan te costo $5.00");
        }
        
        //Se imprime el total a pagar
        System.out.println("Tu total a pagar es de $" +total);
    }
}
