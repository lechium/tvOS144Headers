/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding> {

	long long _taskType;
	long long _retryCount;

}

@property (assign,nonatomic) long long taskType;                //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)taskWithType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTaskType:(long long)arg1 ;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(long long)taskType;
@end

