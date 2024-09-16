'''Autogenerated by xml_generate script, do not edit!'''
from OpenGL import platform as _p, arrays
# Code generation uses this
from OpenGL.raw.GL import _types as _cs
# End users want this...
from OpenGL.raw.GL._types import *
from OpenGL.raw.GL import _errors
from OpenGL.constant import Constant as _C

import ctypes
_EXTENSION_NAME = 'GL_INGR_color_clamp'
def _f( function ):
    return _p.createFunction( function,_p.PLATFORM.GL,'GL_INGR_color_clamp',error_checker=_errors._error_checker)
GL_ALPHA_MAX_CLAMP_INGR=_C('GL_ALPHA_MAX_CLAMP_INGR',0x8567)
GL_ALPHA_MIN_CLAMP_INGR=_C('GL_ALPHA_MIN_CLAMP_INGR',0x8563)
GL_BLUE_MAX_CLAMP_INGR=_C('GL_BLUE_MAX_CLAMP_INGR',0x8566)
GL_BLUE_MIN_CLAMP_INGR=_C('GL_BLUE_MIN_CLAMP_INGR',0x8562)
GL_GREEN_MAX_CLAMP_INGR=_C('GL_GREEN_MAX_CLAMP_INGR',0x8565)
GL_GREEN_MIN_CLAMP_INGR=_C('GL_GREEN_MIN_CLAMP_INGR',0x8561)
GL_RED_MAX_CLAMP_INGR=_C('GL_RED_MAX_CLAMP_INGR',0x8564)
GL_RED_MIN_CLAMP_INGR=_C('GL_RED_MIN_CLAMP_INGR',0x8560)
