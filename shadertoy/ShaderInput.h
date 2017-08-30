//
//  ShaderCanvasInputController.h
//  shadertoy
//
//  Created by Reinder Nijhoff on 06/12/15.
//  Copyright © 2015 Reinder Nijhoff. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APIShaderObject.h"

typedef NS_ENUM(NSUInteger, ShaderInputFilterMode) {
    NEAREST,
    MIPMAP,
    LINEAR
};

typedef NS_ENUM(NSUInteger, ShaderInputWrapMode) {
    CLAMP,
    REPEAT
};

typedef NS_ENUM(NSUInteger, ShaderInputType) {
    TEXTURE2D,
    TEXTURECUBE,
    KEYBOARD,
    VIDEO,
    WEBCAM,
    MUSIC,
    MICROPHONE,
    SOUNDCLOUD,
    BUFFER
};

@interface ShaderInput : NSObject

- (void) initWithShaderPassInput:(APIShaderPassInput *)input;
- (void) bindTexture:(NSMutableArray *)shaderPasses keyboardBuffer:(unsigned char*)keyboardBuffer;

- (void) pause;
- (void) play;
- (void) rewindTo:(double)time;
- (void) mute;

- (float) getResolutionWidth;
- (float) getResolutionHeight;
- (int) getChannel;

- (void) updateSpectrum:(unsigned char *)data;

@end
