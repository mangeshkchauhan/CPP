
using LL = long long;

const int MAX = 20;

int len;
char s[MAX];
LL dp[MAX][10][2]; 

LL solve(int i, int prev, int bit) {

  if (i == len)
    return 1;

  if (dp[i][prev][bit] == -1) {

    if (bit) {
      LL val = 0;
      int max_char = s[i] - '0';
      
      for (int j = prev; j <= max_char; ++j) {

        if (j == max_char)
          val += solve(i + 1, j, 1);
        else
          val += solve(i + 1, j, 0);
      }

      dp[i][prev][bit] = val;
    }
    else {
      LL val = 0;
      for (int j = prev; j <= 9; ++j)
        val += solve(i + 1, j, bit);

      dp[i][prev][bit] = val;
    }
  }

  return dp[i][prev][bit];
}

int ally(long long int n) {


  len = 0;
  while (n) {
    int rem = n % 10;
    n = n / 10;

    s[len++] = rem + '0';
  }

  reverse(s, s + len);

  for (int i = 0; i < MAX; ++i)
    for (int j = 0; j < 10; ++j)
      for (int k = 0; k < 2; ++k)
        dp[i][j][k] = -1;

  return solve(0, 0, 1) - 1;
}

