/**
*ler nome, curso, universidade, matrícula
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
  char nome[40];
  char curso[50];
  char universidade[60];
  char matricula [80];
  printf("digite o nome:\n");
  fgets(nome,40,stdin);
  printf("digite o curso:\n");
  fgets(curso,50,stdin);
  printf("digite a universidade:\n");
  fgets(universidade,60,stdin);
  printf("digite a matricula:\n");
  fgets(matricula,80,stdin);
  printf("Nome: %s\nCurso: %s\nUniversidade: %s\nMatricula: %s", nome,curso,universidade,matricula);
  #include <stdio.h>
  #include <stdio.h>
  int a,b,c;
  printf ("Digite o valor de a ");
  scanf ("%d",&a);
  printf ("Digite o valor de b ");
  scanf ("%d",&b);
  //o comando for abaixo 4 laço infinito
 for (c = a ; ; c++)
  printf("%d \n",c);
  system("pause");
  return 0;




  





  

  
  
}
