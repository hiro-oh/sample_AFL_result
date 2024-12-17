#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void test_case(char *buf) {
    // 複数の条件分岐を設ける
    if (buf[0] == 'A') {
        if (buf[1] == 'B') {
            if (buf[2] == 'C') {
                printf("Found ABC!\n");
                exit(0);
                printf(buf);
            }
            printf(buf);
        }
      printf(buf);
    }
    if (buf[0] == 'X') {
        if (buf[1] == 'Y') {
            if (buf[2] == 'Z') {
                printf("Found XYZ!\n");
                exit(0);
                printf(buf);
            }
            printf(buf);
        }
      printf(buf);
    }
}

int main(int argc, char **argv) {
    char buf[16] = {0}; // バッファの初期化
    ssize_t n;

    // 標準入力からデータを読み取る
    n = read(0, buf, sizeof(buf) - 1);
    if (n < 1) {
        printf("No input\n");
        return 1;
    }

    // テスト関数を呼び出す
    test_case(buf);

    printf("No match found\n");
    return 0;
}




