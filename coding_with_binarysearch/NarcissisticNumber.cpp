bool solve(int n) {
    int num = n;
    int count = 0;
    while (num>0){
        num = num/10;
        count++;
    }
    int digit = 0;
    int number = n;
    int nn = 0;
    while(number>0){
        digit = number % 10;
        nn = nn + pow(digit,count);
        number = number/10;
    }

    if(n == nn)
        return true;
    else
        return false;
}
