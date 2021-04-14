/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDNaturalLightingCurve, NSTimeZone, NSString;

@interface HMDNaturalLightingContext : HMFObject <HMFLogging, NSSecureCoding, NSCopying> {

	HMDNaturalLightingCurve* _curve;
	NSTimeZone* _timeZone;

}

@property (copy,readonly) HMDNaturalLightingCurve * curve;              //@synthesize curve=_curve - In the implementation block
@property (copy,readonly) NSTimeZone * timeZone;                        //@synthesize timeZone=_timeZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(HMDNaturalLightingCurve *)curve;
-(id)attributeDescriptions;
-(id)initWithCurve:(id)arg1 timeZone:(id)arg2 ;
@end
