#include <stdio.h>
#include <math.h>

void convert_bit_byte()
{
    float numero_bits, numero_bytes;
    printf("insira o numero de bits que deseja converter para bytes: \n");
    scanf("%f", &numero_bits);
    numero_bytes = numero_bits/8;
    printf("%2.f bits em bytes = %2.f byte(s) \n", numero_bits, numero_bytes);
}

void convert_byte_bit()
{
    float numero_bytes, numero_bits;
    printf("insira o numero de bytes que deseja converter para bytes: \n");
    scanf("%f", &numero_bytes);
    numero_bits = numero_bytes*8; 
    printf("%2.f bytes em bits = %2.f bits \n", numero_bytes, numero_bits);



}

void convert_byte_kbyte()
{
    float numero_bytes, numero_kbytes;
    double potencia = pow(2, 10);
    printf("insira a quantidade de bytes a ser convertida para kbytes:\n");
    scanf("%f", &numero_bytes);

    numero_kbytes = numero_bytes / potencia;
    printf("%2.f bytes em kbytes = %2.f kbytes \n", numero_bytes, numero_kbytes);
}

void main()
{
    int id;
    printf("Qual operacao deseja realizar?\n");
    printf("digite 1 para bytes\ndigite 2 para bytes para bits\ndigite 3 para bytes para kbytes\n");
    scanf("%d", &id);
    
    
    switch (id)
    {
    case 1:
        convert_bit_byte();
        break;
    case 2:
        convert_byte_bit();
        break;
    case 3:
        convert_byte_kbyte();
        break;
    default:
        printf("valor inserido invalido");
        break;
    }
}