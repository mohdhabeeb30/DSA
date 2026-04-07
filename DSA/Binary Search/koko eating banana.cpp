class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = 0;

        // max pile nikaalo
        for (int x : piles) {
            end = max(end, x);
        }

        while (start < end) {
            int mid = (start + end) / 2;
            int time = 0;

            // total time calculate karo
            for (int x : piles) {
                time += (x + mid - 1) / mid;
            }

            if (time <= h) {
                end = mid;      // chhota try karo
            } else {
                start = mid + 1; // speed badhao
            }
        }

        return start;
    }
};