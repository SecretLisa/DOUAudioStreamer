/* vim: set ft=objc fenc=utf-8 sw=2 ts=2 et: */
/*
 *  DOUAudioStreamer - A Core Audio based streaming audio player for iOS/Mac:
 *
 *      https://github.com/douban/DOUAudioStreamer
 *
 *  Copyright 2013 Douban Inc.  All rights reserved.
 *
 *  Use and distribution licensed under the BSD license.  See
 *  the LICENSE file for full text.
 *
 *  Authors:
 *      Chongyu Zhu <lembacon@gmail.com>
 *
 */

#if TARGET_OS_IPHONE

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>

@interface DOUEAGLView : UIView

+ (EAGLRenderingAPI)eaglRenderingAPI;

@property (nonatomic, getter = isPaused) BOOL paused;
@property (nonatomic, assign) NSInteger frameInterval;

- (void)prepare;
- (void)cleanup;

- (void)reshape;
- (void)render;

@end

#endif /* TARGET_OS_IPHONE */
