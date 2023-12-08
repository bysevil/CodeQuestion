long long waysToBuyPensPencils(int total, int cost1, int cost2){
    if(cost1 < cost2){
        cost1 ^= cost2;
        cost2 ^= cost1;
        cost1 ^= cost2;
    }

    long ans = 0;
    for(int i = 0; i * cost2 <= total; i++){
        ans += (total - i * cost2) / cost1 + 1;
    }

    return ans;
}
