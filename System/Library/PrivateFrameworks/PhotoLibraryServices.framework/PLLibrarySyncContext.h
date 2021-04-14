/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLSyncContext.h>

@class NSArray, NSMutableDictionary, PLPhotoLibrary, PLCloudRecordOrganizer, NSString;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {

	NSMutableDictionary* _assetAdjustmentStatesByCloudIdentifier;
	NSArray* _personUUIDsToDedupe;
	PLPhotoLibrary* _photoLibrary;
	PLCloudRecordOrganizer* _recordOrganizer;

}

@property (readonly) PLPhotoLibrary * photoLibrary;                         //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) PLCloudRecordOrganizer * recordOrganizer;              //@synthesize recordOrganizer=_recordOrganizer - In the implementation block
@property (nonatomic,readonly) BOOL serverSupportsVision; 
@property (nonatomic,readonly) BOOL serverSupportsGraphHome; 
@property (nonatomic,copy) NSArray * personUUIDsToDedupe;                   //@synthesize personUUIDsToDedupe=_personUUIDsToDedupe - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)serverSupportsVision;
-(PLPhotoLibrary *)photoLibrary;
-(id)makeFace;
-(void)deleteFaces:(id)arg1 ;
-(id)personForUUID:(id)arg1 ;
-(BOOL)personUUIDIsDeleted:(id)arg1 ;
-(id)assetAdjustmentStateForCloudIdentifier:(id)arg1 ;
-(BOOL)serverSupportsGraphHome;
-(NSArray *)personUUIDsToDedupe;
-(void)setPersonUUIDsToDedupe:(NSArray *)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setAssetAdjustmentState:(id)arg1 forCloudIdentifer:(id)arg2 ;
-(PLCloudRecordOrganizer *)recordOrganizer;
@end

