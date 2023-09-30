// https://leetcode.cn/problems/height-checker/

// 快排对比
int cmp(const void* a,const void* b){
    return *(int*)a - *(int*)b;
}

int heightChecker(int* heights, int heightsSize){

    int* tmp = malloc(heightsSize * sizeof(int));
    memcpy(tmp, heights, heightsSize * sizeof(int));

    qsort(tmp,heightsSize,sizeof(int),cmp);

    int ans = 0;
    for(int i = 0; i < heightsSize; i++){
        if(tmp[i] != heights[i]) ans++;
    }

    return ans;
}

// 桶排序
int heightChecker(int* heights, int heightsSize){
	int hashtabs[101] = { 0 };
	for(int i = 0; i < heightsSize; i++){
		hashtabs[heights[i]]++;
	}

    int ans = 0;
	for(int i = 0,j =0; i < heightsSize; i++){
		while(!hashtabs[j]) j++;
		if(heights[i] != j) ans++;;
		hashtabs[j]--; 
  	}

    return ans;
}