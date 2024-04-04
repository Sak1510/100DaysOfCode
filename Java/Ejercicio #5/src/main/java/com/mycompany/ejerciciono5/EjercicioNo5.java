package com.mycompany.ejerciciono5;
import java.util.Scanner;
/**
 * Capturar sólo números positivos, y obtener la media(promedio) de esos números.
 * El papu Sak
 * @author maxim
 */
public class EjercicioNo5 {
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);

        //Se le pide al usuario cuantos numeros va a introducir para sacar el promedio
        System.out.println("Cuatos numeros vas a poner?");
        System.out.println("Solo se aceptaran numeros positivos para calcular la mediana/el promedio");
        int limit = obj.nextInt();
        System.out.println("");
        
        //Se declaran las variables con coma flotante 
        double suma = 0, neg = 0;
        
        //Bucle para poder recolectar los numeros
        for(int i = 0; i < limit; i++) {
            //Se recolecta el numero
            int k = obj.nextInt();
            
            if(k >= 0) {
                //Si es mayor a 0, se le sumara al total
                suma = suma +k;
            } else {
                //De lo contrario, se le sumara a la variable neg
                neg++;
            }
        }
        
        //Usando la variable neg, se le va a restar el numero de negativos al numero total de numeros introducidos
        double n = limit -neg;
        
        //Se realiza el promedio
        double media = suma/n;
        
        //Finalmente se retorna el promedio de solamente los numeros positivos
        System.out.println("");
        System.out.println("La media/el promedio de tus numeros positivos es igual a " +media);
    }
}
