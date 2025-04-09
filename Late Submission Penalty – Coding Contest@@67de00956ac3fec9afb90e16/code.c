int calculatePenalty(int d , int m , int y , int dd , int dm , int dy){
    if((dy - y)!=0){
        return 5000;
    }
    else if((dm - m)!=0){
        int ans = 200 * (m - dm);
        return ans;
    }
    else{
        int ans1 = 10 * (d - dd);
        return ans1;
    }
}