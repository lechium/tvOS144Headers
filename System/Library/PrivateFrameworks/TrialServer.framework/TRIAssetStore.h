/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRIPaths, TRIAssetExtracting;
#import <TrialServer/TrialServer-Structs.h>
@interface TRIAssetStore : NSObject {

	id<TRIPaths> _paths;
	id<TRIAssetExtracting> _extractor;

}
+(id)shortHashForAssetIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithPaths:(id)arg1 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned)arg1 ;
-(BOOL)hasAssetWithIdentifier:(id)arg1 type:(unsigned char*)arg2 ;
-(id)initWithPaths:(id)arg1 extractor:(id)arg2 ;
-(BOOL)_validateAssetIdentifier:(id)arg1 ;
-(BOOL)_saveFileAssetWithIdentifier:(id)arg1 assetData:(id)arg2 ;
-(BOOL)_saveDirectoryAssetWithIdentifier:(id)arg1 assetData:(id)arg2 ;
-(BOOL)_acquireLockfileAndRunBlock:(/*^block*/id)arg1 ;
-(id)_pathForAssetDirWithIdentifier:(id)arg1 ;
-(id)_createTempDir;
-(BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)arg1 dest:(id)arg2 ;
-(void)_forceRemoveItemAtPath:(id)arg1 ;
-(BOOL)_removeAssetWithIdentifier:(id)arg1 flockWitness:(const TRIFlockWitness_Ref)arg2 ;
-(id)_requireAssetStoreTempDir;
-(BOOL)_linkFileAssetWithIdentifier:(id)arg1 toPath:(id)arg2 ;
-(BOOL)_linkDirectoryAssetWithIdentifier:(id)arg1 toPath:(id)arg2 ;
-(BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)arg1 ;
-(id)_pathForRefsToAssetWithIdentifier:(id)arg1 ;
-(id)_pathForAssetContentWithIdentifier:(id)arg1 ;
-(BOOL)_addSymlinkFromAssetWithIdentifier:(id)arg1 toPath:(id)arg2 ;
-(BOOL)_removeDeadSymlinksWithFlockWitness:(const TRIFlockWitness_Ref)arg1 numRemoved:(unsigned*)arg2 ;
-(BOOL)_removeUnreferencedAssetsWithFlockWitness:(const TRIFlockWitness_Ref)arg1 olderThanAge:(unsigned)arg2 numRemoved:(unsigned*)arg3 ;
-(BOOL)_isValidTargetForSymlink:(id)arg1 assetIdentifier:(id)arg2 ;
-(void)_enumerateAssetDirsUsingBlock:(/*^block*/id)arg1 ;
-(int)_collectDeadSymlinks;
-(BOOL)_removePathsInFd:(int)arg1 numRemoved:(unsigned*)arg2 ;
-(int)_collectUnreferencedAssets;
-(BOOL)_incrementUnrefAgeForAssetWithIdentifier:(id)arg1 newValue:(unsigned*)arg2 ;
-(BOOL)_enumerateZeroTerminatedStringsInFd:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_isDirectoryAtPath:(id)arg1 matchingAssetContentAtPath:(id)arg2 ;
-(BOOL)_isFileAtPath:(id)arg1 matchingAssetContentAtPath:(id)arg2 ;
-(void)_fixupPermissionsOnPath:(id)arg1 permissionBits:(const unsigned short*)arg2 ;
-(BOOL)_nonAtomicOverwriteWithSrc:(id)arg1 dest:(id)arg2 finalPermissionBits:(const unsigned short*)arg3 ;
-(BOOL)saveAssetWithIdentifier:(id)arg1 assetData:(id)arg2 type:(unsigned char)arg3 ;
-(BOOL)removeAssetWithIdentifier:(id)arg1 ;
-(BOOL)linkAssetWithIdentifier:(id)arg1 toPath:(id)arg2 ;
-(void)enumerateSavedAssetsUsingBlock:(/*^block*/id)arg1 ;
@end
