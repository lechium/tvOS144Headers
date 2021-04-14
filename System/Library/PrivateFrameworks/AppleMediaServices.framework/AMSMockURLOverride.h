/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AMSObservable, AMSMockURLResponse, NSMutableArray;

@interface AMSMockURLOverride : NSObject <NSCopying> {

	AMSObservable* _executedObservable;
	AMSMockURLResponse* _response;
	NSMutableArray* _comparators;

}

@property (nonatomic,retain) NSMutableArray * comparators;                    //@synthesize comparators=_comparators - In the implementation block
@property (nonatomic,retain) AMSObservable * executedObservable;              //@synthesize executedObservable=_executedObservable - In the implementation block
@property (nonatomic,retain) AMSMockURLResponse * response;                   //@synthesize response=_response - In the implementation block
+(id)overrideWithHost:(id)arg1 usingResponse:(id)arg2 ;
+(id)overrideWithPathComponent:(id)arg1 usingResponse:(id)arg2 ;
+(id)overrideWithURLRegex:(id)arg1 usingResponse:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setResponse:(AMSMockURLResponse *)arg1 ;
-(AMSMockURLResponse *)response;
-(BOOL)shouldOverrideURLRequest:(id)arg1 ;
-(AMSObservable *)executedObservable;
-(void)withURLMatchingHost:(id)arg1 ;
-(void)withURLContainingPath:(id)arg1 ;
-(void)withURLRegexValidation:(id)arg1 ;
-(void)_withURLMatchingHost:(id)arg1 containingPath:(id)arg2 queryItems:(id)arg3 ;
-(NSMutableArray *)comparators;
-(void)withURLQueryItems:(id)arg1 ;
-(void)withHTTPBodyValidation:(/*^block*/id)arg1 encoding:(long long)arg2 ;
-(void)withResponse:(id)arg1 ;
-(void)setExecutedObservable:(AMSObservable *)arg1 ;
-(void)setComparators:(NSMutableArray *)arg1 ;
@end

