#include <stdio.h>

int main() {
    float tc;
    float tb = 22;

    printf("Введіть поточну температуру: ");
    scanf("%f", &tc);

    if (tc >= tb) {
        printf("Температура досягла заданого значення.\n");
        printf("Затримка: 2 секунди.\n");
    } else {
        printf("Температура нижча за задане значення.\n");
        printf("Затримка: 4 секунди.\n");
    }

    printf("Перевірка системи...\n");
    printf("Керування охолодженням...\n");

    return 0;
}
