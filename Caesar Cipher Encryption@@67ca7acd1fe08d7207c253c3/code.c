void caesarCipher(char message[] , int shift , char encrypted[]){

    for(int i=0;i<shift;i++){
       encrypted[i] =message[i]+shift;

    }
}   