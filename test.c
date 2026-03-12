#include<stdio.h>

int main(void)
{   char school[20] = "hansung univ"; // 한글 글자당 2바이트, 배열은 " "
    char department[20] = "AI응용학과"; // 한글 글자당 2바이트, 배열은 " "
    char c = 'A'; //문자는 ' '
    char name[10] = "조석래";
    int st_no = 2171269;
    printf("----------------\n");
    printf("학교:%s\n", school);    
    printf("학과:%s\n", department);
    printf("이름:%s\n", name);
    printf("학번:%d\n", st_no);
    printf("----------------\n");

    printf("----------------\n");
    printf("학과: AI응용학과\n");
    printf("이름: 조석래\n");
    printf("힉반: 2171269\n");
    printf("----------------\n");
    
}
