#include 
int main()
{
    char n[10], ch[3];
    int c, e, ne, m;
    FILE *fptr;
    fptr = fopen("student.txt”,”a”);
    do
    {
    printf("Enter name class and 3 marks");
    scanf("%s %d %d %d %d", n, &c, &e, &ne, &m);
    fprintf(fptr,"%s %d %d %d %d\n", n, c, e, ne, m);
    printf("Press Y to continue");
    scanf("%s",ch);
    } while (strcmp(ch,"Y") == 0 || strcmp(ch,"y")==0);
    fclose(fptr);
    return 0;
}
