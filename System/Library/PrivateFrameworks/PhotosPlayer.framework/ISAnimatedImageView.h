/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISAnimatedImagePlayerDestination.h>

@class UIImageView, ISAnimatedImagePlayer, PFAnimatedImage, NSString;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination> {

	UIImageView* _placeholderImageView;
	ISAnimatedImagePlayer* _player;

}

@property (assign,nonatomic) UIImageView * placeholderImageView;                  //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) ISAnimatedImagePlayer * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) PFAnimatedImage * image; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) unsigned long long displayedFrameIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(ISAnimatedImagePlayer *)player;
-(void)setPlayer:(ISAnimatedImagePlayer *)arg1 ;
-(PFAnimatedImage *)image;
-(void)setImage:(PFAnimatedImage *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)isPlaying;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didMoveToWindow;
-(void)didMoveToSuperview;
-(void)setPlaying:(BOOL)arg1 ;
-(id)initWithAnimatedImage:(id)arg1 ;
-(UIImageView *)placeholderImageView;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(void)frameDidChange;
-(void)setDisplayedFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)displayedFrameIndex;
-(BOOL)isReadyToDisplay;
-(void)didBeginAnimating;
-(id)initWithAnimatedImagePlayer:(id)arg1 ;
@end

