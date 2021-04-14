/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSSet;

@interface SPFinderStateInfo : NSObject <NSSecureCoding> {

	BOOL _state;
	BOOL _optInScreenOffScan;
	NSDate* _lastUpdated;
	NSDate* _lastPublishDate;
	NSDate* _lastScheduledPublishActivityDate;
	long long _activeCache;
	NSArray* _disabledReasonsArray;

}

@property (assign,nonatomic) BOOL state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL optInScreenOffScan;                              //@synthesize optInScreenOffScan=_optInScreenOffScan - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                                   //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSDate * lastPublishDate;                               //@synthesize lastPublishDate=_lastPublishDate - In the implementation block
@property (nonatomic,copy) NSDate * lastScheduledPublishActivityDate;              //@synthesize lastScheduledPublishActivityDate=_lastScheduledPublishActivityDate - In the implementation block
@property (assign,nonatomic) long long activeCache;                                //@synthesize activeCache=_activeCache - In the implementation block
@property (nonatomic,retain) NSArray * disabledReasonsArray;                       //@synthesize disabledReasonsArray=_disabledReasonsArray - In the implementation block
@property (nonatomic,copy,readonly) NSSet * disabledReasons; 
+(BOOL)supportsSecureCoding;
+(BOOL)canPublishAnonymously;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)state;
-(void)setState:(BOOL)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(NSSet *)disabledReasons;
-(void)setOptInScreenOffScan:(BOOL)arg1 ;
-(void)setLastPublishDate:(NSDate *)arg1 ;
-(void)setLastScheduledPublishActivityDate:(NSDate *)arg1 ;
-(void)setActiveCache:(long long)arg1 ;
-(void)setDisabledReasonsArray:(NSArray *)arg1 ;
-(NSDate *)lastPublishDate;
-(NSDate *)lastScheduledPublishActivityDate;
-(long long)activeCache;
-(NSArray *)disabledReasonsArray;
-(BOOL)optInScreenOffScan;
-(id)initWithState:(BOOL)arg1 optInScreenOffScan:(BOOL)arg2 lastUpdated:(id)arg3 lastPublishDate:(id)arg4 lastScheduledPublishActivityDate:(id)arg5 activeCache:(long long)arg6 disabledReasons:(id)arg7 ;
@end

