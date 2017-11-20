#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "KZ_VideoPlayer.h"
#import "KZ_VideoPlayerControlView.h"
#import "KZ_VideoPlayerStatus.h"
#import "KZ_VideoPlayerView.h"
#import "KZ_VideoUtils.h"

FOUNDATION_EXPORT double KZ_VideoPlayerVersionNumber;
FOUNDATION_EXPORT const unsigned char KZ_VideoPlayerVersionString[];

