#include <stdio.h>
int main (void)
{
char ch;
printf("문자를 입력하시오:");


ch = getchar ();
if (ch >= 65 && ch <= 90)
        printf ("%c는 대문자입니다.\n", ch);

else if (ch>=97 && ch <=122){

       printf ("%c는 소문자입니다.\n", ch);
}

else if (ch>=48 && ch<=57){
       printf ("%c는 숫자입니다.\n", ch);
}
else {
      printf ("%c는 기타문자입니다.\n", ch);
}


    return 0;
}