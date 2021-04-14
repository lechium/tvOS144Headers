/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ABVCardTimeProvider;
@class NSDate;

@interface ABVCardWatchdogTimer : NSObject {

	BOOL _valid;
	unsigned long long _ticks;
	id<ABVCardTimeProvider> _timeProvider;
	NSDate* _startTime;

}

@property (assign,nonatomic) unsigned long long ticks;                            //@synthesize ticks=_ticks - In the implementation block
@property (nonatomic,readonly) id<ABVCardTimeProvider> timeProvider;              //@synthesize timeProvider=_timeProvider - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL valid;                                          //@synthesize valid=_valid - In the implementation block
+(id)timerWithTimeProvider:(id)arg1 ;
+(BOOL)shouldCheckTime;
-(void)dealloc;
-(BOOL)isValid;
-(NSDate *)startTime;
-(void)start;
-(void)setStartTime:(NSDate *)arg1 ;
-(BOOL)isStarted;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(id<ABVCardTimeProvider>)timeProvider;
-(void)checkValidity;
-(id)initWithTimeProvider:(id)arg1 ;
-(unsigned long long)ticks;
-(void)setTicks:(unsigned long long)arg1 ;
@end

