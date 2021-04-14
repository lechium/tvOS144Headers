/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface WFQuantityValue : NSObject <NSSecureCoding> {

	NSDecimalNumber* _magnitude;
	NSString* _unitString;

}

@property (nonatomic,readonly) NSDecimalNumber * magnitude;              //@synthesize magnitude=_magnitude - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitString;               //@synthesize unitString=_unitString - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)magnitude;
-(NSString *)unitString;
-(id)initWithMagnitude:(id)arg1 unitString:(id)arg2 ;
@end
