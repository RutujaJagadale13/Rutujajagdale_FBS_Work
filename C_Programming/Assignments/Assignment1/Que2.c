//Write a program to check given 3 digit number is pallindrome or not.
void main() {
    int num = 121;
    int temp = num;
    int rev = 0, rem;

    rem = temp % 10;
    rev = rev * 10 + rem;
    temp /= 10;

    rem = temp % 10;
    rev = rev * 10 + rem;
    temp /= 10;

    rem = temp % 10;
    rev = rev * 10 + rem;

    if(num == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

   
}
