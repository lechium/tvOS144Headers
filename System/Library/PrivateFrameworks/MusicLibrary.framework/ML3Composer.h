/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3Collection.h>

@interface ML3Composer : ML3Collection
+(void)initialize;
+(id)allProperties;
+(id)databaseTable;
+(long long)revisionTrackingCode;
+(id)joinClausesForProperty:(id)arg1 ;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)predisambiguatedProperties;
+(id)defaultOrderingTerms;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)trackForeignPersistentID;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
-(id)multiverseIdentifier;
-(void)updateTrackValues:(id)arg1 ;
-(id)protocolItem;
@end

