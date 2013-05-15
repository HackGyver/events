void function() {
    int i = 0;
    int tabint[20] = {0};
    for (i = 0; i < 30; i = i + 1)
        tabint[i] = i;
}

int main(int argv, char *argc[]) {
    function();
    return 0;
}
