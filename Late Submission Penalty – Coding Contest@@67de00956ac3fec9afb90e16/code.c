int calculatePenalty(int d , int m , int y , int dd , int dm , int dy){
    if((y - dy)>0){
        return 5000;
    }
    else if((m - dm)>0){
        int ans = 200 * (m - dm);
        return ans;
    }
    else if((d - dd)>0){
        int ans1 = 10 * (d - dd);
        return ans1;
    }else{
        return 0;
    }
}