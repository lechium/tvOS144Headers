/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ENRegion, NSDate, NSDictionary;

@interface ENExposureDetectionDaemonSessionState : NSObject <NSSecureCoding> {

	NSString* _clientSigningIdentity;
	ENRegion* _region;
	NSDate* _infectiousnessForDaysSinceOnsetOfSymptomsChangeDate;
	NSDictionary* _infectiousnessForDaysSinceOnsetOfSymptoms;

}

@property (nonatomic,copy) NSString * clientSigningIdentity;                                          //@synthesize clientSigningIdentity=_clientSigningIdentity - In the implementation block
@property (nonatomic,copy) ENRegion * region;                                                         //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSDate * infectiousnessForDaysSinceOnsetOfSymptomsChangeDate;              //@synthesize infectiousnessForDaysSinceOnsetOfSymptomsChangeDate=_infectiousnessForDaysSinceOnsetOfSymptomsChangeDate - In the implementation block
@property (nonatomic,copy) NSDictionary * infectiousnessForDaysSinceOnsetOfSymptoms;                  //@synthesize infectiousnessForDaysSinceOnsetOfSymptoms=_infectiousnessForDaysSinceOnsetOfSymptoms - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ENRegion *)region;
-(void)setRegion:(ENRegion *)arg1 ;
-(NSDictionary *)infectiousnessForDaysSinceOnsetOfSymptoms;
-(void)setInfectiousnessForDaysSinceOnsetOfSymptoms:(NSDictionary *)arg1 ;
-(NSDate *)infectiousnessForDaysSinceOnsetOfSymptomsChangeDate;
-(void)setInfectiousnessForDaysSinceOnsetOfSymptomsChangeDate:(NSDate *)arg1 ;
-(void)setClientSigningIdentity:(NSString *)arg1 ;
-(NSString *)clientSigningIdentity;
@end

