package com.mycompany.ejercicio17;
import java.util.Scanner;
/**
 * El papu Sak
 * @author maxim
 */
public class Ejercicio17 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[][] n = new int[3][3];
        
        System.out.println("Llena el array de 3x3:");
        
        for(int i = 0; i < 3; i++) {
            System.out.println("\nVuelta No." +(i +1));
            for(int j = 0; j < 3; j++) {
                n[i][j] = scan.nextInt();
        }}
        
        String nS = new String();
        for(int i = 0; i < 3; i++) {
            nS = nS +"[";
            for(int j = 0; j < 3; j++) {
                if(j != 2) nS = nS +n[i][j] +", ";
                else nS = nS +n[i][j];
            }
            
            if(i != 2) nS = nS +"], ";
            else nS = nS +"]";
        }
        
        System.out.println("\n\nEl array llenado es el siguiente: [" +nS +"]");
}}