#include <stdio.h>

void main() {

  int num1 = 0, num2 = 0;
  char sex;
  int age;

  while (1) {
	  
    printf("\n��ֱ����������Ա�(m/f):");
    scanf(" %c", &sex); //
    printf("��������������(int):");
    scanf("%d", &age);

    if (sex == 'f' && (10 <= age && age <= 12)) {

        printf("Congratulations,you are admitted\n");
        num1++;
        // break;
    }
    else
    {
      num2++;
      printf("Sorry,only the girl aged 10-12 can be admitted\n");
      // break;
    }

    if ((num1 + num2) == 10) {

      break;
    }
  }

  printf("\nһ��%d��¼�ã�%dδ�ܱ�¼��\n", num1,num2);
}