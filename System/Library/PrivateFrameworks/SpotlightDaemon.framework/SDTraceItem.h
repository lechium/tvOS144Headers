/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSObject;

@interface SDTraceItem : NSObject <NSCopying> {

	double _startTime;
	long long _identifier;
	double _duration;
	NSString* _label;
	NSObject* _data;
	NSString* _string;

}

@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSObject * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * string;                 //@synthesize string=_string - In the implementation block
+(void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3 ;
+(id)stringFromReferenceDate:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)string;
-(NSObject *)data;
-(void)setString:(NSString *)arg1 ;
-(long long)identifier;
-(double)startTime;
-(void)setIdentifier:(long long)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setData:(NSObject *)arg1 ;
-(double)duration;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
@end
