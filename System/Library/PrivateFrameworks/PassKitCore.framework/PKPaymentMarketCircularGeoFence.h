/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPaymentMarketGeoFence.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLCircularRegion, NSUUID, NSString;

@interface PKPaymentMarketCircularGeoFence : NSObject <PKPaymentMarketGeoFence, NSSecureCoding> {

	CLCircularRegion* _circle;
	NSUUID* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)distanceFromLocation:(id)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
@end

