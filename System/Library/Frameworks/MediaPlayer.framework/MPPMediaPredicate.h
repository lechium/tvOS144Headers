/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPPCompoundPredicate, MPPConditionalPredicate, MPPPersistentIDsPredicate, MPPPropertyPredicate, MPPSearchStringPredicate;

@interface MPPMediaPredicate : PBCodable <NSCopying> {

	MPPCompoundPredicate* _compoundPredicate;
	MPPConditionalPredicate* _conditionalPredicate;
	MPPPersistentIDsPredicate* _persistentIDsPredicate;
	MPPPropertyPredicate* _propertyPredicate;
	MPPSearchStringPredicate* _searchStringPredicate;
	int _type;
	SCD_Struct_MP48 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPropertyPredicate; 
@property (nonatomic,retain) MPPPropertyPredicate * propertyPredicate;                        //@synthesize propertyPredicate=_propertyPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasCompoundPredicate; 
@property (nonatomic,retain) MPPCompoundPredicate * compoundPredicate;                        //@synthesize compoundPredicate=_compoundPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasConditionalPredicate; 
@property (nonatomic,retain) MPPConditionalPredicate * conditionalPredicate;                  //@synthesize conditionalPredicate=_conditionalPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasPersistentIDsPredicate; 
@property (nonatomic,retain) MPPPersistentIDsPredicate * persistentIDsPredicate;              //@synthesize persistentIDsPredicate=_persistentIDsPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchStringPredicate; 
@property (nonatomic,retain) MPPSearchStringPredicate * searchStringPredicate;                //@synthesize searchStringPredicate=_searchStringPredicate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasConditionalPredicate;
-(MPPConditionalPredicate *)conditionalPredicate;
-(void)setConditionalPredicate:(MPPConditionalPredicate *)arg1 ;
-(BOOL)hasPropertyPredicate;
-(BOOL)hasCompoundPredicate;
-(BOOL)hasPersistentIDsPredicate;
-(BOOL)hasSearchStringPredicate;
-(MPPPropertyPredicate *)propertyPredicate;
-(void)setPropertyPredicate:(MPPPropertyPredicate *)arg1 ;
-(MPPCompoundPredicate *)compoundPredicate;
-(void)setCompoundPredicate:(MPPCompoundPredicate *)arg1 ;
-(MPPPersistentIDsPredicate *)persistentIDsPredicate;
-(void)setPersistentIDsPredicate:(MPPPersistentIDsPredicate *)arg1 ;
-(MPPSearchStringPredicate *)searchStringPredicate;
-(void)setSearchStringPredicate:(MPPSearchStringPredicate *)arg1 ;
@end

