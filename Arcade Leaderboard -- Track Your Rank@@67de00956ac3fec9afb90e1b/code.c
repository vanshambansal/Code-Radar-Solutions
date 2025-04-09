void trackPlayerRanks(int ranked[], int n, int played[], int m, int result[]) {
    int unique[10000], u = 0;

    // Step 1: Create dense ranking
    unique[u++] = ranked[0];
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            unique[u++] = ranked[i];
        }
    }

    // Step 2: Compare from the back (since played scores may increase)
    int i = u - 1;
    for (int j = 0; j < m; j++) {
        while (i >= 0 && played[j] >= unique[i]) {
            i--;
        }
        result[j] = i + 2;  // +2 because rank is index+1 and we do i-- above
    }
}
