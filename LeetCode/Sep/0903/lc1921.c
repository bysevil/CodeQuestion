// https://leetcode.cn/problems/eliminate-maximum-number-of-monsters/description/?envType=daily-question&envId=2023-09-03

static int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int eliminateMaximum(int* dist, int distSize, int* speed, int speedSize) {
    int* reach = calloc(distSize, sizeof(int));
    for (int i = 0; i < distSize; i++) {
        reach[i] = (dist[i] - 1) / speed[i] + 1;
    }
    qsort(reach, distSize, sizeof(int), cmp);
    for (int i = 0; i < distSize; i++) {
        if (reach[i] <= i) {
            free(reach);
            return i;
        }
    }
    free(reach);
    return distSize;
}
