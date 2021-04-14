/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration {

	NSDictionary* _filterDictionary;

}

@property (nonatomic,copy) NSDictionary * filterDictionary;              //@synthesize filterDictionary=_filterDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFilterDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)filterDictionary;
@end

