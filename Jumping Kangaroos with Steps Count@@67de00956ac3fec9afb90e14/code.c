int kangaroo(int x1 , int v1 , int x2 , int v2){
    if(v1 == v2)
        return -1;
        float ans = (x2 - x1)/(v1-v2);
        int ans2 = (x2 - x1)/(v1-v2);
        if( ans>= 0 && ans == ans2)
            return (x2 - x1)/(v1-v2);
        else return -1;
        
        
}