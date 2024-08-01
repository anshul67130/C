#include <stdio.h>
#include <stdlib.h>

int** create(int m, int n) {
    int **mat = (int **) malloc(sizeof(int *) * m);
    if (mat == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < m; i++) {
        mat[i] = (int *) malloc(sizeof(int) * n);
        if (mat[i] == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
    }
    return mat;
}

void free_matrix(int **mat, int m) {
    for (int i = 0; i < m; i++) {
        free(mat[i]);
    }
    free(mat);
}

void fill(int **mat, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter mat(%d,%d): ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
}

void display(int **mat, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

int **add(int **mat1, int **mat2, int m, int n) {
    int **result = create(m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result[i][j] = mat1[i][j] + mat2[i][j];
    return result;
}

int **sub(int **mat1, int **mat2, int m, int n) {
    int **result = create(m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result[i][j] = mat1[i][j] - mat2[i][j];
    return result;
}

int **mul(int **mat1, int **mat2, int m1, int n, int m2) {
    int **result = create(m1, m2);
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < m2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return result;
}

int **transpose(int **mat, int m, int n) {
    int **temp = create(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            temp[i][j] = mat[j][i];
    return temp;
}

int main() {
    int choice, m1, n1, m2, n2;
    int **a, **b, **result;

    printf("Welcome to matrix calculations\n\
    What do you want to do: \n\
    1. Addition\n\
    2. Subtraction\n\
    3. Multiplication\n\
    4. Transpose\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the dimensions of the first matrix (eg. 3 3): ");
            scanf("%d%d", &m1, &n1);
            printf("Enter the dimensions of the second matrix (eg. 3 3): ");
            scanf("%d%d", &m2, &n2);

            if (m1 != m2 || n1 != n2)
                printf("Dimensions must be equal\n");
            else {
                printf("Enter first matrix: \n");
                a = create(m1, n1);
                fill(a, m1, n1);
                printf("Enter second matrix: \n");
                b = create(m2, n2);
                fill(b, m2, n2);

                result = add(a, b, m1, n1);
                printf("First matrix: \n");
                display(a, m1, n1);
                printf("Second matrix: \n");
                display(b, m2, n2);
                printf("The result is: \n");
                display(result, m1, n1);

                free_matrix(a, m1);
                free_matrix(b, m2);
                free_matrix(result, m1);
            }
            break;
        case 2:
            printf("Enter the dimensions of the first matrix (eg. 3 3): ");
            scanf("%d%d", &m1, &n1);
            printf("Enter the dimensions of the second matrix (eg. 3 3): ");
            scanf("%d%d", &m2, &n2);

            if (m1 != m2 || n1 != n2)
                printf("Dimensions must be equal\n");
            else {
                printf("Enter first matrix: \n");
                a = create(m1, n1);
                fill(a, m1, n1);
                printf("Enter second matrix: \n");
                b = create(m2, n2);
                fill(b, m2, n2);

                result = sub(a, b, m1, n1);
                printf("First matrix: \n");
                display(a, m1, n1);
                printf("Second matrix: \n");
                display(b, m2, n2);
                printf("The result is: \n");
                display(result, m1, n1);

                free_matrix(a, m1);
                free_matrix(b, m2);
                free_matrix(result, m1);
            }
            break;
        case 3:
            printf("Enter the dimensions of the first matrix (eg. 3 3): ");
            scanf("%d%d", &m1, &n1);
            printf("Enter the dimensions of the second matrix (eg. 3 3): ");
            scanf("%d%d", &m2, &n2);

            if (n1 != m2)
                printf("Number of columns of the first matrix must be equal to the number of rows of the second\n");
            else {
                printf("Enter first matrix: \n");
                a = create(m1, n1);
                fill(a, m1, n1);
                printf("Enter second matrix: \n");
                b = create(m2, n2);
                fill(b, m2, n2);

                result = mul(a, b, m1, n1, m2);
                printf("First matrix: \n");
                display(a, m1, n1);
                printf("Second matrix: \n");
                display(b, m2, n2);
                printf("The result is: \n");
                display(result, m1, m2);

                free_matrix(a, m1);
                free_matrix(b, m2);
                free_matrix(result, m1);
            }
            break;
        case 4:
            printf("Enter the dimensions of the matrix (eg. 3 3): ");
            scanf("%d%d", &m1, &n1);

            printf("Enter the matrix: \n");
            a = create(m1, n1);
            fill(a, m1, n1);
            printf("The matrix is:\n");
            display(a, m1, n1);

            result = transpose(a, m1, n1);
            printf("The transpose is:\n");
            display(result, n1, m1);

            free_matrix(a, m1);
            free_matrix(result, n1);
            break;
        default:
            printf("Select an appropriate option\n");
            break;
    }

    return 0;
}
