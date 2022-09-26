#include <stdio.h>

//os comentários que coloquei foi pra acompanhar a conta

int dia, mes, ano, a, b, c, d, e, f , g , h, aux, soma, conta;
int main()
{
    
  printf ("Este é um jogo para saber qual é o seu tipo de perfil entre: \n"); 
  printf (" 0 - Tímido \n 1 - Sonhador \n 2 - Paquerador \n 3 - Atraente \n 4 - Irresistível\n \n"); 
   
  printf("Para começar informe seu dia de nascimento: ");
  scanf("%i", &dia);
  
  printf("informe seu mês de nascimento: ");
  scanf("%i", &mes);
  
  printf("informe seu ano de nascimento: ");
  scanf("%i", &ano);
  
  a = dia*100 + mes;
  b = a + ano;
  
  //printf (" %i", b);
  
  c = b % 10;
  
  //printf (" %i", c);
  
  d = b - c;
  
  //printf (" %i", d);
  
  e = d % 100;
  
  //printf (" %i", e);
  
  f = d - e;
  
  //printf (" %i", f);
  
  g = f / 100;
  
  //printf (" %i", g);
  
  aux = b % 100;
  
  //printf (" %i", aux);
  
  soma = aux + g;
  
  //printf (" %i", soma);
  
  conta = soma % 5 ;
  
  //printf (" %i", conta);
  
  if (conta == 0) {
      printf("Seu perfil é : Tímido");
  }
  if (conta == 1) {
      printf("Seu perfil é : Sonhador");
  }
  if (conta == 2) {
      printf("Seu perfil é : Paquerador");
  }
  if (conta == 3) {
      printf("Seu perfil é : Atraente");
  }
  if (conta == 4) {
      printf("Seu perfil é : Irresistível");
  }
  
}