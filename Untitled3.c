#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting in descending order
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int t;
    scanf("%d", &t);  // Number of test cases

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);  // Number of shelves and bottles

        // Array to store the maximum costs of bottles for each brand
        int *brand_costs[200001] = {NULL};
        int brand_count[200001] = {0};

        // Reading brand and cost information
        for (int i = 0; i < k; i++) {
            int bi, ci;
            scanf("%d %d", &bi, &ci);

            // Allocate or reallocate memory for the brand's costs
            if (brand_costs[bi] == NULL) {
                brand_costs[bi] = (int *)malloc(sizeof(int) * k);
            }
            brand_costs[bi][brand_count[bi]++] = ci;
        }

        // Array to store all maximum costs
        int *all_max_costs = (int *)malloc(sizeof(int) * k);
        int total_count = 0;

        // Collect and sort the highest cost bottles for each brand
        for (int i = 1; i <= k; i++) {
            if (brand_costs[i] != NULL) {
                // Sort the brand's costs in descending order
                qsort(brand_costs[i], brand_count[i], sizeof(int), compare);

                // Add the sorted costs to the all_max_costs array
                for (int j = 0; j < brand_count[i]; j++) {
                    all_max_costs[total_count++] = brand_costs[i][j];
                }

                // Free the memory allocated for the brand's costs
                free(brand_costs[i]);
            }
        }

        // Sort the combined array of all maximum costs in descending order
        qsort(all_max_costs, total_count, sizeof(int), compare);

        // Calculate the total sum for the top `n` shelves
        long long max_earnings = 0;
        for (int i = 0; i < n && i < total_count; i++) {
            max_earnings += all_max_costs[i];
        }

        // Print the result for this test case
        printf("%lld\n", max_earnings);

        // Free the allocated memory for the all_max_costs array
        free(all_max_costs);
    }

    return 0;
}

