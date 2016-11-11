#ifndef GLRENDERER_H
#define GLRENDERER_H

#include "GLRect.h"
#include "GLPoint.h"

#ifdef __APPLE__
#include <OpenGL/gl.h>
#elif defined(_WIN32)
#include <windows.h>
#include <gl/gl.h>
#elif defined(__HAIKU__)
#include <GL/gl.h>
#elif defined(GLYPHA_QT)
#include <QtOpenGL>
#endif

namespace GL {

class Renderer {
public:
    void resize(int width, int height);
    void clear();
    
    void fillRect(const Rect& rect);
    void setFillColor(int red, int green, int blue);

    void beginLines(float lineWidth);
    void endLines();
    void moveTo(int h, int v);
    void lineTo(int h, int v);
    
    Rect bounds();
    
private:
    Rect bounds_;
    bool didPrepare_;
    Point lineStart_;
};

}

#endif
