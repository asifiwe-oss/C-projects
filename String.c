#include<stdio.h>
#include<string.h>
int main(){
    char c[] = "abcd";
    printf("%d\n",sizeof(c));
    int a = sizeof(c);
    int b = sizeof(c[0]);
    printf("%d\n",b);
    
    //Reading string(with space) using scanf
    //We use gets

    // char name[30];
    // printf("Enter name: ");
    // fgets(name,sizeof(name),stdin);
    // name[strcspn(name, "\n")] = '\0';
    // puts(name);

    //strcpy

     char copy[10] = "Hello";
     char copier[10];
     strcpy(copier,copy);
     printf("Destination: %s\n",copier);     

     //stcat

     strcat(copy, copier);
     printf("%s\n", copy);

     //strcmp

     char str1[10] = "Hello";
     char str2[14] = "Hello";
     int comp = strcmp(str1,str2);
     printf("%d\n",comp);

     char stri[] = "greet";
     char str[] = "GREET";
     int compare = strcmp(stri,str);
     printf("%d\n",compare);

     char class[] = "fish";
     char phyla[] = "chordata";
     int animal = strcmp(class,phyla);
     int birds = strcmp(phyla,class);
    
    printf("%d\n",birds);  
    printf("%d\n",animal);

    char cha[] = "Asifiwe";
    char ch[] = "Asiuiwe";
    int sol = strcmp(cha,ch);
    printf("%d\n",sol);


    // Returns 0 only if the content is same regardless size
    //Lower case have a larger ASCII values than upper case
    // Letters that come later have a bigger ASCII


    char upper[] = "UPPER";
    strlwr(upper);
    printf("%s\n",upper);

        return 0;
}