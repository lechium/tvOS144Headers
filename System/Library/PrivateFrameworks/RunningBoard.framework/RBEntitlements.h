/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBEntitlementPossessing.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject <RBEntitlementPossessing> {

	NSSet* _entitlements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(id)_initWithEntitlements:(id)arg1 ;
@end

