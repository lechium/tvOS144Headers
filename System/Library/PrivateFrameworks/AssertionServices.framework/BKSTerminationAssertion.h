/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssertionServices/BKSAssertion.h>

@class NSString, BKSTerminationContext;

@interface BKSTerminationAssertion : BKSAssertion {

	NSString* _bundleIdentifier;
	unsigned long long _efficacy;
	BKSTerminationContext* _context;

}

@property (nonatomic,readonly) unsigned long long efficacy;                         //@synthesize efficacy=_efficacy - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetBundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) BKSTerminationContext * context;                //@synthesize context=_context - In the implementation block
-(void)invalidate;
-(BKSTerminationContext *)context;
-(BOOL)acquire;
-(id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(unsigned long long)_bksErrorForRBSRequestError:(unsigned long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(unsigned long long)efficacy;
-(NSString *)targetBundleIdentifier;
@end

