/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKTapToRadarPrompt : NSObject <NSSecureCoding> {

	NSString* _reason;
	NSDate* _lastPromptDate;
	long long _promptCount;

}

@property (nonatomic,copy) NSString * reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSDate * lastPromptDate;              //@synthesize lastPromptDate=_lastPromptDate - In the implementation block
@property (assign,nonatomic) long long promptCount;              //@synthesize promptCount=_promptCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(long long)promptCount;
-(void)setPromptCount:(long long)arg1 ;
-(NSDate *)lastPromptDate;
-(void)setLastPromptDate:(NSDate *)arg1 ;
@end

