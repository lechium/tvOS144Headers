/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface DAESubscribedCalendarSummary : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _notes;
	NSString* _color;
	double _refreshInterval;
	NSString* _subscriptionID;
	NSURL* _subscriptionURL;

}

@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * notes;                       //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSString * color;                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double refreshInterval;                 //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,retain) NSString * subscriptionID;              //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (nonatomic,retain) NSURL * subscriptionURL;                //@synthesize subscriptionURL=_subscriptionURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subscriptionID;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
@end

