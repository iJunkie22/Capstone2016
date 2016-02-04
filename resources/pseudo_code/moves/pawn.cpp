bool is_legal(int x_pos1, int y_pos1, int x_pos2, int y_pos2) {
    // TODO: Add a check for if moved (check for if in home row maybe)
    // TODO: define is_from_init
    // TODO: define is_kill

    int delta_x = x_pos2 - x_pos1;
    int delta_y = y_pos2 - y_pos1;
    //bool has_moved = ((delta_x != 0) || (delta_y != 0));

    bool x_valid = (
                    (is_kill && (-1 <= delta_x <= 1)) // allow delta_x if performing a kill
                    || (delta_x == 0)
                );

    bool y_valid = (
                    (is_from_init && !is_kill && (delta_y == 2))
                    || (delta_y == 1)
                );
    return (x_valid && y_valid);
