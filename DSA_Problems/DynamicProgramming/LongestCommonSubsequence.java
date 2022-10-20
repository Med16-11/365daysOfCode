class LongestCommonSubsequence {
    public staticic void main(String args[]) {
        String text1 = "abdje";
        String text2 = "ace";
        int m = text1.length();
        int n = text2.length();

        int[][] a = new int[m+1][n+1];

        for (int i = 0; i < m + 1; ++i) {
            for (int j = 0; j < n + 1; ++j) {
                if (i == 0 || j == 0) {
                    a[i][j] = 0;
                }
                else if (text1.charAt(i-1) == text2.charAt(j - 1)) {
                    a[i][j] = a[i-1][j-1] + 1;
                }
                else {
                    a[i][j] = Math.max(a[i-1][j], a[i][j-1]);
                }
            }
        }

        int p = a[m][n];
        return p;
    }
}
/*
Time Complexity -> O(m * n)
Space Complexity -> O(min(m, n))
 */

