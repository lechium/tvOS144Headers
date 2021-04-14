/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString;

@interface SBSAnalyticsState : NSObject <BSDescriptionProviding> {

	double _timestamp;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withTimestamp:(double)arg1 payload:(id)arg2 ;
+(id)withTimestamp:(double)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(double)timestamp;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithTimestamp:(double)arg1 payload:(id)arg2 ;
-(id)coreAnalyticsRepresentation;
@end

