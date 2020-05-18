#include <stdio.h>
#include <stdlib.h>

int aplicarDescuento(int precio);

int main()
{
    int precio;
    printf("Ingrese precio del producto: ");
    scanf("%d",&precio);
    precio=aplicarDescuento(precio);
    printf("Precio con descuento es: $%d",precio);
    return 0;
}
int aplicarDescuento(int precio)
{
    int precioDescuento;
    precioDescuento=precio-precio*5/100;
    return precioDescuento;
}
