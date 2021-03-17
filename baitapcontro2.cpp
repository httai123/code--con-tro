# bai 1
void reverse(char *s) {
    // Your code goes here
    int n = strlen(s);
    for(int i=0;i<n/2;i++) {
        char temp = *(s+i);
        *(s+i) =*(s+n-1-i);
        *(s+n-1-i) = temp;
    }
}
# bai 2
void rFilter(char *s) {
    // Your code goes here
    int n = strlen(s);
    for(int i = n-1;i>=0;i--) {
        if((*(s+i)<'a'||*(s+i)>'z')||(*(s+i)<'A'||*(s+i)>'Z')) ;
         *(s+i) = '_';
    }
}
