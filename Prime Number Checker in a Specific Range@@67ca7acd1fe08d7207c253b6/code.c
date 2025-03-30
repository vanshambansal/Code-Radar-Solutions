void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        int found =0;
        int isprime=0;
        for(int j=2;j<i;j++){
            if((i%j)==0){
                isprime=1;
            }
        }
        if(isprime==0){
            printf("%d ",i);
            found=1;
        }
        if(found==0){
            printf("No prime numbers");
        }
    }

}