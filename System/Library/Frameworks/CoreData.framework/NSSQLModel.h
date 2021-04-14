/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSStoreMapping.h>

@class NSString, NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {

	NSString* _configuration;
	NSManagedObjectModel* _mom;
	NSKnownKeysDictionary* _entitiesByName;
	NSMutableArray* _entities;
	id* _entityDescriptionToSQLMap;
	unsigned long long _brokenHashVersion;
	BOOL _retainLeopardStyleDictionaries;
	BOOL _modelHasPrecomputedKeyOrder;
	BOOL _hasVirtualToOnes;
	unsigned _entityIDOffset;
	unsigned _lastEntityID;

}
-(void)dealloc;
-(void)finalize;
-(id)configurationName;
-(id)entityForID:(unsigned long long)arg1 ;
-(id)managedObjectModel;
-(id)entities;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 ;
-(id)entitiesByName;
-(unsigned)_entityOffset;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 ;
-(id)entityNamed:(id)arg1 ;
-(unsigned long long)entityIDForName:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3 ;
-(BOOL)_modelHasPrecomputedKeyOrder;
-(void)_recordHasVirtualToOnes;
-(BOOL)_useLeopardStyleHashing;
-(BOOL)_useSnowLeopardStyleHashing;
-(id)_precomputedKeyOrderForEntity:(id)arg1 ;
-(void)_addIndexedEntity:(id)arg1 ;
-(BOOL)_generateModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 brokenHashVersion:(unsigned long long)arg4 ;
-(id)_entityMapping;
-(id)_sqlEntityWithRenamingIdentifier:(id)arg1 ;
-(unsigned)_lastEntityID;
-(BOOL)_retainHashHack;
@end

