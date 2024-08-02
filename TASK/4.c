/**assuming DMA a
& new array defined in main*/
void copyStack(int **newArr, int *newTop, int *newMAX) {
    *newArr=(int*)malloc(capacity * sizeof(int));
    *newMAX=capacity;
    *newTop=top;
    for (i=0;i<=top;i++) {
        (*newArr)[i]=arr[i];
    }
}