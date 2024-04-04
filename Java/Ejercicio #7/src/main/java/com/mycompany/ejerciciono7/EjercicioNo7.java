package com.mycompany.ejerciciono7;
import java.util.Scanner;
/**
 * El programa pedirá 10 números enteros
 * Y mostrará el promedio de los que sean negativos
 * Tambien el promedio de los positivios
 * Y nos dirá cuántos ceros fueron ingresados
 * 
 * El papu Sak
 * @author maxim
 */
public class EjercicioNo7 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        
        //Se declaran las variables a usar
        int pos = 0, neg = 0, neu = 0, n = 0;
        double sumP = 0, sumN = 0;
        
        //Se le pide al usuario los 10 numeros
        System.out.println("Introduce 10 numeros enteros sean positivos y negativos.");
        
        //Mientras que n sea menor a 10
        while(n < 10) {
            //Para poder terminar el bucle en cierto momento
            n++;
            
            //Se le pide al usuario un numero
            double num = scan.nextDouble();
            
            //Se evalua si va a cada caso
            if(num == 0) { 
                neu++;
            } else if(num < 0) { 
                neg++; 
                sumN = sumN +num;
            } else if(num > 0) { 
                pos++;
                sumP = sumP +num;
        }}
        
        //Se crean las variables del promedio individual
        double mediaP, mediaN;
        
        //Para evitar divir entre cero por las declaraciones de pos = 0 y neg = 0, se tienen estos dos if/else
        if(pos != 0) { mediaP = sumP/pos; } 
        else { mediaP = 0; }
        
        if(neg != 0) { mediaN = sumN/neg; } 
        else { mediaN = 0;}
        
        //Se le entregan los resultados al usuario
        System.out.println();
        System.out.println("El promedio de los numeros positivos es igual a " +mediaP);
        System.out.println("El promedio de los numeros negativos es igual a " +mediaN);
        System.out.println("Haz ingreso " +neu +" veces el numero 0");
    }
}