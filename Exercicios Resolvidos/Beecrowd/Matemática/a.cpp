#include <stdio.h>
int main() 
{
  int i, idade=0;
  float peso=0, altura=0,soma_idades = 0, media_idades=0, imc=0;

  for (i = 1; i <= 5; i++) 
  {
    printf("Pessoa: %i,", i);
    printf("Digite a idade: ");
    scanf("%i", &idade);
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    soma_idades += idade;
    media_idades = soma_idades / 5;

    if (idade < 18) {
      printf("ClassificaC'C#o: Menor de idade");
    } 
    else 
    {
      if (idade >= 18 || idade <= 59) 
      {
        printf("ClassificaC'C#o: Adulto");
      }
      else
    	{
      		printf("ClassificaC'C#o: Idoso");
    	}
    }
    

    imc = peso / (altura * altura);
    printf("imc: %.2f\n", imc);
  }

  printf("media das idades do grupo: %.2f", media_idades);

  return 0;
}
 
