/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKDMAPEntity.h>

@class NSMutableDictionary, TVHKDMAPEntity, NSDictionary, NSString;

@interface TVHKDMAPChangeTrackingEntity : NSObject <TVHKDMAPEntity> {

	NSMutableDictionary* _mutatedAttributeValues;
	TVHKDMAPEntity* _entity;

}

@property (nonatomic,retain) NSMutableDictionary * mutatedAttributeValues;               //@synthesize mutatedAttributeValues=_mutatedAttributeValues - In the implementation block
@property (nonatomic,retain) TVHKDMAPEntity * entity;                                    //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy,readonly) NSDictionary * changedAttributeValues; 
@property (nonatomic,copy,readonly) NSDictionary * commitedAttributeValues; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long protocol; 
@property (nonatomic,copy,readonly) NSDictionary * attributeValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(unsigned long long)type;
-(unsigned long long)protocol;
-(BOOL)hasChanges;
-(TVHKDMAPEntity *)entity;
-(void)setEntity:(TVHKDMAPEntity *)arg1 ;
-(NSDictionary *)attributeValues;
-(id)initWithEntity:(id)arg1 ;
-(void)commitChanges;
-(id)attributeValueForCode:(id)arg1 ;
-(void)setAttributeValue:(id)arg1 forCode:(id)arg2 ;
-(void)prepopulateAttributeValues;
-(NSDictionary *)changedAttributeValues;
-(NSMutableDictionary *)mutatedAttributeValues;
-(NSDictionary *)commitedAttributeValues;
-(id)_mutableAttributeValuesData;
-(void)setMutatedAttributeValues:(NSMutableDictionary *)arg1 ;
@end

