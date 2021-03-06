/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface MTMediaTimeTracker : NSObject {

	float _playbackRate;
	NSDate* _date;
	unsigned long long _position;

}

@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float playbackRate;                       //@synthesize playbackRate=_playbackRate - In the implementation block
-(NSDate *)date;
-(unsigned long long)position;
-(void)setPosition:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(void)updatePosition:(unsigned long long)arg1 ;
-(id)estimatedTimeAtPastPosition:(unsigned long long)arg1 ;
-(void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)estimatedTimeAtPosition:(unsigned long long)arg1 ;
@end

