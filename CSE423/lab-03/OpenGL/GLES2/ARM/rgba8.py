'''OpenGL extension ARM.rgba8

This module customises the behaviour of the 
OpenGL.raw.GLES2.ARM.rgba8 to provide a more 
Python-friendly API

Overview (from the spec)
	
	This extension enables a RGBA8 renderbuffer storage format.
	It is similar to OES_rgb8_rgba8, but only exposes RGBA8.

The official definition of this extension is available here:
http://www.opengl.org/registry/specs/ARM/rgba8.txt
'''
from OpenGL import platform, constant, arrays
from OpenGL import extensions, wrapper
import ctypes
from OpenGL.raw.GLES2 import _types, _glgets
from OpenGL.raw.GLES2.ARM.rgba8 import *
from OpenGL.raw.GLES2.ARM.rgba8 import _EXTENSION_NAME

def glInitRgba8ARM():
    '''Return boolean indicating whether this extension is available'''
    from OpenGL import extensions
    return extensions.hasGLExtension( _EXTENSION_NAME )


### END AUTOGENERATED SECTION