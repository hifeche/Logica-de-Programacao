#include <stdio.h>

int main(int argc, char **argv)
{
	float valor, desc, acre, parc;
	int opc;
		printf("Digite o valor da compra: ");
		scanf("%f", &valor);
		
		printf("1. Pagamento a vista\n");
		printf("2. Pagamento com cheque pre-datado para 30 dias\n");
		printf("3. Pagamento parcelado em 3 vezes\n");
		printf("4. Pagamento parcelado em 6 vezes\n");
		printf("5. Pagamento parcelado em 12 vezes\n");
		scanf("%d", &opc);
		
	switch (opc)
	{
	case 1:
		printf("Pagamento à vista\n");
		desc = valor * 0.15;
		printf("Valor pago a vista: %.2f\n", valor - desc);
		break;
	case 2:
		printf("Pagamento com cheque pre-datado para 30 dias\n");
		desc = valor * 0.10;
		printf("Valor pago com cheque de 30 dias: %.2f\n", valor - desc);
		break;
	case 3:
		printf("Pagamento parcelado em 3 vezes\n");
		desc = valor * 0.05;
		parc = valor / 3;
		printf("Valor total pago em parcelas: %.2f\n", valor - desc);
		printf("3x de: %.2f\n", parc);
		break;
	case 4:
		printf("Valor tatal pago em 6 parcelas: \n");
		parc = valor / 6;
		printf("6x de: %.2f\n", parc);
		printf("Valor total: %.2f\n", valor);
		break;
	case 5:
		printf("Pagamento parcelado em 12 vezes\n");
		acre = valor * 1.08;
		parc= valor / 12;
		printf("Valor total pago em parcelas: %.2f\n", acre);
		printf("12x de: %.2f\n", parc);
		break;
	default:
		printf ("Opçao nao encontrada");
	}
	return 0;
}

