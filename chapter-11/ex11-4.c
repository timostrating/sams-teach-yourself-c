struct data {
    int first;
    float second;
    float third;
};

struct data info;

void main() {
    info.first = 100;
    struct data *p_info = &info;  // Remember: In C you need to specify to what kind of data struct your pointer is pointing to exactly.
}