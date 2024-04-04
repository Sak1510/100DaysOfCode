package com.mycompany.ejerciciono9;
import javax.swing.JOptionPane;
/**
 * Usando JOptionPane, ver de tantos sueldos de tantos empleados, cual es el mayor642
 * 
 * El papu Sak
 * @author maxim
 */
public class EjercicioNo9 {
    public static void main(String[] args) {     
        //int n = Integer.parseInt(JOptionPane.showInputDialog("Que vas a hacer"));     INPUT
        //JOptionPane.showMessageDialog(null, "n = " +n);                               OUTPUT
        
        //Se le pide al usuario cuantos empleados se va a comparar
        int n = Integer.parseInt(JOptionPane.showInputDialog("¿Cuantos empleados vas a comparar?"));
        int[] empl = new int[n];
        
        //Se reciben todos los sueldos
        for(short i = 0; i < n; i++) {
            empl[i] = Integer.parseInt(JOptionPane.showInputDialog("Empleado No" +(i +1)));
            System.out.println(empl[i]);
        }
        
        //Se compara cual es el sueldo mayor
        int numM = 0;
        for(short i = 0; i < n; i++) if(empl[i] > numM) numM = empl[i];
        
        //Se entrega al usuario el sueldo mayor
        JOptionPane.showMessageDialog(null, "Tu empleado con mayor sueldo le pagan $" +numM);
    }
}