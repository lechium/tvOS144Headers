/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface CDBABCReporter : NSObject {

	BOOL _ignoreRateLimiting;
	NSArray* _events;
	NSString* _subtype;
	NSString* _subtypeContext;

}

@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,retain) NSString * subtype;                     //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,retain) NSString * subtypeContext;              //@synthesize subtypeContext=_subtypeContext - In the implementation block
@property (nonatomic,retain) NSArray * events;                       //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL ignoreRateLimiting;                //@synthesize ignoreRateLimiting=_ignoreRateLimiting - In the implementation block
-(NSString *)domain;
-(NSString *)type;
-(void)report;
-(NSString *)subtype;
-(void)setEvents:(NSArray *)arg1 ;
-(void)setSubtype:(NSString *)arg1 ;
-(NSArray *)events;
-(id)initWithSubtype:(id)arg1 context:(id)arg2 ;
-(void)setIgnoreRateLimiting:(BOOL)arg1 ;
-(void)setSubtypeContext:(NSString *)arg1 ;
-(BOOL)rateLimitingAllowsABCReport;
-(NSString *)subtypeContext;
-(BOOL)ignoreRateLimiting;
@end

