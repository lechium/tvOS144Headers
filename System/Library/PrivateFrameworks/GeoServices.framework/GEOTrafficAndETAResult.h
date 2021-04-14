/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface GEOTrafficAndETAResult : NSObject {

	BOOL _isSuccess;
	double _seconds;
	double _aggressiveTravelTime;
	double _conservativeTravelTime;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;
	NSString* _writtenRouteName;
	NSString* _spokenRouteName;

}

@property (assign,nonatomic) BOOL isSuccess;                             //@synthesize isSuccess=_isSuccess - In the implementation block
@property (assign,nonatomic) double seconds;                             //@synthesize seconds=_seconds - In the implementation block
@property (assign,nonatomic) double aggressiveTravelTime;                //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
@property (assign,nonatomic) double conservativeTravelTime;              //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,copy) NSString * shortTrafficString;                //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,copy) NSString * longTrafficString;                 //@synthesize longTrafficString=_longTrafficString - In the implementation block
@property (nonatomic,copy) NSString * writtenRouteName;                  //@synthesize writtenRouteName=_writtenRouteName - In the implementation block
@property (nonatomic,copy) NSString * spokenRouteName;                   //@synthesize spokenRouteName=_spokenRouteName - In the implementation block
-(double)seconds;
-(void)setSeconds:(double)arg1 ;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(void)setWrittenRouteName:(NSString *)arg1 ;
-(void)setSpokenRouteName:(NSString *)arg1 ;
-(double)aggressiveTravelTime;
-(double)conservativeTravelTime;
-(BOOL)isSuccess;
-(void)setIsSuccess:(BOOL)arg1 ;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setConservativeTravelTime:(double)arg1 ;
-(NSString *)shortTrafficString;
-(void)setShortTrafficString:(NSString *)arg1 ;
-(NSString *)longTrafficString;
-(void)setLongTrafficString:(NSString *)arg1 ;
@end

