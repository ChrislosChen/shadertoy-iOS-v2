#extension GL_EXT_shader_texture_lod : enable
#extension GL_OES_standard_derivatives : enable

precision highp float;
precision highp int;
precision mediump sampler2D;

uniform vec3      iResolution;                  // viewport resolution (in pixels)
uniform float     iGlobalTime;                  // shader playback time (in seconds)
uniform vec4      iMouse;                       // mouse pixel coords
uniform vec4      iDate;                        // (year, month, day, time in seconds)
uniform float     iSampleRate;                  // sound sample rate (i.e., 44100)
uniform vec3      iChannelResolution[4];        // channel resolution (in pixels)
uniform float     iChannelTime[4];              // channel playback time (in sec)

uniform vec2      ifFragCoordOffsetUniform;     // used for tiled based hq rendering