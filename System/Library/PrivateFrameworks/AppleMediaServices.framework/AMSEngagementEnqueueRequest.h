/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AMSProcessInfo, NSArray, NSString;

@interface AMSEngagementEnqueueRequest : NSObject <NSSecureCoding> {

	AMSProcessInfo* _clientInfo;
	NSArray* _destinations;
	NSArray* _events;
	NSString* _logKey;
	double _timeout;

}

@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSArray * destinations;                   //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSString * logKey;                        //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic) double timeout;                           //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setEvents:(NSArray *)arg1 ;
-(NSArray *)events;
-(AMSProcessInfo *)clientInfo;
-(NSArray *)destinations;
-(void)setDestinations:(NSArray *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
@end

