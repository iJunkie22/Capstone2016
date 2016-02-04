bool is_legal(int x_pos1, int y_pos1, int x_pos2, int y_pos2) {
    int delta_x = x_pos2 - x_pos1;
    int delta_y = y_pos2 - y_pos1;
    bool has_moved = ((delta_x != 0) || (delta_y != 0));
    bool x_valid = (-1 <= delta_x <= 1);
    bool y_valid = (-1 <= delta_y <= 1);

    // TODO: Add an exception for castleing
    // TODO: Add a check for if it is in check and needs to move out of check
    // TODO: Add a check for if it places into check
    return (has_moved && x_valid && y_valid)
}
