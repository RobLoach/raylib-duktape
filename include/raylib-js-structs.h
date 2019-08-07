#ifndef RAYLIB_JS_STRUCTS_H__
#define RAYLIB_JS_STRUCTS_H__

template<>
struct dukglue::types::DukType<Vector2> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Vector2 read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Vector2 out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Vector2 value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
    }
};

template<>
struct dukglue::types::DukType<Vector3> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Vector3 read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Vector3 out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "z");
        out.z = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Vector3 value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
        duk_push_number(ctx, value.z);
        duk_put_prop_string(ctx, obj_idx, "z");
    }
};

template<>
struct dukglue::types::DukType<Vector4> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Vector4 read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Vector4 out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "z");
        out.z = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "w");
        out.w = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Vector4 value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
        duk_push_number(ctx, value.z);
        duk_put_prop_string(ctx, obj_idx, "z");
        duk_push_number(ctx, value.w);
        duk_put_prop_string(ctx, obj_idx, "w");
    }
};

template<>
struct dukglue::types::DukType<Color> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Color read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Color out;
        duk_get_prop_string(ctx, arg_idx, "r");
        out.r = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "g");
        out.g = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "b");
        out.b = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "a");
        out.a = duk_get_int(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Color value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_int(ctx, value.r);
        duk_put_prop_string(ctx, obj_idx, "r");
        duk_push_int(ctx, value.g);
        duk_put_prop_string(ctx, obj_idx, "g");
        duk_push_int(ctx, value.b);
        duk_put_prop_string(ctx, obj_idx, "b");
        duk_push_int(ctx, value.a);
        duk_put_prop_string(ctx, obj_idx, "a");
    }
};

template<>
struct dukglue::types::DukType<Rectangle> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Rectangle read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Rectangle out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "width");
        out.width = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "height");
        out.height = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Rectangle value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
        duk_push_number(ctx, value.width);
        duk_put_prop_string(ctx, obj_idx, "width");
        duk_push_number(ctx, value.height);
        duk_put_prop_string(ctx, obj_idx, "height");
    }
};

#endif
