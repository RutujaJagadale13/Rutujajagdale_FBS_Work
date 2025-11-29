//Write a program to check whether a given character is uppercase or lowercase.
void main()
 {
    char ch = 'G';

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else
        printf("Not an alphabet");

    
}