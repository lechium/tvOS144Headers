/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class NSArray, HKInspectableValue, NSString;

@interface HKInspectableValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	long long _collectionType;
	NSArray* _collection;
	NSArray* _elementTags;

}

@property (nonatomic,readonly) NSArray * collection;                               //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSArray * elementTags;                              //@synthesize elementTags=_elementTags - In the implementation block
@property (nonatomic,readonly) long long collectionType;                           //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,readonly) HKInspectableValue * inspectableValue; 
@property (nonatomic,readonly) HKInspectableValue * min; 
@property (nonatomic,readonly) HKInspectableValue * max; 
@property (nonatomic,readonly) NSArray * inspectableValues; 
@property (nonatomic,readonly) NSString * unitString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
+(id)inspectableValueCollectionRangeWithMin:(id)arg1 max:(id)arg2 ;
+(id)inspectableValueCollectionRangeWithMin:(id)arg1 ;
+(id)inspectableValueCollectionRangeWithMax:(id)arg1 ;
+(id)inspectableValueCollectionSingleWithValue:(id)arg1 ;
+(id)inspectableValueCollectionListWithValues:(id)arg1 ;
+(id)inspectableValueCollectionTaggedListWithValues:(id)arg1 tags:(id)arg2 ;
+(BOOL)hasNoValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)collection;
-(HKInspectableValue *)max;
-(HKInspectableValue *)min;
-(long long)collectionType;
-(NSString *)unitString;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 ;
-(id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 tags:(id)arg3 ;
-(HKInspectableValue *)inspectableValue;
-(void)_assertCollectionType;
-(NSArray *)inspectableValues;
-(id)valuesWithTag:(id)arg1 ;
-(NSArray *)elementTags;
@end

