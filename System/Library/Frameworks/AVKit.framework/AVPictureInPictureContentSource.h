/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIWindow;


@protocol AVPictureInPictureContentSource <NSObject>
@property (nonatomic,readonly) CGRect avkit_videoRectInWindow; 
@property (nonatomic,readonly) BOOL avkit_isVisible; 
@property (nonatomic,readonly) UIWindow * avkit_window; 
@required
-(id)avkit_makePlayerControllerIfNeeded:(id)arg1;
-(id)avkit_pictureInPictureViewController;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
-(void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
-(void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
-(CGRect)avkit_videoRectInWindow;
-(BOOL)avkit_isVisible;
-(UIWindow *)avkit_window;

@end

