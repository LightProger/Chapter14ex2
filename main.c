#include <stdio.h>

/* Программа-пример No2 из главы 14
   Руководства по С для новичков, 3-е издание
   Файл Chapter14ex2.c
   Программа выполняет умножение двух чисел и выводит
   результат умножения на экран, пока этого хочет
   пользователь. Ввод ответа N прервет выполнение цикла
 */
int main ()
{
  float num1, num2, result;
  char choice;

  do{
      printf("Введите первый множитель:\n");
      scanf(" %f", &num1);

      if(num1 > 0)
        {
          printf("Введите второй множитель:\n");
          scanf(" %f", &num2);
        }
      else { break;}

      if(num2 > 0)
        {
          result = num1 * num2;
          printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        }
      else { break; }

      printf("Выполнить умножение следующей пары чисел? Y/N \n");
      scanf(" %c", &choice);

      if(choice == 'y') { choice = 'Y'; }

    }while(choice == 'Y');

  return 0;
}