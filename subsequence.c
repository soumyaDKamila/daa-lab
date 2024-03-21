#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void longestCommonSubsequence(char* str1, char* str2, int m, int n) {
    int lcs[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (str1[i - 1] == str2[j - 1])
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }

    int index = lcs[m][n];
    char lcsString[index + 1];
    lcsString[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (str1[i - 1] == str2[j - 1]) {
            lcsString[index - 1] = str1[i - 1];
            i--;
            j--;
            index--;
        } else if (lcs[i - 1][j] > lcs[i][j - 1])
            i--;
        else
            j--;
    }

    printf("Longest Common Subsequence: %s\n", lcsString);
}

int main() {
    char str1[] = "AGGTAB";
    char str2[] = "GXTXAYB";

    int m = strlen(str1);
    int n = strlen(str2);

    longestCommonSubsequence(str1, str2, m, n);

    return 0;
}
