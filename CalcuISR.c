#include <stdio.h>

int main(){
int a;
float sueldo,eli,li,pe,pen,pem,cf,isr,sueldoneto;

do{
printf("Ingrese el sueldo mensual: ");
scanf("%f",&sueldo);

if(sueldo <= 644.58){
    li = 0.01;
    eli = sueldo - li;
    pe = 1.92;
    pen = eli * pe;
    pem = pen / 100;
    cf = 0.00;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 407.02 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 644.59 & sueldo <= 5470.62){
    li = 644.59;
    eli = sueldo - li;
    pe = 6.40;
    pen = eli * pe;
    pem = pen / 100;
    cf = 12.38;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    if(sueldo > 1768.96){
        if(sueldo > 2653.38){
            if(sueldo > 3472.84){
                if(sueldo > 3537.87){
                    if(sueldo > 4446.15){
                        if(sueldo > 4717.18){
                            if(sueldo > 5335.47 & sueldo < 5470.62){
                                printf("Subsidio al empleado: 324.87 \n");
                            }
                            else{
                                printf("Subsidio al empleado: 294.63 \n");
                            }
                        }
                        else{
                            printf("Subsidio al empleado: 354.23 \n");
                        }
                    }
                    else{
                        printf("Subsidio al empleado: 382.46 \n");
                    }
                }
                else{
                    printf("Subsidio al empleado: 392.77 \n");
                }
            }
            else{
                printf("Subsidio al empleado: 406.62 \n");
            }
        }
        else{
            printf("Subsidio al empleado: 406.83 \n");
        }
    }
    else{
        printf("Subsidio al empleado: 407.02 \n");
    }
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 5470.63 & sueldo <= 9614.66){
    li = 5470.63;
    eli = sueldo - li;
    pe = 10.88;
    pen = eli * pe;
    pem = pen / 100;
    cf = 321.26;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    if(sueldo > 6224.67){
        if(sueldo > 7113.90){
            if(sueldo > 7382.33){
                printf("Subsidio al empleado: 0.00 \n");
            }
            else{
                printf("Subsidio al empleado: 217.61 \n");
            }
        }
        else{
            printf("Subsidio al empleado: 253.54 \n");
        }
    }
    else{
        printf("Subsidio al empleado: 294.63 \n");
    }
    printf("Subsidio al empleado: 407.02 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 9614.67 & sueldo <= 11176.62){
    li = 9614.67;
    eli = sueldo - li;
    pe = 16.00;
    pen = eli * pe;
    pem = pen / 100;
    cf = 772.10;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 0.00 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 11176.63 & sueldo <= 13381.47){
    li = 11176.63;
    eli = sueldo - li;
    pe = 17.92;
    pen = eli * pe;
    pem = pen / 100;
    cf = 1022.01;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 0.00 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 13381.48 & sueldo <= 26988.50){
    li = 13381.48;
    eli = sueldo - li;
    pe = 21.36;
    pen = eli * pe;
    pem = pen / 100;
    cf = 1417.12;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 0.00 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 26988.51 & sueldo <= 42537.58){
    li = 26988.51;
    eli = sueldo - li;
    pe = 23.52;
    pen = eli * pe;
    pem = pen / 100;
    cf = 4323.58;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 0.00 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 42537.59 & sueldo <= 81211.25){
    li = 42537.59;
    eli = sueldo - li;
    pe = 30.00;
    pen = eli * pe;
    pem = pen / 100;
    cf = 7980.73;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 0.00 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 81211.26 & sueldo <= 108281.67){
    li = 81211.26;
    eli = sueldo - li;
    pe = 32.00;
    pen = eli * pe;
    pem = pen / 100;
    cf = 19582.83;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 0.00 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 108281.68 & sueldo <= 324845.01){
    li = 108281.68;
    eli = sueldo - li;
    pe = 34.00;
    pen = eli * pe;
    pem = pen / 100;
    cf = 28245.36;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 0.00 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

if(sueldo >= 324845.02){
    li = 324845.02;
    eli = sueldo - li;
    pe = 35.00;
    pen = eli * pe;
    pem = pen / 100;
    cf = 101876.90;
    isr = cf + pem;
    sueldoneto = sueldo - isr;

    printf("Limite inferior: %f \n",li);
    printf("Excedente del limite inferior: %f \n",eli);
    printf("Porciento sobre el exedente del limite inferior: %f \n",pe);
    printf("Impuesto marginal: %f \n",pem);
    printf("Cuota fija del impuesto: %f \n",cf);
    printf("ISR determinado: %f \n",isr);
    printf("Subsidio al empleado: 0.00 \n");
    printf("Sueldo neto: %f \n",sueldoneto);
}

printf("**********\n");
printf("Para seguir ingrese 1, para salir ingrese 2: ");
scanf("%i",&a);
printf("\n");
}while(a==1);
}
