#define BOARD_X_BLOCKS 8

bool is_on_board(int targ_x, int targ_y)
{
    return ((-1 < targ_x < BOARD_X_BLOCKS) && (-1 < targ_y < BOARD_X_BLOCKS));
}
