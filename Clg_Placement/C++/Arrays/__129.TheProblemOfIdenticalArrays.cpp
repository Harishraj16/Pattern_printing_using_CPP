int check(int *a, int *b, int n){
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
