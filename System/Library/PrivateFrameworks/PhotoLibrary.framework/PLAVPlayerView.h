/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerLayer, AVPlayer;

@interface PLAVPlayerView : UIView {

	long long _scaleMode;

}

@property (nonatomic,retain,readonly) AVPlayerLayer * layer; 
@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) long long scaleMode;                         //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) CGRect videoRect; 
+(Class)layerClass;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)videoRect;
-(void)setScaleMode:(long long)arg1 ;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
-(long long)scaleMode;
@end

