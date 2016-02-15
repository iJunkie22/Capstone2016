## STRUCT smartTile
- `nw` Pointer to smartTitle at (`x - 1`, `y - 1`) on board
- `n` Pointer to smartTitle at (`x`, `y - 1`) on board
- `ne` Pointer to smartTitle at (`x + 1`, `y - 1`) on board
- `e` Pointer to smartTitle at (`x + 1`, `y`) on board
- `se` Pointer to smartTitle at (`x + 1`, `y + 1`) on board
- `s` Pointer to smartTitle at (`x`, `y + 1`) on board
- `sw` Pointer to smartTitle at (`x - 1`, `y + 1`) on board
- `w` Pointer to smartTitle at (`x - 1`, `y`) on board
- `self` Pointer to self
- `payload` Pointer to piece currently on this smartTile


### Special implementations
In the case of board boundaries, there is a special smartTile that will only be defined once:

```cpp
smartTile nullTile;
nullTile.nw = nullTile.self;
nullTile.n = nullTile.self;
nullTile.ne = nulltTile.self;
nullTile.e = nullTile.self;
nullTile.se = nullTile.self;
nullTile.s = nulltTile.self;
nullTile.sw = nullTile.self;
nullTile.w = nullTile.self;
nullTile.ne = nulltTile.self;
```

