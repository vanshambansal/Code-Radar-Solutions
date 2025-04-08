int kangaroo(int x1 , int v1 , int x2 , int v2){
    if(v1 == v2)
        return -1;
        if((x2 - x1)/(v1-v2) >= 0)
            return (x2 - x1)/(v1-v2);
        else return -1;
        
        
}