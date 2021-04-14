/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount, NSString, NSArray, NSURL;

@interface AMSMetricsBatch : NSObject {

	BOOL _anonymous;
	BOOL _containsLoadURL;
	ACAccount* _account;
	NSString* _canaryIdentifier;
	NSArray* _droppedEvents;
	NSArray* _eventDictionaries;
	NSArray* _events;
	NSURL* _reportURL;
	NSArray* _skippedEvents;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL anonymous;                           //@synthesize anonymous=_anonymous - In the implementation block
@property (nonatomic,retain) NSString * canaryIdentifier;              //@synthesize canaryIdentifier=_canaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL containsLoadURL;                     //@synthesize containsLoadURL=_containsLoadURL - In the implementation block
@property (nonatomic,retain) NSArray * droppedEvents;                  //@synthesize droppedEvents=_droppedEvents - In the implementation block
@property (nonatomic,retain) NSArray * eventDictionaries;              //@synthesize eventDictionaries=_eventDictionaries - In the implementation block
@property (nonatomic,retain) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSURL * reportURL;                        //@synthesize reportURL=_reportURL - In the implementation block
@property (nonatomic,retain) NSArray * skippedEvents;                  //@synthesize skippedEvents=_skippedEvents - In the implementation block
-(void)setEvents:(NSArray *)arg1 ;
-(BOOL)anonymous;
-(NSArray *)events;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)canaryIdentifier;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(void)setAnonymous:(BOOL)arg1 ;
-(BOOL)containsLoadURL;
-(void)setContainsLoadURL:(BOOL)arg1 ;
-(NSArray *)droppedEvents;
-(void)setDroppedEvents:(NSArray *)arg1 ;
-(NSArray *)eventDictionaries;
-(void)setEventDictionaries:(NSArray *)arg1 ;
-(NSURL *)reportURL;
-(void)setReportURL:(NSURL *)arg1 ;
-(NSArray *)skippedEvents;
-(void)setSkippedEvents:(NSArray *)arg1 ;
@end

