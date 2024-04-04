package com.mycompany.ejerciciono10;
import javax.swing.JOptionPane;
/**
 * De tantos alumnos, verificar cuantos tuvieron calificaciones excelentes (10), buenas (9-7), a mejorar (6) y reprobados (5-1)
 * Usando JOptionPane
 * El papu Sak
 * @author maxim
 */
public class EjercicioNo10 {
    public static void main(String[] args) {
        //int n = Integer.parseInt(JOptionPane.showInputDialog("Que vas a hacer"));     INPUT
        //JOptionPane.showMessageDialog(null, "n = " +n);                               OUTPUT
        
        //Se le pide al usuario cuantas calificaciones va a evaluar
        double n = Integer.parseInt(JOptionPane.showInputDialog("Cuantos alumnos vas a evaluar?"));
        
        //Se crean las variables necesarias 
        double i = 0, exc = 0, bue = 0, mej = 0, rep = 0, noValida = 0;
        while(i < n) {
            //Para seguir con el bucle
            i++;
            
            //Se le pide la calificación
            double k = Integer.parseInt(JOptionPane.showInputDialog("Introdusca la calificación:\nNo te pases del rango de 1-10"));
            
            //Se evalua la calicación
            if(k == 10) exc++;                  //Calificación excelente        10
            else if(k < 10 && k > 6) bue++;     //Calificación buena            (10, 6)
            else if(k == 6) mej++;              //Calificación a mejorar        6
            else if(k < 6 && k >= 0) rep++;     //Calificación reprobatoria     (6, 0]
            else noValida++;                    //Calificación fuera de rango   (infinity, 10) U (0, -infinity)
        }
        
        //Se devuelven los resultados
        JOptionPane.showMessageDialog(null, 
                "Calificaciones excelentes: " +exc 
               +"\nCalificaciones buenas: " +bue 
               +"\nCalificaciones a mejorar: " +mej 
               +"\nCalificaciones reprobatorias: " +rep
               +"\nCalificaciones no Validas: " +noValida
        );
    }
}