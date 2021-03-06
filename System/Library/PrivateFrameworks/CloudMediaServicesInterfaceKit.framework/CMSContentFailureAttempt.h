/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CMSCoding.h>

@class NSDate, NSString;

@interface CMSContentFailureAttempt : NSObject <CMSCoding> {

	unsigned long long _failure;
	NSDate* _timestamp;
	NSString* _result;
	NSString* _body;

}

@property (nonatomic,readonly) unsigned long long failure;              //@synthesize failure=_failure - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)result;
-(NSDate *)timestamp;
-(unsigned long long)failure;
-(void)setResult:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)initWithFailure:(unsigned long long)arg1 ;
-(id)cmsCoded;
@end

