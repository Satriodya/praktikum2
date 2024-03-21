#include <stdio.h>

void koboImaginaryChess(int i, int j, int size, int *chessBoard) {
  
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            *(chessBoard + row*size + col) = 0;
        }
    }

    int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
    int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    for (int k = 0; k < 8; k++) {
        int new_i = i + dx[k];
        int new_j = j + dy[k];

        if (new_i >= 0 && new_i < size && new_j >= 0 && new_j < size) {
            *(chessBoard + new_i*size + new_j) = 1;
        }
    }

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("%d ", *(chessBoard + row*size + col));
        }
        printf("\n");
    }
}

int main() {
    int i, j;
    printf("Masukkan nilai i dan j dipisahkan spasi: ");
    scanf("%d %d", &i, &j);

    int chessBoard[8][8];
    koboImaginaryChess(i, j, 8, (int *)chessBoard);

    return 0;
}
