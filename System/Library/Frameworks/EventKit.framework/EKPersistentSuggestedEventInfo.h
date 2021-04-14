/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@class EKPersistentEvent, NSString, NSDate;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (assign,nonatomic) EKPersistentEvent * owner; 
@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,copy) NSString * extractionGroupIdentifier; 
+(id)relations;
+(Class)meltedClass;
+(id)suggestedEventInfoWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOwner:(EKPersistentEvent *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(NSString *)uniqueKey;
-(EKPersistentEvent *)owner;
-(int)entityType;
-(NSString *)opaqueKey;
-(NSString *)extractionGroupIdentifier;
-(id)semanticIdentifier;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(void)setExtractionGroupIdentifier:(NSString *)arg1 ;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
@end

