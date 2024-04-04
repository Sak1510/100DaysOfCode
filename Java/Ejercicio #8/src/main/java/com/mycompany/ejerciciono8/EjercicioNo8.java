package com.mycompany.ejerciciono8;
import java.util.Scanner;
/**
 * Crear un programa para la gestión de facturas de una empresa que se dedica a la venta de azúcar por kilos
 * 1. En cada factura se ingresará el código del producto vendido
 * 2. Además se ingresará la cantidad de kilos vendidos
 * 3. El total a pagar por kilos
 * 
 * De cinco facturas introducidas, se pide:
 * Facturación total, cantidad de kilos vendidos, y cuántas facturas fueran emitidas por más de $1000
 * 
 * El papu Sak
 * @author maxim
 */
public class EjercicioNo8 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        
        //Se le avisa al usuario cuantas facturas va a ingresar al sistema
        System.out.println("Introducec 5 facturaciones a continuacion:");
        
        //Se declaran las variables necesarias
        double factTotal = 0, kComp = 0;
        int fact1000 = 0;
        
        //Bucle con variable primitiva tipo byte para experimentar
        for(byte i = 0; i < 5; i++) {
            //En cual factura esta actualmente el usuario
            System.out.println();
            System.out.println("Factura No." +(i +1));
            
            //Se le pide el codigo del producto
            System.out.println("Ingresa el codigo del producto:");
            int code = scan.nextInt();
            
            //Para ahorrar espacio en codigo, se pone directamente el scan.nextDouble() directamente a la sumatoria 
            System.out.println("Cuantos kilos se compraron?");
            kComp = kComp +scan.nextDouble();
            
            //Si pasa a más de $1000, se le contara
            System.out.println("Cuanto es el total de los kilos comprados?");
            double total = scan.nextDouble();
            factTotal = factTotal +total;
            if(total > 1000) fact1000++;
        }
        
        //Finalmente se retornan los resultados finales
        System.out.println();
        System.out.println("La facturación total es igual a $" +factTotal);
        System.out.println("Se han vendido " +kComp +" kilos");
        System.out.println("Se han hecho " +fact1000 +" facturas mayores a $1000");
    }
}