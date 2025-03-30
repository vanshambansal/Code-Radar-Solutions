void printPrimesInRange(int a,int b){

    for(int i=a;i<=b;i++){
        int isprime=0;
        for(int j=2;j<arr[i];j++){
            if((arr[i]%j)==0){
                isprime=1;
            }
        }
        if(isprime==0){
            printf("%d ",arr[i]);
        }
    }

}