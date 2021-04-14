/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSString, NSDate, NSURL, NSSet;

@interface PLShare : PLManagedObject <PLCloudDeletable>

@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * scopeIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (nonatomic,copy) NSDate * expiryDate; 
@property (assign,nonatomic) short status; 
@property (assign,nonatomic) long long scopeType; 
@property (assign,nonatomic) long long publicPermission; 
@property (assign,nonatomic) short localPublishState; 
@property (assign,nonatomic) short trashedState; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (nonatomic,retain) NSSet * participants; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)shareWithUUID:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(void)deleteAllSharesInManagedObjectContext:(id)arg1 ;
+(void)fetchShareFromShareURL:(id)arg1 inPhotoLibrary:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)shareWithShareURL:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)_registeredSubclasses;
+(id)scopeIdentifierPrefix;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(id)shareWithScopedIdentifier:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)shareWithScopeIdentifier:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)sharesWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3 ;
+(id)predicateToExcludeTrashedShares;
+(id)predicateToExcludeExpiredShares;
+(id)_basePredicateIncludeTrashedShares:(BOOL)arg1 ;
+(void)deleteExpiredSharesInManagedObjectContext:(id)arg1 ;
+(BOOL)supportsCPLScopeType:(long long)arg1 ;
+(void)createOrUpdateShareWithScopeChange:(id)arg1 photoLibrary:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)owner;
-(long long)publicPermission;
-(void)setPublicPermission:(long long)arg1 ;
-(long long)scopeType;
-(void)setScopeType:(long long)arg1 ;
-(id)_statusDescription;
-(id)cplScopeChange;
-(long long)cloudDeletionType;
-(NSString *)cloudUUIDForDeletion;
-(void)acceptWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)publishWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateWithScopeChange:(id)arg1 ;
-(void)trash;
@end

