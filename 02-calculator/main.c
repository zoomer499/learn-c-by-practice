# include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter an expression (e.g., 3 + 4): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': printf("Результат: %d\n", a+b); break;
        case '-': printf("Результат: %d\n", a-b); break;
        case '*': printf("Результат: %d\n", a*b); break;
        case '/':
            if (b != 0) printf("Результат: %d\n", a/b);
            else printf("Ошибка: Деление на ноль!\n");
            break;
        default: printf("Ошибка: Неизвестная операция!\n");
    }
    return 0;    
}