#ifndef USE_ES2
#include "gles.h"
#ifndef skip_glBindFramebuffer
void gl4es_glBindFramebuffer(GLenum target, GLuint framebuffer) {
    LOAD_GLES_OES(glBindFramebuffer);
#ifndef direct_glBindFramebuffer
    PUSH_IF_COMPILING(glBindFramebuffer)
#endif
    gles_glBindFramebuffer(target, framebuffer);
}
void glBindFramebuffer(GLenum target, GLuint framebuffer) __attribute__((alias("gl4es_glBindFramebuffer"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glBindRenderbuffer
void gl4es_glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
    LOAD_GLES_OES(glBindRenderbuffer);
#ifndef direct_glBindRenderbuffer
    PUSH_IF_COMPILING(glBindRenderbuffer)
#endif
    gles_glBindRenderbuffer(target, renderbuffer);
}
void glBindRenderbuffer(GLenum target, GLuint renderbuffer) __attribute__((alias("gl4es_glBindRenderbuffer"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glBlendColor
void gl4es_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    LOAD_GLES_OES(glBlendColor);
#ifndef direct_glBlendColor
    PUSH_IF_COMPILING(glBlendColor)
#endif
    gles_glBlendColor(red, green, blue, alpha);
}
void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) __attribute__((alias("gl4es_glBlendColor"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glBlendEquation
void gl4es_glBlendEquation(GLenum mode) {
    LOAD_GLES_OES(glBlendEquation);
#ifndef direct_glBlendEquation
    PUSH_IF_COMPILING(glBlendEquation)
#endif
    gles_glBlendEquation(mode);
}
void glBlendEquation(GLenum mode) __attribute__((alias("gl4es_glBlendEquation"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glBlendEquationSeparate
void gl4es_glBlendEquationSeparate(GLenum modeRGB, GLenum modeA) {
    LOAD_GLES_OES(glBlendEquationSeparate);
#ifndef direct_glBlendEquationSeparate
    PUSH_IF_COMPILING(glBlendEquationSeparate)
#endif
    gles_glBlendEquationSeparate(modeRGB, modeA);
}
void glBlendEquationSeparate(GLenum modeRGB, GLenum modeA) __attribute__((alias("gl4es_glBlendEquationSeparate"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glBlendFuncSeparate
void gl4es_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    LOAD_GLES_OES(glBlendFuncSeparate);
#ifndef direct_glBlendFuncSeparate
    PUSH_IF_COMPILING(glBlendFuncSeparate)
#endif
    gles_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}
void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) __attribute__((alias("gl4es_glBlendFuncSeparate"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glCheckFramebufferStatus
GLenum gl4es_glCheckFramebufferStatus(GLenum target) {
    LOAD_GLES_OES(glCheckFramebufferStatus);
#ifndef direct_glCheckFramebufferStatus
    PUSH_IF_COMPILING(glCheckFramebufferStatus)
#endif
    return gles_glCheckFramebufferStatus(target);
}
GLenum glCheckFramebufferStatus(GLenum target) __attribute__((alias("gl4es_glCheckFramebufferStatus"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glDeleteFramebuffers
void gl4es_glDeleteFramebuffers(GLsizei n, GLuint * framebuffers) {
    LOAD_GLES_OES(glDeleteFramebuffers);
#ifndef direct_glDeleteFramebuffers
    PUSH_IF_COMPILING(glDeleteFramebuffers)
#endif
    gles_glDeleteFramebuffers(n, framebuffers);
}
void glDeleteFramebuffers(GLsizei n, GLuint * framebuffers) __attribute__((alias("gl4es_glDeleteFramebuffers"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glDeleteRenderbuffers
void gl4es_glDeleteRenderbuffers(GLsizei n, GLuint * renderbuffers) {
    LOAD_GLES_OES(glDeleteRenderbuffers);
#ifndef direct_glDeleteRenderbuffers
    PUSH_IF_COMPILING(glDeleteRenderbuffers)
#endif
    gles_glDeleteRenderbuffers(n, renderbuffers);
}
void glDeleteRenderbuffers(GLsizei n, GLuint * renderbuffers) __attribute__((alias("gl4es_glDeleteRenderbuffers"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glDrawTexf
void gl4es_glDrawTexf(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height) {
    LOAD_GLES_OES(glDrawTexf);
#ifndef direct_glDrawTexf
    PUSH_IF_COMPILING(glDrawTexf)
#endif
    gles_glDrawTexf(x, y, z, width, height);
}
void glDrawTexf(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height) __attribute__((alias("gl4es_glDrawTexf"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glDrawTexi
void gl4es_glDrawTexi(GLint x, GLint y, GLint z, GLint width, GLint height) {
    LOAD_GLES_OES(glDrawTexi);
#ifndef direct_glDrawTexi
    PUSH_IF_COMPILING(glDrawTexi)
#endif
    gles_glDrawTexi(x, y, z, width, height);
}
void glDrawTexi(GLint x, GLint y, GLint z, GLint width, GLint height) __attribute__((alias("gl4es_glDrawTexi"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glFramebufferRenderbuffer
void gl4es_glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    LOAD_GLES_OES(glFramebufferRenderbuffer);
#ifndef direct_glFramebufferRenderbuffer
    PUSH_IF_COMPILING(glFramebufferRenderbuffer)
#endif
    gles_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}
void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) __attribute__((alias("gl4es_glFramebufferRenderbuffer"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glFramebufferTexture2D
void gl4es_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    LOAD_GLES_OES(glFramebufferTexture2D);
#ifndef direct_glFramebufferTexture2D
    PUSH_IF_COMPILING(glFramebufferTexture2D)
#endif
    gles_glFramebufferTexture2D(target, attachment, textarget, texture, level);
}
void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) __attribute__((alias("gl4es_glFramebufferTexture2D"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glGenFramebuffers
void gl4es_glGenFramebuffers(GLsizei n, GLuint * ids) {
    LOAD_GLES_OES(glGenFramebuffers);
#ifndef direct_glGenFramebuffers
    PUSH_IF_COMPILING(glGenFramebuffers)
#endif
    gles_glGenFramebuffers(n, ids);
}
void glGenFramebuffers(GLsizei n, GLuint * ids) __attribute__((alias("gl4es_glGenFramebuffers"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glGenRenderbuffers
void gl4es_glGenRenderbuffers(GLsizei n, GLuint * renderbuffers) {
    LOAD_GLES_OES(glGenRenderbuffers);
#ifndef direct_glGenRenderbuffers
    PUSH_IF_COMPILING(glGenRenderbuffers)
#endif
    gles_glGenRenderbuffers(n, renderbuffers);
}
void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers) __attribute__((alias("gl4es_glGenRenderbuffers"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glGenerateMipmap
void gl4es_glGenerateMipmap(GLenum target) {
    LOAD_GLES_OES(glGenerateMipmap);
#ifndef direct_glGenerateMipmap
    PUSH_IF_COMPILING(glGenerateMipmap)
#endif
    gles_glGenerateMipmap(target);
}
void glGenerateMipmap(GLenum target) __attribute__((alias("gl4es_glGenerateMipmap"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glGetFramebufferAttachmentParameteriv
void gl4es_glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params) {
    LOAD_GLES_OES(glGetFramebufferAttachmentParameteriv);
#ifndef direct_glGetFramebufferAttachmentParameteriv
    PUSH_IF_COMPILING(glGetFramebufferAttachmentParameteriv)
#endif
    gles_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}
void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params) __attribute__((alias("gl4es_glGetFramebufferAttachmentParameteriv"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glGetRenderbufferParameteriv
void gl4es_glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params) {
    LOAD_GLES_OES(glGetRenderbufferParameteriv);
#ifndef direct_glGetRenderbufferParameteriv
    PUSH_IF_COMPILING(glGetRenderbufferParameteriv)
#endif
    gles_glGetRenderbufferParameteriv(target, pname, params);
}
void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params) __attribute__((alias("gl4es_glGetRenderbufferParameteriv"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glIsFramebuffer
GLboolean gl4es_glIsFramebuffer(GLuint framebuffer) {
    LOAD_GLES_OES(glIsFramebuffer);
#ifndef direct_glIsFramebuffer
    PUSH_IF_COMPILING(glIsFramebuffer)
#endif
    return gles_glIsFramebuffer(framebuffer);
}
GLboolean glIsFramebuffer(GLuint framebuffer) __attribute__((alias("gl4es_glIsFramebuffer"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glIsRenderbuffer
GLboolean gl4es_glIsRenderbuffer(GLuint renderbuffer) {
    LOAD_GLES_OES(glIsRenderbuffer);
#ifndef direct_glIsRenderbuffer
    PUSH_IF_COMPILING(glIsRenderbuffer)
#endif
    return gles_glIsRenderbuffer(renderbuffer);
}
GLboolean glIsRenderbuffer(GLuint renderbuffer) __attribute__((alias("gl4es_glIsRenderbuffer"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glMultiDrawArrays
void gl4es_glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount) {
    LOAD_GLES_OES(glMultiDrawArrays);
#ifndef direct_glMultiDrawArrays
    PUSH_IF_COMPILING(glMultiDrawArrays)
#endif
    gles_glMultiDrawArrays(mode, first, count, primcount);
}
void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount) __attribute__((alias("gl4es_glMultiDrawArrays"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glMultiDrawElements
void gl4es_glMultiDrawElements(GLenum mode, GLsizei * count, GLenum type, const void * const * indices, GLsizei primcount) {
    LOAD_GLES_OES(glMultiDrawElements);
#ifndef direct_glMultiDrawElements
    PUSH_IF_COMPILING(glMultiDrawElements)
#endif
    gles_glMultiDrawElements(mode, count, type, indices, primcount);
}
void glMultiDrawElements(GLenum mode, GLsizei * count, GLenum type, const void * const * indices, GLsizei primcount) __attribute__((alias("gl4es_glMultiDrawElements"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glRenderbufferStorage
void gl4es_glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    LOAD_GLES_OES(glRenderbufferStorage);
#ifndef direct_glRenderbufferStorage
    PUSH_IF_COMPILING(glRenderbufferStorage)
#endif
    gles_glRenderbufferStorage(target, internalformat, width, height);
}
void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) __attribute__((alias("gl4es_glRenderbufferStorage"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glTexGenfv
void gl4es_glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params) {
    LOAD_GLES_OES(glTexGenfv);
#ifndef direct_glTexGenfv
    PUSH_IF_COMPILING(glTexGenfv)
#endif
    gles_glTexGenfv(coord, pname, params);
}
void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params) __attribute__((alias("gl4es_glTexGenfv"))) __attribute__((visibility("default")));
#endif
#ifndef skip_glTexGeni
void gl4es_glTexGeni(GLenum coord, GLenum pname, GLint param) {
    LOAD_GLES_OES(glTexGeni);
#ifndef direct_glTexGeni
    PUSH_IF_COMPILING(glTexGeni)
#endif
    gles_glTexGeni(coord, pname, param);
}
void glTexGeni(GLenum coord, GLenum pname, GLint param) __attribute__((alias("gl4es_glTexGeni"))) __attribute__((visibility("default")));
#endif
#endif