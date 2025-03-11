#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int a;
    int b;
    int y;
} Interval;

int compare(const void *a, const void *b) {
    Interval *ia = (Interval *)a;
    Interval *ib = (Interval *)b;
    if (ia->y != ib->y) {
        return ia->y - ib->y;
    } else {
        return ia->a - ib->a;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    long long *results = (long long *)malloc(t * sizeof(long long)); // Store results

    for (int idx = 0; idx < t; idx++) { // Process each test case
        int n, m;
        scanf("%d %d", &n, &m);
        int *x = (int *)malloc(n * sizeof(int));
        int *r = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &r[i]);
        }

        // Calculate intervals for all circles
        int total_intervals = 0;
        for (int i = 0; i < n; i++) {
            total_intervals += (r[i] + 1);
        }

        Interval *intervals = (Interval *)malloc(total_intervals * sizeof(Interval));
        int count = 0;
        for (int i = 0; i < n; i++) {
            int xi = x[i];
            int ri = r[i];
            for (int y = 0; y <= ri; y++) {
                int s_squared = ri * ri - y * y;
                int s = (int)sqrt(s_squared);
                intervals[count].a = xi - s;
                intervals[count].b = xi + s;
                intervals[count].y = y;
                count++;
            }
        }

        // Sort intervals by y, then by a
        qsort(intervals, total_intervals, sizeof(Interval), compare);

        long long total = 0;
        int i = 0;
        while (i < total_intervals) {
            int current_y = intervals[i].y;
            int group_start = i;
            while (i < total_intervals && intervals[i].y == current_y) {
                i++;
            }
            int group_end = i;

            // Merge intervals for current_y
            long long merged_count = 0;
            if (group_start < group_end) {
                int current_a = intervals[group_start].a;
                int current_b = intervals[group_start].b;
                for (int j = group_start + 1; j < group_end; j++) {
                    if (intervals[j].a <= current_b + 1) {
                        current_a = (current_a < intervals[j].a) ? current_a : intervals[j].a;
                        current_b = (current_b > intervals[j].b) ? current_b : intervals[j].b;
                    } else {
                        merged_count += (current_b - current_a + 1);
                        current_a = intervals[j].a;
                        current_b = intervals[j].b;
                    }
                }
                merged_count += (current_b - current_a + 1);
            }

            // Add to total (account for y=0 symmetry)
            if (current_y == 0) {
                total += merged_count;
            } else {
                total += 2 * merged_count;
            }
        }

        results[idx] = total; // Save result
        free(x);
        free(r);
        free(intervals);
    }

    // Print all results at the end
    for (int i = 0; i < t; i++) {
        printf("%lld\n", results[i]);
    }

    free(results);
    return 0;
}
