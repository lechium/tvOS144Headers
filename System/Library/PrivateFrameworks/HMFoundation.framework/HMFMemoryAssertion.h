/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFAssertion.h>

@protocol OS_os_transaction;
@class NSObject;

@interface HMFMemoryAssertion : HMFAssertion {

	NSObject*<OS_os_transaction> _internal;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> internal;              //@synthesize internal=_internal - In the implementation block
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(NSObject*<OS_os_transaction>)internal;
-(void)setInternal:(NSObject*<OS_os_transaction>)arg1 ;
-(void)mark;
@end

