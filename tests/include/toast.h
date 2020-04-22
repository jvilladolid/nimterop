// #57
enum {
    _SG_STRING_SIZE = 16,
    _SG_SLOT_SHIFT = 16,
    _SG_SLOT_MASK = (1<<_SG_SLOT_SHIFT)-1,
    _SG_MAX_POOL_SIZE = (1<<_SG_SLOT_SHIFT),
    _SG_DEFAULT_BUFFER_POOL_SIZE = 128,
    _SG_DEFAULT_IMAGE_POOL_SIZE = 128,
    _SG_DEFAULT_SHADER_POOL_SIZE = 32,
    _SG_DEFAULT_PIPELINE_POOL_SIZE = 64,
    _SG_DEFAULT_PASS_POOL_SIZE = 16,
    _SG_DEFAULT_CONTEXT_POOL_SIZE = 16,
    _SG_MTL_DEFAULT_UB_SIZE = 4 * 1024 * 1024,
    _SG_MTL_DEFAULT_SAMPLER_CACHE_CAPACITY = 64,
};

// #152
enum {
    _ONE,
    _TWO,
    _MAX = _TWO,
    _MORE
};