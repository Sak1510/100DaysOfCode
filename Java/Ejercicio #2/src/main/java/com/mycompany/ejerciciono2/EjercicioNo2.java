package com.mycompany.ejerciciono2;
import java.util.Scanner;
/**
 * 1.-Array con las ventas del mes, y que diga cuáles y cuántas son mayores y/o menores que $2000 en arrays distintos.
 * 2.
 *   1.-Array con las ventas superiores con un descuento de impuestos del 15% mostrando precio original, el impuesto y
 *      la ganancia real
 *   2.-Array con las ventas inferiores con un descuento de impuestos del 7.5% mostrando precio original, el impuesto
 *      y la ganacia real
 * 3.-Sumatoria final para cada array con el impuesto aplicado
 * El papu Sak
 * @author maxim
 */
public class EjercicioNo2 {
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        
        ///Parte No.1:
        //Se pide al usuario que se va a ingresar
        double[] ventas;
        int ventasLimit;
        
        System.out.println("Cuantas ventas vas a introducir en el sistema?");
        ventasLimit = obj.nextInt();
        ventas = new double[ventasLimit];
        
        //Se piden las ventas
        System.out.println(" ");
        System.out.println("Introduce las " +ventas.length + " ventas");
        
        //Se preparan los arrays para cada tipo
        int ventasSupInt = 0, ventasInfInt = 0;
        for(int i = 0; i < ventas.length; i++) {
            double venta = obj.nextDouble();
            ventas[i] = venta;
            
            if(ventas[i] >= 2000) {
                ventasSupInt++;
            } else {
                ventasInfInt++;
            }
        }   
        
        //Se crean los arrays
        double[] ventasSup;
        ventasSup = new double[ventasSupInt];

        double[] ventasInf;
        ventasInf = new double[ventasInfInt];
        
        //Se llenan los arrays
        int actualSup = 0, actualInf = 0;
        for(int i = 0; i < ventas.length; i++) {
            if(ventas[i] >= 2000) {
                ventasSup[actualSup] = ventas[i];
                actualSup++;
            } else {
                ventasInf[actualInf] = ventas[i];
                actualInf++;
            }
        }
        
        //Se muestran los arrays
        System.out.println(" ");
        System.out.println("A continuacion, las ventas iguales o superiores a $2000");
        for(int k = 0; k < ventasSup.length; k++) {
            System.out.println("$" +ventasSup[k]);
        }
        
        System.out.println(" ");
        System.out.println("A continuacion, las ventas menores a $2000");
        for(int i = 0; i < ventasInf.length; i++) {
            System.out.println("$" +ventasInf[i]);
        }
        
        
        //Parte No.2 [1]
        //Se crean el nuevo array
        double[] ventasSupImp;
        ventasSupImp = new double[ventasSup.length];

        //Se informa que se va a entregar en consola
        System.out.println(" ");
        System.out.println("A continuacion la ganancia inicial, el impuesto y la ganancia real de las ventas mayores a $2000");

        //Se crea el buble para el array
        for(int i = 0; i < ventasSup.length; i++) {
            //Resta de impuestos
            double rest = ventasSup[i] *0.15;
            ventasSupImp[i] = ventasSup[i] -rest;

            //Entrega en la consola
            System.out.println("$" +ventasSup[i] +" -$" +rest +" = $" +ventasSupImp[i]);
        }


        //Parte No.2 [2]
        //Se crean el nuevo array
        double[] ventasInfImp;
        ventasInfImp = new double[ventasInf.length];
        
        //Se informa que se va a entregar en consola
        System.out.println(" ");
        System.out.println("A continuacion la ganancia inicial, el impuesto y la ganancia real de las ventas menores a $2000");
        
        //Se crea el buble para el array
        for(int i = 0; i < ventasInf.length; i++) {
            //Resta de impuestos
            double rest = ventasInf[i] *0.075;
            ventasInfImp[i] = ventasInf[i] -rest;

            //Entrega en la consola
            System.out.println("$" +ventasInf[i] +" -$" +rest +" = $" +ventasInfImp[i]);
        }

        //Parte No.3
        //Sumatoria de las ventas mayores a $2000
        double sumaSup = 0;
        for(int i = 0; i < ventasSupImp.length; i++) {
            sumaSup = sumaSup +ventasSupImp[i];
        }
        
        //Impresion de la suma de las ventas mayores a $2000
        System.out.println(" ");
        System.out.println("La suma de las ventas con un impuesto del 15% es de $" +sumaSup);
        
        //Sumatoria de las ventas menores a $2000
        double sumaInf = 0;
        for(int i = 0; i < ventasInfImp.length; i++) {
            sumaInf = sumaInf +ventasInfImp[i];
        }
        
        //Impresion de la suma de las ventas menores a $2000
        System.out.println(" ");
        System.out.println("La suma de las ventas con un impuesto del 7.5% es de $" +sumaInf);
        
        //Ganancia total de las ventas con impuesto aplicado
        System.out.println(" ");
        double gananciaTotal = sumaSup +sumaInf;
        System.out.println("La ganancia total final es de $" +gananciaTotal);
     }
}