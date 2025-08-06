#include <stdio.h>

int main() {
    double x, total, price = 10, quantity = 2, discount = 3, rate = 5;
    int y = 4, z = 2, a = 3;
    int score, penalty = 2, mistake = 1;
    int result;

    // 1.จะได้เป็น x = x - 4.0;
    x = 10;
    x = x - 4.0;
    printf("แบบเต็ม x = x - 4.0: x = %.2f\n", x);

    x = 10;
    x -= 4.0;
    printf("แบบย่อ x -= 4.0: x = %.2f\n\n", x);

    // 2.จะได้เป็น x = 6.5 * x;
    x = 10;
    x = 6.5 * x;
    printf("แบบเต็ม x = 6.5 * x: x = %.2f\n", x);

    x = 10;
    x *= 6.5;
    printf("แบบย่อ x *= 6.5: x = %.2f\n\n", x);

    // 3.จะได้เป็น x = x % (y + z * a); ใช้ int
    int xi = 20;
    result = xi % (y + z * a);  // 20 % (4 + 6) = 20 % 10 = 0
    printf("แบบเต็ม x %% (y + z * a): result = %d\n", result);

    xi = 20;
    xi %= (y + z * a);
    printf("แบบย่อ x %%= (y + z * a): result = %d\n\n", xi);

    // 4.จะได้เป็น x = x / (2.0 * x);
    x = 10;
    x = x / (2.0 * x);
    printf("แบบเต็ม x = x / (2.0 * x): x = %.2f\n", x);

    x = 10;
    x /= (2.0 * x);
    printf("แบบย่อ x /= (2.0 * x): x = %.2f\n\n", x);

    // 5.จะได้เป็น total = total + (price + quantity - discount);
    total = 50;
    total = total + (price + quantity - discount); // 50 + (10+2-3) = 59
    printf("แบบเต็ม total = total + (...): total = %.2f\n", total);

    total = 50;
    total += (price + quantity - discount);
    printf("แบบย่อ total += (...): total = %.2f\n\n", total);

    // 6.จะได้เป็น x = x * (1 + rate / 100);
    x = 100;
    x = x * (1 + rate / 100);  // 100 * (1 + 5/100) = 105
    printf("แบบเต็ม x = x * (1 + rate / 100): x = %.2f\n", x);

    x = 100;
    x *= (1 + rate / 100);
    printf("แบบย่อ x *= (1 + rate / 100): x = %.2f\n\n", x);

    // 7. score = score - (penalty + (mistake + 1));
    score = 20;
    score = score - (penalty + (mistake + 1));  // 20 - (2 + 2) = 16
    printf("แบบเต็ม score = score - (...): score = %d\n", score);

    score = 20;
    score -= (penalty + (mistake + 1));
    printf("แบบย่อ score -= (...): score = %d\n", score);

    return 0;
}