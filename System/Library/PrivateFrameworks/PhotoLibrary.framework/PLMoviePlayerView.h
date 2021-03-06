/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class PLAVPlayerView, UIView, AVPlayer;

@interface PLMoviePlayerView : UIView {

	PLAVPlayerView* _avPlayerView;
	BOOL _destinationPlaceholderHidden;
	long long _destinationPlaceholderStyle;

}

@property (nonatomic,retain,readonly) UIView * videoView; 
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) long long destinationPlaceholderStyle;                                              //@synthesize destinationPlaceholderStyle=_destinationPlaceholderStyle - In the implementation block
@property (assign,getter=isDestinationPlaceholderHidden,nonatomic) BOOL destinationPlaceholderHidden; 
-(void)dealloc;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)videoView;
-(void)setScaleMode:(long long)arg1 ;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
-(void)reattachVideoView;
-(BOOL)isDestinationPlaceholderHidden;
-(void)setDestinationPlaceholderHidden:(BOOL)arg1 ;
-(void)_installBackgroundView:(id)arg1 ;
-(long long)destinationPlaceholderStyle;
@end

