package com.mycompany.trabajono11;
import javax.swing.JOptionPane;
/**
 * Guardar tantos números en un array, y mostrarlos en orden inverso.
 * Usa JOptionPane
 * 
 * El papu Sak
 * @author maxim
 */
public class TrabajoNo11 {
    public static void main(String[] args) {
        //int n = Integer.parseInt(JOptionPane.showInputDialog("Que vas a hacer"));     INPUT
        //JOptionPane.showMessageDialog(null, "n = " +n);                               OUTPUT
        
        //Se declaran las variables necesarias (uy miedito)
        int n = Integer.parseInt(JOptionPane.showInputDialog("Para introducir datos en el array volteado,\nintroduce cuantos datos tendra tu array")), limit = n -1;
        int[] array1 = new int[n];
        String arrayS = new String(), newArrayS = new String();
        
        //Se va creando el primer array y a la vez su forma en string
        for(int i = 0; i < n; i++) {
            array1[i] = Integer.parseInt(JOptionPane.showInputDialog("Llena el array"));
            
            //Constructor del array en formato string
            if(i == 0) {
                arrayS  = "[" +array1[i];
            } else if(i != n -1) {
                arrayS = arrayS +", " +array1[i];
            } else {
                arrayS = arrayS +", " +array1[i] +"]";
            }
            
            //Para ir visualizando el array (prueba)
            System.out.println(arrayS);
        }
        
        //Se crea el otro array, sin embargo, solo se crea el string del mismo para menor complejidad
        for(int i = 0; i < n; i++) {
            //System.out.println(limit);
            
            //Constructor del array en formato string
            if(i == 0) {
                newArrayS = "[" +array1[limit];
            } else if(i != n -1) {
                newArrayS = newArrayS +", " +array1[limit];
            } else {
                newArrayS = newArrayS +", " +array1[limit] +"]";
            }
            
            System.out.println(newArrayS);
            limit--;
        }
        
        //Devolución de los datos
        JOptionPane.showMessageDialog(null, "El array que introduciste:\n" +arrayS +"\nEl array volteado:\n" +newArrayS);
    }
}