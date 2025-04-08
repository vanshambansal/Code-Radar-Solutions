int maxGadgetSpend(int key[] , int n , int head[] , int m , int budget){

    int max = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x= key[i]+head[j];
            if(x>max && x<=budget){
                max=x;
            }
        }
    }
    printf("%d",max);
}