/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface PPBaseFeedback : NSObject <NSSecureCoding, NSCopying> {

	NSString* _clientIdentifier;
	NSArray* _feedbackItems;
	NSString* _clientBundleId;
	NSString* _mappingId;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * feedbackItems;                //@synthesize feedbackItems=_feedbackItems - In the implementation block
@property (nonatomic,readonly) NSString * clientBundleId;              //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (nonatomic,readonly) NSString * mappingId;                   //@synthesize mappingId=_mappingId - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) BOOL isMapped; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSString *)clientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientBundleId;
-(BOOL)isMapped;
-(id)initWithFeedbackItems:(id)arg1 mappingId:(id)arg2 ;
-(id)initWithFeedbackItems:(id)arg1 timestamp:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(BOOL)isEqualToPPBaseFeedback:(id)arg1 ;
-(NSArray *)feedbackItems;
-(NSString *)mappingId;
@end

