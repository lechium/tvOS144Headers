/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPredicate;

@interface PLPairingProcessor : NSObject {

	NSPredicate* _locatedInUsersPhotoLibrary;

}

@property (nonatomic,retain) NSPredicate * locatedInUsersPhotoLibrary;              //@synthesize locatedInUsersPhotoLibrary=_locatedInUsersPhotoLibrary - In the implementation block
-(id)init;
-(id)groupIDForAsset:(id)arg1 ;
-(id)firstGroupFromAssets:(id)arg1 ;
-(id)combinePair:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestForLibrary;
-(id)fetchRequestForSortedGroupIDs:(id)arg1 ;
-(void)setDeferredProcessingIfNescessaryForAsset:(id)arg1 ;
-(BOOL)_copyResourceOfType:(unsigned)arg1 onAsset:(id)arg2 toType:(unsigned)arg3 onAsset:(id)arg4 error:(id*)arg5 ;
-(NSPredicate *)locatedInUsersPhotoLibrary;
-(BOOL)updatePrimaryAsset:(id)arg1 andRemoveAssetIfPossible:(id)arg2 ;
-(BOOL)processPairingForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)_copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)_deleteResourceOfType:(unsigned)arg1 forAsset:(id)arg2 verifyInserted:(BOOL)arg3 deleteFile:(BOOL)arg4 ;
-(void)setLocatedInUsersPhotoLibrary:(NSPredicate *)arg1 ;
@end

