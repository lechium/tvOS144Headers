/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSingletonOverriding.h>

@class NSString;

@interface IMSingletonOverride : NSObject <IMSingletonOverriding> {

	id _overriddenSingleton;

}

@property (__weak) id overriddenSingleton;                          //@synthesize overriddenSingleton=_overriddenSingleton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)overriddenSingleton;
-(void)setOverriddenSingleton:(id)arg1 ;
-(void)didOverrideSingleton:(id)arg1 ;
-(BOOL)shouldInvokeSelector:(SEL)arg1 onSingleton:(id)arg2 ;
@end

