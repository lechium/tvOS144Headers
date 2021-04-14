/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/_HKBinarySample.h>

@class HKQuantity, NSNumber, NSArray, NSString;

@interface HKElectrocardiogram : HKSample <_HKBinarySample> {

	Electrocardiogram* _reading;
	unsigned long long _privateClassification;
	HKQuantity* _averageHeartRate;
	long long _symptomsStatus;

}

@property (getter=_algorithmVersion,nonatomic,readonly) NSNumber * algorithmVersion; 
@property (nonatomic,readonly) unsigned long long privateClassification; 
@property (getter=privateSymptoms,nonatomic,readonly) unsigned long long privateSymptoms; 
@property (nonatomic,copy,readonly) NSArray * leadNames; 
@property (getter=_localizedSymptoms,nonatomic,readonly) NSArray * localizedSymptoms; 
@property (nonatomic,readonly) long long numberOfVoltageMeasurements; 
@property (nonatomic,copy,readonly) HKQuantity * samplingFrequency; 
@property (nonatomic,readonly) long long classification; 
@property (nonatomic,copy,readonly) HKQuantity * averageHeartRate; 
@property (nonatomic,readonly) long long symptomsStatus;                                               //@synthesize symptomsStatus=_symptomsStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)_electrocardiogramWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)payload;
-(void)setReading:(Electrocardiogram*)arg1 ;
-(id)frequency;
-(long long)classification;
-(unsigned long long)_classification;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(BOOL)prepareForSaving:(id*)arg1 ;
-(HKQuantity *)averageHeartRate;
-(unsigned long long)privateClassification;
-(long long)symptomsStatus;
-(void)_setPrivateClassification:(unsigned long long)arg1 ;
-(void)_setAverageHeartRate:(id)arg1 ;
-(long long)numberOfVoltageMeasurements;
-(HKQuantity *)samplingFrequency;
-(void)_enumerateDataForLead:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_setPayload:(id)arg1 ;
-(long long)symptoms;
-(void)_setSymptomsStatus:(long long)arg1 ;
-(unsigned long long)privateSymptoms;
-(NSArray *)leadNames;
-(id)_algorithmVersion;
-(void)enumerateDataForLead:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)_localizedClassificationWithActiveAlgorithmVersion:(long long)arg1 ;
-(id)_localizedSymptoms;
-(long long)numberOfValues;
-(unsigned long long)_symptoms;
@end

