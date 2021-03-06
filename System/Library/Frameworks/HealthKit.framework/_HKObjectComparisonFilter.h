/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKComparisonFilter.h>

@class NSString;

@interface _HKObjectComparisonFilter : _HKComparisonFilter {

	BOOL _compareForLocalDevice;
	NSString* _devicePropertyName;
	NSString* _metadataKey;

}
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)isSupportedDevicePropertyKey:(id)arg1 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg1 ;
+(BOOL)allowsEmptyContainerValuesForKeyPath:(id)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(void)configureInMemoryFilter;
-(void)_configureForKeyPathSource;
-(void)_configureForKeyPathDeviceProperty;
-(void)_configureForMetdataKeyPath;
-(BOOL)_acceptsDataObjectWithValue:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithSource:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithAppleWatchSource:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithContributor:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithCreationTime:(double)arg1 ;
-(BOOL)_acceptsDataObjectComparingDeviceProperty:(id)arg1 ;
-(BOOL)_acceptsDataObjectWithMetadata:(id)arg1 ;
@end

