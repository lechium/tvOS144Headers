/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _TVPVideoTitleInfo : NSObject {

	double _displayTime;
	NSString* _debugLabel;
	long long _mediaItemIdentifier;

}

@property (assign,nonatomic) double displayTime;                         //@synthesize displayTime=_displayTime - In the implementation block
@property (nonatomic,retain) NSString * debugLabel;                      //@synthesize debugLabel=_debugLabel - In the implementation block
@property (assign,nonatomic) long long mediaItemIdentifier;              //@synthesize mediaItemIdentifier=_mediaItemIdentifier - In the implementation block
-(void)setDebugLabel:(NSString *)arg1 ;
-(NSString *)debugLabel;
-(void)setDisplayTime:(double)arg1 ;
-(double)displayTime;
-(id)initWithMediaItemIdentifier:(long long)arg1 displayTime:(double)arg2 debugLabel:(id)arg3 ;
-(long long)mediaItemIdentifier;
-(void)setMediaItemIdentifier:(long long)arg1 ;
@end

