/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libpartition2_dynamic.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MSUDataAccessor/LPMedia.h>

@interface LPAPFSVolume : LPMedia
+(void)initialize;
+(void)_loadMountPointTableForMode:(int)arg1 ;
+(id)supportedContentTypes;
+(id)defaultMountPointGivenRole:(int)arg1 ;
+(id)defaultVolumeNameGivenRole:(int)arg1 ;
-(id)container;
-(BOOL)isEncrypted;
-(int)role;
-(id)volumeGroupUUID;
-(id)snapshotMountPoints;
-(BOOL)mountAtPath:(id)arg1 error:(id*)arg2 ;
-(id)mountAtTemporaryPathWithError:(id*)arg1 ;
-(BOOL)mountAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_createTemporaryMountPointWithError:(id*)arg1 ;
-(BOOL)unmountWithError:(id*)arg1 ;
-(BOOL)unmountWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)snapshotInfoWithError:(id*)arg1 ;
-(BOOL)setRole:(int)arg1 withError:(id*)arg2 ;
-(BOOL)isCaseSenstive;
-(BOOL)isFilevaultEncrypted;
-(id)pairedVolume;
-(BOOL)isMounted;
-(BOOL)eraseVolumeWithError:(id*)arg1 ;
-(BOOL)mountWithError:(id*)arg1 ;
-(BOOL)unmountAllWithError:(id*)arg1 ;
-(BOOL)deleteVolumeWithError:(id*)arg1 ;
-(id)snapshotsWithError:(id*)arg1 ;
-(BOOL)createSnapshot:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSnapshots:(id)arg1 waitForDeletionFor:(double)arg2 error:(id*)arg3 ;
-(BOOL)renameSnapshot:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(BOOL)revertToSnapshot:(id)arg1 error:(id*)arg2 ;
-(BOOL)rootToSnapshot:(id)arg1 error:(id*)arg2 ;
@end

