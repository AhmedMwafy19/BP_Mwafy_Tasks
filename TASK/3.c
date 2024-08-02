
/*Assuming we used dynamic memory allocation
instead of normal arrays*/void destroyStack() {
    
    if (arr != NULL) {
        free(arr);
        arr = NULL; 
    }
}