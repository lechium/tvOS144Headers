/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVPictureInPictureIndicatorSublayer, NSString;

@interface AVPictureInPictureIndicatorLayer : CALayer {

	AVPictureInPictureIndicatorSublayer* _contentLayer;
	CGRect _videoRectWhenPIPBegan;

}

@property (nonatomic,readonly) AVPictureInPictureIndicatorSublayer * contentLayer;              //@synthesize contentLayer=_contentLayer - In the implementation block
@property (nonatomic,readonly) CGRect videoRectWhenPIPBegan;                                    //@synthesize videoRectWhenPIPBegan=_videoRectWhenPIPBegan - In the implementation block
@property (nonatomic,copy) NSString * customText; 
-(id)init;
-(void)layoutSublayers;
-(id)initWithDisplayScale:(double)arg1 placeholderImage:(CGImageRef)arg2 opaque:(BOOL)arg3 videoRectWhenPIPBegan:(CGRect)arg4 ;
-(void)setCustomText:(NSString *)arg1 ;
-(NSString *)customText;
-(AVPictureInPictureIndicatorSublayer *)contentLayer;
-(CGRect)videoRectWhenPIPBegan;
@end
