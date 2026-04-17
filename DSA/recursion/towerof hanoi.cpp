class Solution {
public:
    void toh(int n, int source, int helper, int dest) {
        if (n == 1) return;

        toh(n - 1, source, dest, helper);

        toh(n - 1, helper, source, dest);
    }

    long long towerOfHanoi(int n, int from, int to, int aux) {
        toh(n, from, to, aux);
        return pow(2, n) - 1;
    }
};
