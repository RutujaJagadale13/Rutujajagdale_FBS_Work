//Write a program to check whether a given character is a vowel or consonant.
void main() {
    char ch = 'a';

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}