char ** commonChars(char ** A, int ASize, int* returnSize){
    int dat1[26] = {0};
    int dat2[26] = {0};
    int i = 0, j, c = 0,temp;

    while(A[0][i]!='\0')
        dat1[A[0][i++] - 'a']++;

    for(i = 1; i < ASize; i++){
        j = 0;
        while(A[i][j]!='\0'){
            dat2[A[i][j++]-'a']++;
        }
        for(j = 0; j < 26; j++){
            dat1[j] = dat1[j]<dat2[j]?dat1[j]:dat2[j];
            dat2[j] = 0;
        }
    }
    for(i = 0; i < 26; i++){
        c+=dat1[i];
        if(dat1[i]>0)
            printf("%c ", i + 'a');
    }

    char** str = (char**)malloc(sizeof(char*) * c);
    for(i = 0; i < c; i++){
        str[i] = (char*)malloc(2);
        str[i][1] = '\0';
    }
    int index = 0;
    for(i = 0; i < 26; i++){
        while(dat1[i] > 0){
            str[index++][0] = 'a' + i;
            dat1[i]--;
        }
    }
    *returnSize = c;
    return str;
}