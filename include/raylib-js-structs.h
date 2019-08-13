#ifndef RAYLIB_JS_STRUCTS_H__
#define RAYLIB_JS_STRUCTS_H__

#include <raylib.h>
#include <duktape.h>
#include <dukglue/dukglue.h>
#include <dukglue/detail_primitive_types.h>

namespace dukglue {
namespace types {

template<>
struct DukType<::Vector2> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static ::Vector2 read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        ::Vector2 out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, ::Vector2 value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
    }
};

template<>
struct DukType<::Vector3> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static ::Vector3 read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        ::Vector3 out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "z");
        out.z = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, ::Vector3 value) {
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
struct DukType<Vector4> {
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
struct DukType<Matrix> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Matrix read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Matrix out;
        duk_get_prop_string(ctx, arg_idx, "m0");
        out.m0 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m1");
        out.m1 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m2");
        out.m2 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m3");
        out.m3 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m4");
        out.m4 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m5");
        out.m5 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m6");
        out.m6 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m7");
        out.m7 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m8");
        out.m8 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m9");
        out.m9 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m10");
        out.m10 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m11");
        out.m11 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m12");
        out.m12 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m13");
        out.m13 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m14");
        out.m14 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m15");
        out.m15 = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Matrix value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.m0);
        duk_put_prop_string(ctx, obj_idx, "m0");
        duk_push_number(ctx, value.m1);
        duk_put_prop_string(ctx, obj_idx, "m1");
        duk_push_number(ctx, value.m2);
        duk_put_prop_string(ctx, obj_idx, "m2");
        duk_push_number(ctx, value.m3);
        duk_put_prop_string(ctx, obj_idx, "m3");
        duk_push_number(ctx, value.m4);
        duk_put_prop_string(ctx, obj_idx, "m4");
        duk_push_number(ctx, value.m5);
        duk_put_prop_string(ctx, obj_idx, "m5");
        duk_push_number(ctx, value.m6);
        duk_put_prop_string(ctx, obj_idx, "m6");
        duk_push_number(ctx, value.m7);
        duk_put_prop_string(ctx, obj_idx, "m7");
        duk_push_number(ctx, value.m8);
        duk_put_prop_string(ctx, obj_idx, "m8");
        duk_push_number(ctx, value.m9);
        duk_put_prop_string(ctx, obj_idx, "m9");
        duk_push_number(ctx, value.m10);
        duk_put_prop_string(ctx, obj_idx, "m10");
        duk_push_number(ctx, value.m11);
        duk_put_prop_string(ctx, obj_idx, "m11");
        duk_push_number(ctx, value.m12);
        duk_put_prop_string(ctx, obj_idx, "m12");
        duk_push_number(ctx, value.m13);
        duk_put_prop_string(ctx, obj_idx, "m13");
        duk_push_number(ctx, value.m14);
        duk_put_prop_string(ctx, obj_idx, "m14");
        duk_push_number(ctx, value.m15);
        duk_put_prop_string(ctx, obj_idx, "m15");
    }
};

template<>
struct DukType<Color> {
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
struct DukType<Rectangle> {
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


template<>
struct DukType<Image> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Image read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Image out;
        duk_get_prop_string(ctx, arg_idx, "data");
        out.data = duk_get_pointer(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "width");
        out.width = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "height");
        out.height = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "mipmaps");
        out.mipmaps = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "format");
        out.format = duk_get_int(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Image value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_pointer(ctx, value.data);
        duk_put_prop_string(ctx, obj_idx, "data");
        duk_push_int(ctx, value.width);
        duk_put_prop_string(ctx, obj_idx, "width");
        duk_push_int(ctx, value.height);
        duk_put_prop_string(ctx, obj_idx, "height");
        duk_push_int(ctx, value.mipmaps);
        duk_put_prop_string(ctx, obj_idx, "mipmaps");
        duk_push_int(ctx, value.format);
        duk_put_prop_string(ctx, obj_idx, "format");
    }
};


template<>
struct DukType<Texture2D> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Texture2D read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Texture2D out;
        duk_get_prop_string(ctx, arg_idx, "id");
        out.id = duk_get_uint(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "width");
        out.width = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "height");
        out.height = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "mipmaps");
        out.mipmaps = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "format");
        out.format = duk_get_int(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Texture2D value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_uint(ctx, value.id);
        duk_put_prop_string(ctx, obj_idx, "id");
        duk_push_uint(ctx, value.width);
        duk_put_prop_string(ctx, obj_idx, "width");
        duk_push_int(ctx, value.height);
        duk_put_prop_string(ctx, obj_idx, "height");
        duk_push_int(ctx, value.mipmaps);
        duk_put_prop_string(ctx, obj_idx, "mipmaps");
        duk_push_int(ctx, value.format);
        duk_put_prop_string(ctx, obj_idx, "format");
    }
};

template<>
struct DukType<Camera2D> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Camera2D read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }

        Camera2D out;

        // Offset
        duk_get_prop_string(ctx, arg_idx, "offset");
        duk_get_prop_string(ctx, -1, "x");
        out.offset.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, -2, "y");
        out.offset.y = duk_get_number(ctx, -1);
        duk_pop(ctx);

        // Target
        duk_get_prop_string(ctx, arg_idx, "target");
        duk_get_prop_string(ctx, -1, "x");
        out.target.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, -2, "y");
        out.target.y = duk_get_number(ctx, -1);
        duk_pop(ctx);

        // Rotation
        duk_get_prop_string(ctx, arg_idx, "rotation");
        out.rotation = duk_get_number(ctx, -1);

        // Zoom
        duk_get_prop_string(ctx, arg_idx, "zoom");
        out.zoom = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Camera2D value) {
        duk_idx_t obj_idx = duk_push_object(ctx);

        // TODO: Fix push Camera.
        DukType<Vector2>::push<Vector2>(ctx, value.offset);
        duk_put_prop_string(ctx, obj_idx, "offset");
        duk_pop(ctx);

        DukType<Vector2>::push<Vector2>(ctx, value.target);
        duk_put_prop_string(ctx, obj_idx, "target");
        duk_pop(ctx);

        duk_push_number(ctx, value.rotation);
        duk_put_prop_string(ctx, obj_idx, "rotation");
        duk_push_number(ctx, value.zoom);
        duk_put_prop_string(ctx, obj_idx, "zoom");
    }
};

// TODO: Add Font
// TODO: Add RenderTexture2D
// TODO: Add NPatchInfo
// TODO: Add CharInfo
// TODO: Add Camera3D
// TODO: Add Mesh
// TODO: Add Shader
// TODO: Add MaterialMap
// TODO: Add Material
// TODO: Add Transform
// TODO: Add BoneInfo
// TODO: Add Model
// TODO: Add ModelAnimation
// TODO: Add Ray
// TODO: Add RayHitInfo
// TODO: Add BoundingBox
// TODO: Add Wave
// TODO: Add rAudioBuffer
// TODO: Add AudioStream
// TODO: Add Sound
// TODO: Add Music
// TODO: Add VrDeviceInfo

}
}

#endif
