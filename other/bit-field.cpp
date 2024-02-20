struct BitFieldExample {
    unsigned int flag1 : 1; // 1-bit field for flag1
    unsigned int flag2 : 1; // 1-bit field for flag2
    unsigned int value : 8; // 8-bit field for value (0 to 255)
};

/*
bit field là kỹ thuật tránh cho compiler tự alignment => mục đích để tiết kiệm bộ nhớ
*/